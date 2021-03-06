/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "INewQQMailExt.h"
#import "UploadConversationFileDelegate.h"
#import "ComposeSendDelegate.h"
#import "UploadAttachmentDataDelegate.h"
#import "MMService.h"

@class ComposeSendHelper, NSMutableArray, NSString, UploadConversationFileHelper, NewQQMailQueueHelper, UploadAttachmentDataHelper;

@interface NewQQMailMgr : MMService <MMService, INewQQMailExt, UploadConversationFileDelegate, ComposeSendDelegate, UploadAttachmentDataDelegate> {
	UploadConversationFileHelper* m_uploadConversationFileHandler;
	ComposeSendHelper* m_composeSendHandler;
	UploadAttachmentDataHelper* m_uploadAttachmentDataHandler;
	NewQQMailQueueHelper* m_newQQMailQueueHandler;
	NSMutableArray* m_composeSendMailQueue;
	BOOL m_bIsComposeSending;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)OnUploadAttachmentData:(id)data attachID:(id)anId uploadedDataSize:(unsigned long)size err:(int)err;
-(void)OnComposeSendComplete:(int)complete;
-(void)OnUploadConversationFileComplete:(id)complete err:(int)err;
-(void)checkComposeSendMailQueue;
-(void)enComposeSendMailQueue:(id)queue imageInfoList:(id)list attachInfoList:(id)list3;
-(void)popComposeSendMailQueue;
-(id)getComposeSendMailQueueFront;
-(void)NewComposeSend:(id)send imageInfoList:(id)list attachInfoList:(id)list3;
-(void)cancelUploadAttachmentData:(id)data fileName:(id)name;
-(void)NewUploadAttachmentData:(id)data fileName:(id)name;
-(id)genMailContent:(id)content withUploadImageAry:(id)uploadImageAry;
-(id)genUploadImageAry:(id)ary imageInfoList:(id)list;
-(id)getMimeData:(id)data;
-(id)getMimeBody:(id)body;
-(id)getMimeHead:(id)head;
-(id)getLinkIDKey:(id)key;
-(id)getContentID;
-(id)init;
-(void)setLastBoundary:(id)boundary;
-(void)setBoundary:(id)boundary;
@end

