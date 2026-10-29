@interface GameDownloadVideoVc : MMUIViewController
{
    BOOL _isSkipCelluarTips; // +0x68
    BOOL _starFailed; // +0x69
    BOOL _isPopByDownLoadCompleted; // +0x6a
    BOOL _downloadEventCompleted; // +0x6b
    BOOL _oriNavigationBarHidden; // +0x6c
    id /* block */ _completedBlock; // +0x70
    NSString * _videoUrl; // +0x78
    NSString * _thumbUrl; // +0x80
    MMWebImageView * _imageView; // +0x88
    MMProgressViewEx * _progressView; // +0x90
}
- (id)initWithVideoUrl:(id)arg1 thumbUrl:(id)arg2;
- (void)viewDidLoad;
- (void)startDownloadVideo;
- (id)tmpPathForVideoUrl:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupGoBackView;
- (void)goBack;
- (void)setupProgressView;
- (void)endWithErrorMsg:(id)arg1;
- (void)notifyDelegateWithErrorMsg:(id)arg1;
- (BOOL)checkUrlMatched:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)removeTmpPath;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)OnCdnDownloadProgress:(id)arg1;
- (BOOL)isSkipCelluarTips;
- (void)setIsSkipCelluarTips:(BOOL)arg1;
- (id /* block */)completedBlock;
- (void)setCompletedBlock:(id /* block */)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (BOOL)starFailed;
- (void)setStarFailed:(BOOL)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (BOOL)isPopByDownLoadCompleted;
- (void)setIsPopByDownLoadCompleted:(BOOL)arg1;
- (BOOL)downloadEventCompleted;
- (void)setDownloadEventCompleted:(BOOL)arg1;
- (BOOL)oriNavigationBarHidden;
- (void)setOriNavigationBarHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

