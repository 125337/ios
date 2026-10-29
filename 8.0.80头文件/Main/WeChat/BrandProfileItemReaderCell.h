@interface BrandProfileItemReaderCell : BrandProfileItemBaseCell
{
    BOOL _usePinnedStyle; // +0x8
    BOOL _isFeatureSection; // +0x9
    CAGradientLayer * _coverMaskLayer; // +0x10
    UIView * _pinnedContainerView; // +0x18
    UIView * _contentContainerView; // +0x20
    UIView * _pinnedSummaryView; // +0x28
    MMUILabel * _pinnedSummaryLabel; // +0x30
    UIImageView * _pinnedSummaryArrow; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateCoverImageView;
- (void)updateTitleView;
- (void)updateDescLabel;
- (id)getTitleViewColor:(BOOL)arg1;
- (id)getDescLabelColor:(BOOL)arg1;
- (id)coverMaskLayer;
- (void)layoutSubviews;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (id)accessibilityLabel;
- (void)updatePinnedStyle;
- (void)layoutPinnedSummaryIfNeeded;
- (void)applyPinnedCornerMaskIfNeeded;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)setCoverMaskLayer:(id)arg1;
- (id)pinnedContainerView;
- (void)setPinnedContainerView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (BOOL)usePinnedStyle;
- (void)setUsePinnedStyle:(BOOL)arg1;
- (BOOL)isFeatureSection;
- (void)setIsFeatureSection:(BOOL)arg1;
- (id)pinnedSummaryView;
- (void)setPinnedSummaryView:(id)arg1;
- (id)pinnedSummaryLabel;
- (void)setPinnedSummaryLabel:(id)arg1;
- (id)pinnedSummaryArrow;
- (void)setPinnedSummaryArrow:(id)arg1;
- (void).cxx_destruct;
@end
