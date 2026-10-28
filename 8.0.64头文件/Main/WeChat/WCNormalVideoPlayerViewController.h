@interface WCNormalVideoPlayerViewController : MMUIViewController <WCNormalVideoPlayerViewDelegate>
{
    WCNormalVideoPlayerView * _videoPlayer; // +0x70
    NSString * _videoUrl; // +0x78
}
- (id)initWithVideoUrl:(id)arg1;
- (BOOL)hidesStatusbar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)onCloseButtonClicked;
- (void)onGetViewWidthAndHeight:(double *)arg1 leftPartWidth:(double *)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (id)videoPlayer;
- (void)setVideoPlayer:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (void).cxx_destruct;
@end
