/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSRecursiveLock, CMMDB, NSString, NSDate, OplogDataLogic;
@protocol NotifyFromEventDelegate;

@interface NewSyncService : MMService <MMService, MessageObserverDelegate, PBMessageObserverDelegate> {
	BOOL m_bNeedSync;
	BOOL m_bHasSync;
	BOOL m_bHasInit;
	unsigned long m_uiSelector;
	unsigned long m_uiSyncScene;
	unsigned long m_uiSyncContinueCount;
	NSString* m_lastSyncKeyMd5;
	NSDate* m_tLastNotify;
	NSDate* m_tLastLongConnDisconnect;
	CMMDB* m_oMMDB;
	NSString* m_nsDocPath;
	NSRecursiveLock* m_oLock;
	NSRecursiveLock* m_oHandleSyncLock;
	id<NotifyFromEventDelegate> m_delSyncHandler;
	OplogDataLogic* m_oplogData;
	BOOL m_bNeedSyncOplog;
	BOOL m_bSyncOplog;
	BOOL m_bSyncOpError;
	BOOL m_bIsSyncPause;
	BOOL _m_bFirstSyncAfterBgfgChange;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) BOOL m_bFirstSyncAfterBgfgChange;
@property(assign) unsigned long m_uiSyncScene;
@property(assign) BOOL m_bHasSync;
@property(assign) BOOL m_bNeedSync;
-(void).cxx_destruct;
-(void)makeSyncResume;
-(void)makeSyncPause;
-(unsigned long)StartOplog:(unsigned long)oplog Oplog:(id)oplog2;
-(void)HandleOplog:(id)oplog Event:(unsigned long)event;
-(void)NeedToSyncOplog;
-(void)checkSyncOplog;
-(BOOL)InsertOplog:(unsigned long)oplog Oplog:(id)oplog2 Sync:(BOOL)sync;
-(void)startSyncOplog;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(BOOL)HandleSyncResp:(id)resp Push:(BOOL)push ShowPush:(BOOL)push3 Scene:(unsigned long)scene;
-(void)HandleNewSyncPush:(id)push;
-(BOOL)CheckSelector:(unsigned long)selector;
-(void)SetSelector:(unsigned long)selector;
-(unsigned long)GetSelector;
-(void)AfterManualAuthNotifySync;
-(BOOL)BackGroundFetchToSync;
-(void)ProcessStartSync;
-(void)BackGroundToForeGroundSync;
-(void)ApnsNotifySync;
-(void)NeedToSync;
-(BOOL)NotifyToSync;
-(BOOL)InternalCreateSync:(unsigned long)sync;
-(void)onServiceEnterForeground;
-(void)onServiceEnterBackground;
-(void)onServiceClearData;
-(void)SetLastLongConnDisconectTime:(id)time;
-(void)SetLastNotifyTime:(id)time;
-(void)InitDB:(id)db Lock:(id)lock DocPath:(id)path SyncHandlerDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end
