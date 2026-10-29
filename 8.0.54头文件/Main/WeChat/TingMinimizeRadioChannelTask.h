@interface TingMinimizeRadioChannelTask : TingMinimizeBaseTask <MiniAudioTaskContentViewDelegate, MMImageLoaderObserver>
{
    BOOL _disableOpen; // +0x8
    MiniAudioTaskContentView * _contentView; // +0x10
    TingRadioChannelMiniView * _customView; // +0x18
}
- (id)init;
- (id)contentView;
- (id)taskContainerView;
- (id)contentDefaultImage;
- (void)updateContentViewIfNeedWithForce:(BOOL)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)openTask;
- (void)setContentView:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (BOOL)disableOpen;
- (void)setDisableOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end

