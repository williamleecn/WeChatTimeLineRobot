/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData;

@interface BuiltinIP : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSData* domain;
@property(retain, nonatomic) NSData* ip;
@property(assign, nonatomic) unsigned port;
@property(assign, nonatomic) unsigned type;
+(void)initialize;
@end
