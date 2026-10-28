@interface MMLiveResourceFetcherTask : NSObject
{
    NSString * _taskId; // +0x8
    NSString * _resourceUri; // +0x10
    NSString * _cachingPath; // +0x18
    unsigned long long _integrityValidationType; // +0x20
    NSString * _expectedDigest; // +0x28
    id _userInfo; // +0x30
    MMLiveResourceFetcherTaskStatusInfo * _status; // +0x38
    NSString * _downloadWorkingPath; // +0x40
    NSString * _digestPath; // +0x48
    MMLiveFlowCancelationSource * _cancelationSource; // +0x50
    struct _priorityStorage; // +0x58
}
+ (void)batchSetPriorityWithBlock:(id /* block */)arg1;
- (id)initWithResourceUri:(id)arg1 cachingPath:(id)arg2;
- (id)cancelationToken;
- (BOOL)cancelationRequested;
- (struct)priority;
- (void)setPriority:(struct)arg1;
- (id)pinnedPaths;
- (void)cancel;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)resourceUri;
- (void)setResourceUri:(id)arg1;
- (id)cachingPath;
- (void)setCachingPath:(id)arg1;
- (unsigned long long)integrityValidationType;
- (void)setIntegrityValidationType:(unsigned long long)arg1;
- (id)expectedDigest;
- (void)setExpectedDigest:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)downloadWorkingPath;
- (void)setDownloadWorkingPath:(id)arg1;
- (id)digestPath;
- (void)setDigestPath:(id)arg1;
- (id)cancelationSource;
- (void)setCancelationSource:(id)arg1;
- (struct)priorityStorage;
- (void)setPriorityStorage:(struct)arg1;
- (void).cxx_destruct;
@end
