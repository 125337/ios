@interface WCFinderMiniAppDownloadTask : NSObject <WAPrefetchMgrExt, WCFinderAccessoryDownloadTask>
{
    long long _priority; // +0x8
    NSString * _groupId; // +0x10
    unsigned long long _timestamp; // +0x18
    long long _batchIndex; // +0x20
    NSString * _username; // +0x28
    NSString * _appId; // +0x30
    NSString * _path; // +0x38
    id /* block */ _completionBlock; // +0x40
    NSString * _requestKey; // +0x48
    MMTimer * _timeOutTimer; // +0x50
}
- (id)initWithUsername:(id)arg1 appId:(id)arg2 path:(id)arg3;
- (void)dealloc;
- (id)identifierKey;
- (void)startDownload;
- (void)stopDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)downloadFailForTimeOut;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)batchIndex;
- (void)setBatchIndex:(long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id /* block */)completionBlock;
- (id)requestKey;
- (void)setRequestKey:(id)arg1;
- (id)timeOutTimer;
- (void)setTimeOutTimer:(id)arg1;
- (void).cxx_destruct;
@end
