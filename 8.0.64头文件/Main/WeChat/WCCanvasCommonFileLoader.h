@interface WCCanvasCommonFileLoader : MMObject <ICdnComMgrExt>
{
    NSMutableDictionary * _requestObjectDict; // +0x8
    NSMutableArray * _waittingRequestObjectQueue; // +0x10
    NSMutableArray * _downloadingRequestObjectQueue; // +0x18
}
+ (id)fetchCommonFileBasePath;
+ (id)fetchCommonFileDownloadTmpPath;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (id)init;
- (void)dealloc;
- (void)stopAllDownloads;
- (id)fetchCommonFilePathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (void)loadCommonFileWithUrl:(id)arg1 fileMD5:(id)arg2;
- (void)retryToDownloadForRequestObject:(id)arg1;
- (void)resumeToDownloadNextRequest;
- (void)downloadDoneForUrl:(id)arg1 fileMD5:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)verifyDownloadFileWithUrl:(id)arg1 fileMD5:(id)arg2 tmpPath:(id)arg3;
- (id)generateFilePathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (id)generateFileTempPathWithUrl:(id)arg1 fileMD5:(id)arg2;
- (id)generateFileKeyWithUrl:(id)arg1 fileMD5:(id)arg2;
- (id)generateRequestObjectWithUrl:(id)arg1 fileMD5:(id)arg2 filePath:(id)arg3 requestKey:(id)arg4;
- (void)idKeyReportForKey:(unsigned int)arg1;
- (id)requestObjectDict;
- (void)setRequestObjectDict:(id)arg1;
- (id)waittingRequestObjectQueue;
- (void)setWaittingRequestObjectQueue:(id)arg1;
- (id)downloadingRequestObjectQueue;
- (void)setDownloadingRequestObjectQueue:(id)arg1;
- (void).cxx_destruct;
@end
