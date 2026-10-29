@interface MJTimelineVolumeSliderInfo : NSObject
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _valueLabel; // +0x10
    MJPublisherSlider * _slider; // +0x18
}
- (id)initWithTitleLabel:(id)arg1 valueLabel:(id)arg2 slider:(id)arg3;
- (void)setVolume:(float)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (void).cxx_destruct;
@end
