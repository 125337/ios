@interface WCFinderLiveHomePageAggregationECBrandsCard : WCFinderLiveHomePageAggregationBaseCard
{
    MMLiveColorfulLabel * _titleLabel; // +0x8
    MMLiveColorfulLabel * _subTitleLabel; // +0x10
    NSArray * _promotingViews; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithCard:(id)arg1;
- (void)layoutSubviews;
- (id)currentGroupEntryBuffer;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)promotingViews;
- (void)setPromotingViews:(id)arg1;
- (void).cxx_destruct;
@end

