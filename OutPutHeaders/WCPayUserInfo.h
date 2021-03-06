/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WCPayCredInfo, NSString;

@interface WCPayUserInfo : XXUnknownSuperclass <NSCoding> {
	int m_regFlag;
	NSString* m_usrName;
	WCPayCredInfo* m_usrCredInfo;
	NSString* m_usrIDNumber;
	NSString* m_usrPhoneNumber;
	unsigned long m_cardUserFlag;
	BOOL m_bHadCard;
	NSString* m_nsFacingReceiverQRCode;
	BOOL m_bCanUseNewCardToResetPwd;
	NSString* m_nsResetPwdNeedToOpenUrl;
	BOOL _m_bTouchIDOpen;
	BOOL _m_bTouchIDEnable;
	NSString* m_nsTouchIDForbidword;
	NSString* _m_lctWording;
	NSString* _m_lctUrl;
}
@property(retain, nonatomic) NSString* m_lctUrl;
@property(retain, nonatomic) NSString* m_lctWording;
@property(retain, nonatomic) NSString* m_nsTouchIDForbidword;
@property(assign, nonatomic) BOOL m_bTouchIDEnable;
@property(assign, nonatomic) BOOL m_bTouchIDOpen;
@property(retain, nonatomic) NSString* m_nsResetPwdNeedToOpenUrl;
@property(assign, nonatomic) BOOL m_bCanUseNewCardToResetPwd;
@property(retain, nonatomic) NSString* m_nsFacingReceiverQRCode;
@property(assign, nonatomic) BOOL m_bHadCard;
@property(assign, nonatomic) unsigned long m_cardUserFlag;
@property(retain, nonatomic) NSString* m_usrPhoneNumber;
@property(retain, nonatomic) NSString* m_usrIDNumber;
@property(retain, nonatomic) WCPayCredInfo* m_usrCredInfo;
@property(retain, nonatomic) NSString* m_usrName;
@property(assign, nonatomic) int m_regFlag;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
@end

