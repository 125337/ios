@interface MagicGameLoadingViewController : WACustomLoadingViewController
{
    WAGameCircleProgressLoadingViewController * _circleProgressVC; // +0x70
    MagicSclFrameSetView * _frameSetView; // +0x78
    MMUIButton * _startToPlayBtn; // +0x80
    NSString * _appId; // +0x88
}
- (id)initWithContact:(id)arg1 pkgConfig:(id)arg2 extraData:(id)arg3;
- (void)hideDefaultLoading;
- (void)requestFullScreen;
- (void)hideLoadingAll;
- (id)biz;
- (void)viewDidLoad;
- (void)initStartToPlayBtn;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onAppPrepared;
- (void)onHalfScreenStart;
- (void)onHalfScreenDone;
- (void)onFullScreenStart;
- (void)onFullScreenDone;
- (void)onRotationDone;
- (void)onRotationStart;
- (void)dealloc;
- (id)circleProgressVC;
- (void)setCircleProgressVC:(id)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (id)startToPlayBtn;
- (void)setStartToPlayBtn:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end
