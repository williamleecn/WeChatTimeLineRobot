/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayControlLogic.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayCreditPayCardDetailInfoViewControllerDelegate.h"
#import "WCPayCreditPayFinishCreateViewControllerDelegate.h"

@class NSString;

@interface WCPayCreditPayControlDetailLogic : WCPayControlLogic <WCPayCreditPayCardDetailInfoViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayCreditPayFinishCreateViewControllerDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)OnGetBindQueryInfo:(id)info Error:(id)error;
-(void)OnSetMainCard:(id)card Error:(id)error;
-(void)OnVerifyPayPassword:(id)password;
-(void)OnPayPasswordError:(id)error ErrorCount:(int)count LockTotalCount:(unsigned long)count3;
-(void)OnQueryWXCreditCardInfo:(id)info Error:(id)error;
-(void)VerifyPayPwdNext:(id)next;
-(void)PayPwdRightActionBack;
-(void)PayPwdBack;
-(void)WCPayCreditPayCardDetailInfoViewControllerViewWillAppear;
-(void)WCPayCreditPayFinishCreateViewControllerGoToGetMoreLimit;
-(void)WCPayCreditPayFinishCreateViewControllerBack;
-(void)WCPayCreditPayCardDetailInfoViewControllerIncreaseLimit;
-(void)WCPayCreditPayCardDetailInfoViewControllerViewBill;
-(void)WCPayCreditPayCardDetailInfoViewControllerUnbindCard:(id)card;
-(void)WCPayCreditPayCardDetailInfoViewControllerSetMainBankCard:(id)card;
-(void)gotoWebViewController:(id)controller;
-(void)WCPayCreditPayCardDetailInfoViewControllerShowCreditDetail;
-(void)WCPayCreditPayCardDetailInfoViewControllerRepayment;
-(void)WCPayCreditPayCardDetailInfoViewControllerShowCreditRights;
-(void)WCPayCreditPayCardDetailInfoViewControllerHelpGuider;
-(void)WCPayCreditPayCardDetailInfoViewControllerContactBrandProfile;
-(void)WCPayCreditPayCardDetailInfoViewControllerContactBrandChat;
-(void)WCPayCreditPayCardDetailInfoViewControllerBack;
-(id)getServiceContant;
-(void)openBranderProfile;
-(void)jumpToNewMessage:(id)newMessage;
-(void)startLogic;
-(id)initWithData:(id)data;
@end

