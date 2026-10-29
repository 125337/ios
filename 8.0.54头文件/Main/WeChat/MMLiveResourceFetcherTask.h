@interface MMLiveResourceFetcherTask : NSObject
{
    NSString * _taskId; // +0x8
    NSString * _resourceUri; // +0x10
    NSString * _cachingPath; // +0x18
    unsigned long long _integrityValidationType; // +0x20
    NSString * _expectedDigest; // +0x28
    id _userInfo; // +0x30
    NSString * _downloadWorkingPath; // +0x38
    NSString * _digestPath; // +0x40
}
- (id)initWithResourceUri:(id)arg1 cachingPath:(id)arg2;
- (id)pinnedPaths;
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
- (id)downloadWorkingPath;
- (void)setDownloadWorkingPath:(id)arg1;
- (id)digestPath;
- (void)setDigestPath:(id)arg1;
- (void).cxx_destruct;
@end

