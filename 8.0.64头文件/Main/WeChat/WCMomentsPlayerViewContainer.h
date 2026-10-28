@interface WCMomentsPlayerViewContainer : MMUIScrollView <MMImageScrollViewHelperDelegate, UIScrollViewDelegate>
{
    long long _browseScene; // +0x8
    id <WCMomentsPlayerViewContainerDelegate> _containerDelegate; // +0x10
    MMImageScrollViewHelper * _scrollViewHelper; // +0x18
    UIView * _playerView; // +0x20
    MMScrollViewZoomReporter * _zoomReporter; // +0x28
    CGSize _originVideoSize; // +0x30
    CGRect _suitableVideoFrame; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithPlayerView:(id)arg1 originVideoSize:(CGSize)arg2 suitableVideoFrame:(CGRect)arg3;
- (void)setZoomReportSnsId:(id)arg1 index:(long long)arg2;
- (void)initScrollViewHelper;
- (void)resetZoomScale;
- (void)onDisappearFromScreen;
- (id)viewForZooming;
- (void)onDoubleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)zoomReporter;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (id)scrollViewHelper;
- (void)setScrollViewHelper:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (CGSize)originVideoSize;
- (void)setOriginVideoSize:(CGSize)arg1;
- (CGRect)suitableVideoFrame;
- (void)setSuitableVideoFrame:(CGRect)arg1;
- (void)setZoomReporter:(id)arg1;
- (void).cxx_destruct;
@end
