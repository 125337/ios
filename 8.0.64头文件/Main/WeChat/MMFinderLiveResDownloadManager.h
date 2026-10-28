@interface MMFinderLiveResDownloadManager : NSObject
{
    MMFinderLiveResDownloader * _downloadManager; // +0x8
}
- (id)init;
- (unsigned long long)pendingTaskCount;
- (void)start:(id)arg1 fileMD5:(id)arg2 enforceIntegrityCheck:(BOOL)arg3 pathManager:(id)arg4 completion:(id /* block */)arg5;
- (void)checkIsFileExist:(id)arg1 enforceIntegrityCheck:(BOOL)arg2 pathManager:(id)arg3 completion:(id /* block */)arg4;
- (void)realStart:(id)arg1 downloadUrlMd5:(id)arg2 fileMD5:(id)arg3 pathManager:(id)arg4 completion:(id /* block */)arg5;
- (void)saveExtraData:(id)arg1 forFileAtPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)extractExtraDataAtPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)downloadManager;
- (void)setDownloadManager:(id)arg1;
- (void).cxx_destruct;
@end
