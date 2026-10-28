@interface MMFinderLiveDecorationResMgr : MMUserService <MMServiceProtocol>
{
    MMLiveResourceFetcherRootFlowAction * _downloader; // +0x8
    NSMutableSet * _downloadKeyList; // +0x10
    NSRecursiveLock * _lock; // +0x18
}
- (void)onServiceInit;
- (BOOL)isDownloading:(id)arg1;
- (BOOL)downloadMaterialResource:(id)arg1;
- (void)p_downloadMaterialResource:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)downloadKeyList;
- (void)setDownloadKeyList:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
