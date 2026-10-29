@interface TingMinimizePlayerTask : TingMinimizeBaseTask <MiniAudioTaskContentViewDelegate, MMImageLoaderObserver>
{
    MiniAudioTaskContentView * _contentView; // +0x8
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
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (BOOL)handleOpenTask:(id)arg1 completion:(id /* block */)arg2;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end

