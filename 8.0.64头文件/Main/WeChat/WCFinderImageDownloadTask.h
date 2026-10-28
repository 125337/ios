@interface WCFinderImageDownloadTask : NSObject <WCFinderAccessoryDownloadTask>
{
    long long _priority; // +0x8
    NSString * _groupId; // +0x10
    unsigned long long _timestamp; // +0x18
    long long _batchIndex; // +0x20
    id /* block */ _completionForBiz; // +0x28
    NSString * _url; // +0x30
    id <WCFImageOperation> _downloadOp; // +0x38
    id /* block */ _completionBlock; // +0x40
}
- (id)initWithUrl:(id)arg1;
- (id)identifierKey;
- (void)startDownload;
- (void)stopDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)setCompletionBlock:(id /* block */)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)batchIndex;
- (void)setBatchIndex:(long long)arg1;
- (id /* block */)completionForBiz;
- (void)setCompletionForBiz:(id /* block */)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)downloadOp;
- (void)setDownloadOp:(id)arg1;
- (id /* block */)completionBlock;
- (void).cxx_destruct;
@end
