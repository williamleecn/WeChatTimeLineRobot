/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCDataItem, WCUserComment, NSString;

@interface SnsTranslateDataWrap : XXUnknownSuperclass {
	WCDataItem* m_dataItem;
	WCUserComment* m_userComment;
	int iScene;
	NSString* m_dataItemTid;
}
@property(assign, nonatomic) int iScene;
@property(retain, nonatomic) NSString* m_dataItemTid;
@property(retain, nonatomic) WCUserComment* m_userComment;
@property(retain, nonatomic) WCDataItem* m_dataItem;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end

