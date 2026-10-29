@interface MJSegmentVolumeInspectorView : MJSegmentInspectorView
{
    MMUIButton * _muteButton; // +0x8
    MMUILabel * _valueLabel; // +0x10
    MJPublisherSlider * _plainSlider; // +0x18
}
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)sliderValueChanged:(id)arg1;
- (void)setButtonMuted:(id)arg1;
- (void)setButtonUnMuted:(id)arg1;
- (void)sliderDidFinishChangeValue:(id)arg1;
- (void)muteButtonDidTouchUpInside:(id)arg1;
- (void)syncWithModel;
- (id)muteButton;
- (void)setMuteButton:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)plainSlider;
- (void)setPlainSlider:(id)arg1;
- (void).cxx_destruct;
@end

