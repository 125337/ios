@interface BrandProfileItemVideoCell : BrandProfileItemBaseCell
{
    SightIconView * _playIconView; // +0x8
    MMUILabel * _timeLabel; // +0x10
    CAGradientLayer * _maskLayer; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)layoutSmallStyle;
- (void)layoutSingleBigStyle;
- (void)layoutMultiBigStyle;
- (id)accessibilityLabel;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end

