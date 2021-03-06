/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NotifyFromEventDelegate.h"
#import "CBaseEvent.h"

@class NSOperationQueue, NSMutableArray, MMTimer, NSMutableDictionary;

@interface CMultiEvent : CBaseEvent <NotifyFromEventDelegate> {
	NSMutableArray* m_arrEvent;
	MMTimer* m_oTimerCheckEvent;
	NSMutableDictionary* m_dicThreadEvent;
	NSOperationQueue* m_operationQueuEvent;
}
-(void).cxx_destruct;
-(id)GetLock;
-(id)FindEvent:(unsigned long)event;
-(void)NotifyFromEvent:(id)event Message:(unsigned long)message MessageInfo:(id)info;
-(BOOL)IsEventRunning:(unsigned long)running;
-(unsigned long)IsEventTypeExist:(unsigned long)exist;
-(void)StopEvent:(unsigned long)event;
-(BOOL)SetEvent:(id)event EventInfo:(id)info Start:(BOOL)start Ret:(unsigned*)ret RetInfo:(id)info5;
-(BOOL)StartEvent:(id)event Ret:(unsigned*)ret RetInfo:(id)info;
-(void)ClearStopEvent;
-(void)TimerCheckEvent;
-(void)Stop;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(void)dealloc;
-(id)init;
@end

