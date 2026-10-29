@interface LiteAppLivePhotoRemoteDownloadDelegate : NSObject <NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate>
{
    BOOL _finished; // +0x8
    NSURLSession * _session; // +0x10
    NSString * _outputPath; // +0x18
    id /* block */ _completion; // +0x20
    unsigned long long _maximumBytes; // +0x28
}
- (id)initWithOutputPath:(id)arg1 maximumBytes:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)finishWithLocalPath:(id)arg1 failReason:(id)arg2 internalCode:(long long)arg3 internalDomain:(id)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)session;
- (void)setSession:(id)arg1;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (unsigned long long)maximumBytes;
- (void)setMaximumBytes:(unsigned long long)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
