@interface MMVideoBrowserView : MMMediaBrowserView <VideoDetailControlViewDelegate, WCPlayerViewUIDelegate, FullScreenGestureDelegate, UIGestureRecognizerDelegate>
{
    id /* block */ _downloadCompleteHandler; // +0x8
    WCPlayerView * _playerView; // +0x10
    WCPlayerPlayArgs * _playArgs; // +0x18
    VideoDetailControlView * _controlView; // +0x20
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x28
    WXFullScreenGestureRecognizer * _fullScreenGestureRecognizer; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (id)controlView;
- (id)playerView;
- (void)layoutSubviews;
- (CGRect)getDisplayFrame;
- (void)startDisplay;
- (void)downloadAllDataWithComplete:(id /* block */)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressBegin;
- (double)getOperateHeight;
- (void)onLayoutSubviews;
- (void)onDataDownloadSucc;
- (void)onDataDownloadFail;
- (void)onDataDownloadComplete;
- (void)playerViewDidZoom:(id)arg1;
- (void)playerViewDidEndZoom:(id)arg1;
- (void)handlePanGesture;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id /* block */)downloadCompleteHandler;
- (void)setDownloadCompleteHandler:(id /* block */)arg1;
- (void)setPlayerView:(id)arg1;
- (id)playArgs;
- (void)setPlayArgs:(id)arg1;
- (void)setControlView:(id)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (id)fullScreenGestureRecognizer;
- (void)setFullScreenGestureRecognizer:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (void).cxx_destruct;
@end
