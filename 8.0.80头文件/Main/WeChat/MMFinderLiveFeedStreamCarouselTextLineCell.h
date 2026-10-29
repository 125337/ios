@interface MMFinderLiveFeedStreamCarouselTextLineCell : MMFinderLiveFeedStreamCarouselCell
{
    WCFinderLiveNowView * _liveTipsView; // +0x18
    UILabel * _customPrefixLabel; // +0x20
    WCFinderFullScrollTextView * _textView; // +0x28
    UIView * _hardAdCornerView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)initTapGesture;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)layout;
- (void)reload;
- (BOOL)showTitle;
- (BOOL)isAdCornerInTextView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onCellDidTap;
- (id)reportWording;
- (unsigned long long)getCarouselCellReportType;
- (id)liveTipsView;
- (void)setLiveTipsView:(id)arg1;
- (id)customPrefixLabel;
- (void)setCustomPrefixLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)hardAdCornerView;
- (void)setHardAdCornerView:(id)arg1;
- (void).cxx_destruct;
@end
