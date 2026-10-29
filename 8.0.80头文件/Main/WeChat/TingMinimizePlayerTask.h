@interface TingMinimizePlayerTask : TingMinimizeBaseTask <MinimizeTaskPlayCtrlDelegate, MMImageLoaderObserver>
{
    MinimizeTaskAudioPlayCtrlView * _contentView; // +0x8
}
- (id)init;
- (id)contentView;
- (void)dealloc;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (BOOL)canMinimizeBecomeActive:(id)arg1;
- (void)__doSetContentViewImage:(id)arg1 url:(id)arg2;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)contentDefaultImage;
- (id)taskContainerView;
- (void)onStateViewPlayPauseBtnClick:(BOOL)arg1;
- (void)onStateViewNextBtnClick;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onPlayOrPauseButtonClicked:(BOOL)arg1 playCtrl:(id)arg2;
- (void)onContentViewClicked:(id)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (BOOL)handleOpenTask:(id)arg1 completion:(id /* block */)arg2;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
