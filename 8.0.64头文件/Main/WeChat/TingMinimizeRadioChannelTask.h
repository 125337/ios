@interface TingMinimizeRadioChannelTask : TingMinimizeBaseTask <MMImageLoaderObserver, MinimizeTaskPlayCtrlDelegate>
{
    BOOL _disableOpen; // +0x8
    MinimizeTaskAudioPlayCtrlView * _contentView; // +0x10
}
- (id)init;
- (id)contentView;
- (id)taskContainerView;
- (void)onStateViewPlayPauseBtnClick:(BOOL)arg1;
- (id)contentDefaultImage;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onPlayOrPauseButtonClicked:(BOOL)arg1 playCtrl:(id)arg2;
- (void)onContentViewClicked:(id)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)openTask;
- (void)setContentView:(id)arg1;
- (BOOL)disableOpen;
- (void)setDisableOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end
