/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMService.h"
#import "MMService.h"

@class NSMethodSignature, DeleagateProxyCatchUnImplementMethod, NSString;

@interface MMDelegateCenter : MMService <MMService> {
	DeleagateProxyCatchUnImplementMethod* m_catchUnimplementMethodObj;
	NSMethodSignature* m_unImplementMethodSignature;
	map<unsigned int, MMDicDelegates *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MMDicDelegates *> > > m_mapOwnerMapDelegate;
	map<unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *> > > m_mapDelegateMapOwner;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(unsigned)generateIdKey:(id)key;
+(BOOL)hasProtocol:(id)protocol theProtocol:(id)protocol2;
+(id)generateProtocolsKey:(id)key;
-(id).cxx_construct;
-(void).cxx_destruct;
-(BOOL)onServiceMemoryWarning;
-(BOOL)clearOwnersOnDelegateEx:(void*)ex;
-(BOOL)wrapclearOwnersOnDelegate:(id)delegate;
-(BOOL)clearOwnersOnDelegate:(id)delegate;
-(BOOL)unRegisterAllDelegateOnOwnerEx:(void*)ex;
-(BOOL)wrapUnRegisterAllDelegateOnOwner:(id)owner;
-(BOOL)unRegisterAllDelegateOnOwner:(id)owner;
-(void)setOwnerOnDelegate:(id)delegate delegate:(id)delegate2;
-(id)setDelegateOnOwner:(id)owner delegate:(id)delegate protocols:(id)protocols;
-(id)getDelegateOnOwner:(unsigned)owner delegateid:(id)delegateid protocols:(id)protocols;
-(id)registerDelegateOnOwner:(id)owner delegate:(id)delegate forProtocols:(id)protocols;
-(void)dealloc;
-(id)init;
-(id)getCatchUmimplementMethodObj;
-(id)getUmimplementMethodSignature;
@end
