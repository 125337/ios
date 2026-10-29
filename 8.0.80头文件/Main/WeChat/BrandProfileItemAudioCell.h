@interface BrandProfileItemAudioCell : BrandProfileItemBaseCell
{
    BOOL _isFeatureSection; // +0x8
    CAGradientLayer * _coverMaskLayer; // +0x10
    UIImageView * _audioIconView; // +0x18
    UILabel * _audioTimeLabel; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updatePinnedStyle;
- (void)updateTimeLabel;
- (id)coverMaskLayer;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)applyPinnedCornerMaskIfNeeded;
- (void)setCoverMaskLayer:(id)arg1;
- (id)audioIconView;
- (void)setAudioIconView:(id)arg1;
- (id)audioTimeLabel;
- (void)setAudioTimeLabel:(id)arg1;
- (BOOL)isFeatureSection;
- (void)setIsFeatureSection:(BOOL)arg1;
- (void).cxx_destruct;
@end
