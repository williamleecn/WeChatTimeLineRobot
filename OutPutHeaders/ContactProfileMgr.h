/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface ContactProfileMgr : MMService <MMService, PBMessageObserverDelegate> {
	NSMutableDictionary* m_profiles;
	NSMutableDictionary* m_profileImages;
	BOOL m_isGettingProfile;
	BOOL m_isGettingProfileAndImage;
	unsigned long m_retryCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(id)unpackProfiles:(id)profiles;
-(void)parseBasicInfo:(id)info basicInfo:(id)info2;
-(void)parseExtInfo:(id)info extInfo:(id)info2;
-(long long)decodeToInteger:(XmlReaderNode_t*)integer key:(const char*)key;
-(id)decodeToString:(XmlReaderNode_t*)string key:(const char*)key;
-(void)cleanUpContacts:(id)contacts withOpCode:(unsigned long)opCode;
-(void)updateContacts:(id)contacts withOpCode:(unsigned long)opCode andNames:(id)names;
-(void)GetQQContactProfileAndImages:(id)images;
-(void)GetQQContactProfileAndImage:(id)image;
-(void)GetQQContactProfiles:(id)profiles;
-(void)GetQQContactProfile:(id)profile;
-(void)InternalGetContactProfileAndImage:(id)image startNow:(BOOL)now;
-(void)InternalGetContactProfile:(id)profile startNow:(BOOL)now;
-(void)GetProfiles:(unsigned long)profiles;
-(void)dealloc;
-(id)init;
@end

