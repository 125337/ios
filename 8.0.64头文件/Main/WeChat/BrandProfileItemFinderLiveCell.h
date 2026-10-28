@interface BrandProfileItemFinderLiveCell : BrandProfileItemBaseCell
{
    BrandFinderLiveBaseCardView * _cardView; // +0x8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateCardView;
- (void)updateTitleView;
- (void)layoutSubviews;
- (void)layoutFinderLiveStyleBig;
- (void)layoutFinderLiveStyleSmall;
- (void)onLiveStatusChanged;
- (void)onReplayStatusChanged;
- (void)onRecommendReasonChanged;
- (void)onRecommendReasonAvailableChanged;
- (id)cardView;
- (id)accessibilityLabel;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end
