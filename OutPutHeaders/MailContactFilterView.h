/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMUIView.h"

@class NSMutableArray, NSString, MMTableView;
@protocol MailContactFilterViewDelegate;

@interface MailContactFilterView : MMUIView <UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSMutableArray* m_filterArray;
	id<MailContactFilterViewDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MailContactFilterViewDelegate> m_delegate;
@property(retain, nonatomic) NSMutableArray* m_filterArray;
-(void).cxx_destruct;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)initView;
-(void)initData;
-(void)resetOffset;
-(void)reloadTableView;
@end

