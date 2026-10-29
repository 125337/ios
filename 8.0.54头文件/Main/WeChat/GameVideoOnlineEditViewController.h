@interface GameVideoOnlineEditViewController : GameCenterNativeVc <GameVideoEditViewControllerDelegate, NSURLSessionDataDelegate>
{
    NSString * _videoUrl; // +0x68
    NSString * _thumbUrl; // +0x70
    NSString * _videoPath; // +0x78
    id /* block */ _resultBlock; // +0x80
    NSURLSessionTask * _currentTask; // +0x88
    NSURLSession * _session; // +0x90
    BOOL _isSkipCelluarTips; // +0x98
    long long _ssid; // +0xa0
    NSString * _appId; // +0xa8
    MMWebImageView * _imageView; // +0xb0
    MMProgressViewEx * _progressView; // +0xb8
    unsigned long long _downloadStartTimeMills; // +0xc0
}
- (id)initWithVideoUrl:(id)arg1 andThumb:(id)arg2 andResultBlock:(id /* block */)arg3;
- (id)initWithVideoPath:(id)arg1 andResultBlock:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setupViews;
- (void)startDownloadVideo;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)handleDownloadFinished:(id)arg1 location:(id)arg2;
- (void)onClose;
- (void)handleDownloadFailed:(long long)arg1;
- (void)handleDownloadCanceled;
- (void)startVideoEditor:(id)arg1;
- (void)handleCompositionSucceed:(id)arg1;
- (void)handleCompositionFailed:(long long)arg1;
- (void)notifySucceedWithVideoInfo:(id)arg1;
- (void)notifyErrorResult:(long long)arg1;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)trackEventExplosured;
- (void)trackEventDownloadCancel;
- (void)trackEventDownloadSucceed;
- (void)trackEventDownloadFailed:(long long)arg1;
- (id)buildTrackEventProps:(BOOL)arg1 moreAction:(id /* block */)arg2;
- (unsigned long long)calculateDownloadDuration;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (BOOL)isSkipCelluarTips;
- (void)setIsSkipCelluarTips:(BOOL)arg1;
- (long long)ssid;
- (void)setSsid:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (unsigned long long)downloadStartTimeMills;
- (void)setDownloadStartTimeMills:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

