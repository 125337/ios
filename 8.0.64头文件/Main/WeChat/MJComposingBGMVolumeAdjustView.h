@interface MJComposingBGMVolumeAdjustView : MMUIView <MJPublisherSliderAccessibilityDelegate>
{
    MJComposingBGMAdjustViewModel * _viewModel; // +0x8
    id <MJComposingBGMVolumeAdjustViewDelegate> _delegate; // +0x10
    MMUIButton * _backButton; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIView * _topBar; // +0x28
    MJPublisherSlider * _bgmVolumeSlider; // +0x30
    MMUILabel * _bgmVolumeTitleLabel; // +0x38
    MMUILabel * _bgmVolumeValueLabel; // +0x40
    MJPublisherSlider * _ostVolumeSlider; // +0x48
    MMUILabel * _ostVolumeTitleLabel; // +0x50
    MMUILabel * _ostVolumeValueLabel; // +0x58
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)setupTopBarView;
- (void)setupContentView;
- (id)sliderWithValue:(float)arg1;
- (id)sliderTitleLabelWithText:(id)arg1;
- (id)sliderValueLabelWithText:(id)arg1;
- (void)onSliderTouchDown:(id)arg1;
- (void)onSliderTouchMove:(id)arg1;
- (void)onSliderTouchUp:(id)arg1;
- (void)onSliderTouchCancel:(id)arg1;
- (void)syncBGMVolumeValueLabelAccessibility;
- (void)syncOSTVolumeValueLabelAccessibility;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (void)backButtonDidTouchUpInside:(id)arg1;
- (int)vocalEnhancementFactor;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (id)bgmVolumeSlider;
- (void)setBgmVolumeSlider:(id)arg1;
- (id)bgmVolumeTitleLabel;
- (void)setBgmVolumeTitleLabel:(id)arg1;
- (id)bgmVolumeValueLabel;
- (void)setBgmVolumeValueLabel:(id)arg1;
- (id)ostVolumeSlider;
- (void)setOstVolumeSlider:(id)arg1;
- (id)ostVolumeTitleLabel;
- (void)setOstVolumeTitleLabel:(id)arg1;
- (id)ostVolumeValueLabel;
- (void)setOstVolumeValueLabel:(id)arg1;
- (void).cxx_destruct;
@end
