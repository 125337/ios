@interface WCURLSessionDownloader : NSObject <WCURLSessionDataDelegate>
{
    WCURLSession * _urlSession; // +0x8
    WCURLSessionDownloadTask * _downloadTask; // +0x10
    NSMutableData * _receiveData; // +0x18
    id /* block */ _completeBlock; // +0x20
}
- (id)initWithUrlString:(id)arg1 configuration:(id)arg2;
- (BOOL)startTaskWithCompleteBlock:(id /* block */)arg1;
- (void)WCURLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)WCURLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg1;
- (id)receiveData;
- (void)setReceiveData:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

