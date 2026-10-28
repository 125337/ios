@interface MMKSWCSessionDownloader : MMKSBasicMusicDownloader <WCURLSessionDataDelegate>
{
    WCURLSession * _urlSession; // +0x8
    WCURLSessionDownloadTask * _downloadTask; // +0x10
}
- (BOOL)beginDownload:(id)arg1;
- (void)cancel;
- (void)WCURLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)urlSession;
- (void)reportDownloadStartWithIsWholeRange:(BOOL)arg1;
- (void)reportContentRangeNotFoundInResponse;
- (void)reportContentLengthNotFoundInResponse;
- (void)reportInvalidContantTypeInResponse;
- (void)reportDownloadCompleteWithSuccess:(BOOL)arg1;
- (void)setUrlSession:(id)arg1;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg1;
- (void).cxx_destruct;
@end
