@interface MMWebPrefetchResPkgDownloadTask : NSObject
{
    BOOL _isCancel; // +0x8
    MMWebPrefetchResPkgDownloadRequest * _request; // +0x10
    NSURLSession * _urlSession; // +0x18
    MMWebPrefetchDownloadTask * _downloadPkgTask; // +0x20
    id /* block */ _completionHandler; // +0x28
}
- (id)initWithRequest:(id)arg1 urlSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)start;
- (void)onDownloadBasePkgSuccessWithResult:(id)arg1 request:(id)arg2;
- (void)onMergePkgSuccessWithData:(id)arg1;
- (void)subThread_mergeResPkgWithBasePkgPath:(id)arg1 patchPkgPath:(id)arg2 completion:(id /* block */)arg3;
- (id)mergeResPkgWithBasePkgPath:(id)arg1 patchPkgPath:(id)arg2;
- (void)subThread_verifyLocalFileMd5:(id)arg1 pkgFilePath:(id)arg2 completion:(id /* block */)arg3;
- (void)subThread_verifyLocalFileMd5:(id)arg1 pkgFileData:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)verifyLocalFileMd5:(id)arg1 pkgFilePath:(id)arg2;
- (BOOL)verifyLocalFileMd5:(id)arg1 pkgFileData:(id)arg2;
- (void)cancel;
- (void)mainThread_callBackFailWithErrorMsg:(id)arg1;
- (void)mainThread_callBackSuccessWithPkgPath:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (id)downloadPkgTask;
- (void)setDownloadPkgTask:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end

