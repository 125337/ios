@interface _TtC6WeChat31WCFinderRealTimeSyncFeedInfoMgr : MMUserService <MMServiceProtocol>
{
     maxRetryCount; // +0x8
     defaultDelaySeconds; // +0x10
     retryableErrorCodes; // +0x18
     errorPrepareDataFailed; // +0x20
     errorDataServiceUnavailable; // +0x30
     errorContentVMEmpty; // +0x40
     errorFeedIdEmpty; // +0x50
     errorFeedIdConversionFailed; // +0x60
     errorResponseEmpty; // +0x70
     errorSyncFailed; // +0x80
     infoSendSyncRequest; // +0x90
     pendingWorkItem; // +0xa0
     __curContentVM; // +0xa8
     _lastBuffer; // +0xb0
     _isSyncing; // +0xc0
     _retryCount; // +0xc8
}
- (void)updateCurFeed:(id)arg1;
- (void)stopSync;
- (id)init;
- (void)dealloc;
- (void)handleAppDidEnterBackground;
- (void)handleAppWillEnterForeground;
- (void).cxx_destruct;
@end
