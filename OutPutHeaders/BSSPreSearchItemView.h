/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSSBaseItemView.h"

@class AttributeLabel, NSString, UIImageView, UILabel;

@interface BSSPreSearchItemView : BSSBaseItemView {
	NSString* _keyword;
	UIImageView* _headImageView;
	UILabel* _preTipsLabel;
	AttributeLabel* _displayLabel;
}
@property(retain, nonatomic) AttributeLabel* displayLabel;
@property(retain, nonatomic) UILabel* preTipsLabel;
@property(retain, nonatomic) UIImageView* headImageView;
@property(retain, nonatomic) NSString* keyword;
+(float)heightForItem;
-(void).cxx_destruct;
-(void)initView;
-(id)initPreSearchItemViewWithKeyword:(id)keyword;
-(void)dealloc;
@end
