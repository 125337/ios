@interface TingCustomMinimizeTask : TingMinimizeBaseTask <MMImageLoaderObserver, MinimizeTaskPlayCtrlDelegate>
{
    BOOL _disableOpen; // +0x8
    id <TingPlayAppConfig> _playAppConfig; // +0x10
    MinimizeTaskAudioPlayCtrlView * _contentView; // +0x18
}
- (id)init;
- (id)contentView;
- (id)taskContainerView;
- (void)onStateViewPlayPauseBtnClick:(BOOL)arg1;
- (void)updateTaskDataBeforeMinimize:(id)arg1;
- (id)contentDefaultImage;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onPlayOrPauseButtonClicked:(BOOL)arg1 playCtrl:(id)arg2;
- (void)onContentViewClicked:(id)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)openTask;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (void)setContentView:(id)arg1;
- (BOOL)disableOpen;
- (void)setDisableOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end
