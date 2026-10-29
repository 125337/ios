@interface MMLiveRewardGiftNewCustomizationMagicEngineResLogic : NSObject
{
    id /* block */ _loadStateChangeCallback; // +0x8
    MMFinderLiveResDownloadManager * _downloadMgr; // +0x10
    NSMutableDictionary * _loadTaskDict; // +0x18
}
- (void)loadGiftResForURL:(id)arg1 productId:(id)arg2 fileMD5:(id)arg3 enforceIntegrityCheck:(BOOL)arg4 callback:(id /* block */)arg5;
- (void)startLoad:(id)arg1;
- (void)startDownload:(id)arg1 plugin:(id)arg2;
- (void)onTask:(id)arg1 downLoadCompleted:(BOOL)arg2 resUrl:(id)arg3 downLoadUrlHash:(BOOL)arg4 plugin:(id)arg5;
- (void)onTask:(id)arg1 loadSuccessWithPath:(id)arg2 updateLoadCompletion:(id /* block */)arg3;
- (void)addLoadTask:(id)arg1;
- (void)endLoadTask:(id)arg1 withResult:(unsigned long long)arg2 path:(id)arg3;
- (void)updateMagicResourcesIfNeededWithZipPath:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)checkUpdateResultNeedRecordTag:(long long)arg1;
- (BOOL)checkUpdateResultNeedReDownLoadSrc:(long long)arg1;
- (long long)getUpdateMagicResourcesSuccessTagFromData:(id)arg1;
- (id)getDataWithUpdateMagicResourcesSuccessTag:(long long)arg1;
- (id)downloadMgr;
- (id)loadTaskDict;
- (id /* block */)loadStateChangeCallback;
- (void)setLoadStateChangeCallback:(id /* block */)arg1;
- (void)setDownloadMgr:(id)arg1;
- (void)setLoadTaskDict:(id)arg1;
- (void).cxx_destruct;
@end

