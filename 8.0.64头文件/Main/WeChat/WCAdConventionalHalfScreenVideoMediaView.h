@interface WCAdConventionalHalfScreenVideoMediaView : WCAdConventionalHalfScreenMediaBaseView <WCCanvasAdControlViewDelegate, WCFacadeExt>
{
    WCMediaItem * _mediaItem; // +0x8
    WCPlayerPlayArgs * _playInfo; // +0x10
    WCCanvasAdControlView * _controlView; // +0x18
    WCPlayerView * _wcPlayerView; // +0x20
    UIImageView * _thumbImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)playInfo;
- (id)controlView;
- (id)wcPlayerView;
- (id)thumbImageView;
- (void)onHostViewDidEnter;
- (void)onHostViewDidExit;
- (void)onViewDidAppear;
- (void)onViewWillDisappear;
- (void)onViewDidDisappear;
- (id)fetchMediaImage;
- (id)fetchCurrentSnapshot;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)exitWCPlayer;
- (CGSize)fetchMediaSize;
- (id)getThumbImage;
- (void)loadThumbImage;
- (void)updateThumbImageWithImage:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)reportVideoCommonPlayInfo;
- (void)onLoopPlayToEnd;
- (void)onControlViewSingleTap;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void)setPlayInfo:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setWcPlayerView:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (void).cxx_destruct;
@end
