@interface MMFinderLiveFeedStreamCarouselTextLineCell : MMFinderLiveFeedStreamCarouselCell
{
    WCFinderLiveNowView * _liveTipsView; // +0x18
    WCFinderFullScrollTextView * _textView; // +0x20
    UIView * _hardAdCornerView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)layout;
- (void)reload;
- (BOOL)showTitle;
- (BOOL)isAdCornerInTextView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)liveTipsView;
- (void)setLiveTipsView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)hardAdCornerView;
- (void)setHardAdCornerView:(id)arg1;
- (void).cxx_destruct;
@end

