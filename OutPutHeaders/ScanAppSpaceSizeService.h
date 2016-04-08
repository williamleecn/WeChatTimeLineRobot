/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "MMService.h"

@class NSString;

@interface ScanAppSpaceSizeService : MMService <MMService> {
	BOOL _hasAppSpaceSize;
	int _runStatus;
	long long _appSpaceSize;
	long long _scannedFileCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) long long scannedFileCount;
@property(assign) long long appSpaceSize;
@property(assign) int runStatus;
@property(assign) BOOL hasAppSpaceSize;
-(void)onServiceTerminate;
-(void)asyncStopTask;
-(void)asyncStartTask;
-(void)folderSizeAtPath:(const char*)path;
-(void)onScanTaskFinished;
-(void)onScanTaskUpdateProgress;
-(id)init;
@end
