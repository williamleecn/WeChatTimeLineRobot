/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "WCLanDeviceKissLogicDelegate.h"
#import "MMService.h"

@class NSMutableArray, NSString, WCLanDeviceBaseKissLogic, NSMutableSet, WCLanDeviceData;

@interface WCLanDeviceMsgForwardMgr : MMService <WCLanDeviceKissLogicDelegate, MMService> {
	WCLanDeviceData* m_forwardData;
	NSMutableArray* m_currentDeviceList;
	NSMutableSet* m_deviceLanFlagCache;
	NSMutableSet* m_deviceMD5Set;
	NSMutableSet* m_deviceConnectFlagCache;
	WCLanDeviceBaseKissLogic* m_kissLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onKissDeviceProgressUpdate:(float)update device:(id)device;
-(void)onKissDeviceWithDevice:(id)device errCode:(int)code;
-(void)onDeviceFound:(id)found;
-(void)boundDevicesFinalFeedBack;
-(void)stopAllLogic;
-(void)stopScan;
-(BOOL)hasConnectTask;
-(BOOL)cancelForwarMessageToLanDevice:(id)lanDevice;
-(BOOL)forwardToLanDevice:(id)lanDevice;
-(BOOL)startScan;
-(id)availableDevicesInCache;
-(BOOL)hasAvailableDevice;
-(BOOL)hasAvailableDeviceInTimeLineItem:(id)timeLineItem;
-(BOOL)hasAvailableDeviceInMessageWrap:(id)messageWrap;
-(void)initializeWithTimeLineItem:(id)timeLineItem mediaItem:(id)item;
-(void)initializeWithMessageWrap:(id)messageWrap;
-(id)init;
@end
