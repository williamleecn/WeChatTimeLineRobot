/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface DraftController : XXUnknownSuperclass <NSCoding> {
	NSMutableArray* m_arrReceiver;
	NSMutableArray* m_arrCc;
	NSMutableArray* m_arrBcc;
	NSString* m_topic;
	NSString* m_content;
}
@property(retain, nonatomic) NSString* m_content;
@property(retain, nonatomic) NSString* m_topic;
@property(retain, nonatomic) NSMutableArray* m_arrBcc;
@property(retain, nonatomic) NSMutableArray* m_arrCc;
@property(retain, nonatomic) NSMutableArray* m_arrReceiver;
+(void)deleteAllDraft;
+(void)deleteDraft:(id)draft;
+(BOOL)writeAllDraft:(id)draft mailID:(id)anId;
+(id)readAllDraft:(id)draft;
-(void).cxx_destruct;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
