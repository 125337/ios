@interface MMFinderLiveSwitchStreamGuidePanel : MMPageSheetBaseView
{
    id <MMFinderLiveSwitchStreamGuidePanelDelegate> _actionDelegate; // +0x8
    UIScrollView * _scrollContainerView; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _tipLabel; // +0x20
    UIButton * _localAudioModeButton; // +0x28
    UIButton * _switchVideoStreamButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configAllSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onLocalAudioModeButtonClicked;
- (void)onSwitchVideoStreamButtonClicked;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)localAudioModeButton;
- (void)setLocalAudioModeButton:(id)arg1;
- (id)switchVideoStreamButton;
- (void)setSwitchVideoStreamButton:(id)arg1;
- (void).cxx_destruct;
@end

