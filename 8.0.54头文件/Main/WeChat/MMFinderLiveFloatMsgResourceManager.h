@interface MMFinderLiveFloatMsgResourceManager : NSObject <MMFinderLiveResPathManagerProtocol>
{
    MMFinderLiveResDownloadManager * _downloadMgr; // +0x8
}
+ (void)initialize;
+ (void)refreshResourceUsageAtPath:(id)arg1;
+ (void)cleanUnusedResources;
+ (id)cacheFolder;
- (id)init;
- (void)getFloatMsgResourceWithUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)cachePath:(id)arg1;
- (id)zipPath:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end

