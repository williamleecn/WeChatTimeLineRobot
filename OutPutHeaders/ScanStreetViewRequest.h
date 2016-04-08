/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, PositionInfo;

@interface ScanStreetViewRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) float pitch;
@property(assign, nonatomic) float heading;
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) PositionInfo* userPos;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
