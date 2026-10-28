@interface WCFinderMiniGameDownloadTask : NSObject <MagicGameLoadingExt, WCFinderAccessoryDownloadTask>
{
    long long _priority; // +0x8
    NSString * _groupId; // +0x10
    unsigned long long _timestamp; // +0x18
    long long _batchIndex; // +0x20
    NSString * _appId; // +0x28
    NSString * _extraData; // +0x30
    id /* block */ _completionBlock; // +0x38
    MMTimer * _timeOutTimer; // +0x40
}
- (id)initWithAppId:(id)arg1 extraData:(id)arg2;
- (void)dealloc;
- (id)identifierKey;
- (void)startDownload;
- (void)stopDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)downloadFailForTimeOut;
- (void)onPreloadStart:(id)arg1;
- (void)onPreloadEnd:(id)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)batchIndex;
- (void)setBatchIndex:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id /* block */)completionBlock;
- (id)timeOutTimer;
- (void)setTimeOutTimer:(id)arg1;
- (void).cxx_destruct;
@end
