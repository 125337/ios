@interface MMBGMSelectedBottomView : MMUIView
{
    BOOL _notCallDelegateOnManualSetMusicButton; // +0x8
    id <MMBGMSelectedBottomViewDelegate> _delegate; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
    MMBGMSelectedConfig * _config; // +0x20
    MMUIButton * _musicOnButton; // +0x28
    MMUIButton * _ostOnButton; // +0x30
    MMUIButton * _lyricOnButton; // +0x38
    MMUIButton * _volumeButton; // +0x40
    MMBGMSelectedBottomViewModel * _viewModel; // +0x48
    UIView * _seperator; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setupWithConfig:(id)arg1;
- (void)setupMusicButton;
- (void)setupOstButton;
- (void)setupLyricButton;
- (void)setupVolumeButton;
- (void)setPublishContext:(id)arg1;
- (BOOL)isMusicOn;
- (BOOL)isLyricOn;
- (BOOL)isOriginSoundSelected;
- (void)manualSetMusicOn:(BOOL)arg1;
- (void)manualSetOstOn:(BOOL)arg1;
- (void)manualSetLyricOn:(BOOL)arg1;
- (void)refreshVolumeButtonState;
- (void)layoutSubviews;
- (id)genBtn;
- (id)genReportDictWithBtn:(id)arg1;
- (id)genReportDict;
- (id)genButtonFont;
- (void)onClickMusicOnBtn:(id)arg1;
- (void)onClickOstOnBtn:(id)arg1;
- (void)onClickLyricOnBtn:(id)arg1;
- (void)volumeButtonDidTouchUpInside:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishContext;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)musicOnButton;
- (void)setMusicOnButton:(id)arg1;
- (id)ostOnButton;
- (void)setOstOnButton:(id)arg1;
- (id)lyricOnButton;
- (void)setLyricOnButton:(id)arg1;
- (id)volumeButton;
- (void)setVolumeButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)notCallDelegateOnManualSetMusicButton;
- (void)setNotCallDelegateOnManualSetMusicButton:(BOOL)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (void).cxx_destruct;
@end
