@interface MJComposingMusicVolumePanelView : MMUIView <MJPublisherSliderAccessibilityDelegate>
{
    MJComposingMusicVolumePanelViewModel * _viewModel; // +0x8
    unsigned long long _currentMode; // +0x10
    unsigned long long _scene; // +0x18
    id <MJComposingMusicVolumePanelViewDelegate> _delegate; // +0x20
    UIView * _contentView; // +0x28
    UIView * _grabBarView; // +0x30
    UILabel * _titleLabel; // +0x38
    MJPublisherSlider * _bgmVolumeSlider; // +0x40
    MMUILabel * _bgmVolumeTitleLabel; // +0x48
    MMUILabel * _bgmVolumeValueLabel; // +0x50
    MJPublisherSlider * _ostVolumeSlider; // +0x58
    MMUILabel * _ostVolumeTitleLabel; // +0x60
    MMUILabel * _ostVolumeValueLabel; // +0x68
}
- (id)initWithViewModel:(id)arg1 scene:(unsigned long long)arg2;
- (void)commonInit;
- (void)reloadVolumeControlValues;
- (void)setupTopBar;
- (void)layoutSubviews;
- (void)setupContentView;
- (void)updateSubViewsWithMode:(unsigned long long)arg1;
- (id)sliderWithValue:(float)arg1;
- (id)sliderTitleLabelWithText:(id)arg1;
- (id)sliderValueLabelWithText:(id)arg1;
- (double)p_displayVolumeValueForVolume:(float)arg1;
- (void)p_reloadSlider:(id)arg1 valueLabel:(id)arg2 title:(id)arg3 internalValue:(float)arg4;
- (void)p_updateAccessibilityForSlider:(id)arg1 valueLabel:(id)arg2 title:(id)arg3 displayText:(id)arg4;
- (void)onSliderTouchDown:(id)arg1;
- (void)onSliderTouchMove:(id)arg1;
- (void)onSliderTouchUp:(id)arg1;
- (void)onSliderTouchCancel:(id)arg1;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (int)vocalEnhancementFactor;
- (double)p_displayPercentMax;
- (void)removeAutoLayoutWithView:(id)arg1;
- (id)viewModel;
- (unsigned long long)currentMode;
- (void)setCurrentMode:(unsigned long long)arg1;
- (unsigned long long)scene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)grabBarView;
- (void)setGrabBarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
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
