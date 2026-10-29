@interface WCFinderLiveHomePageAggregationImageInfoCard : WCFinderLiveHomePageAggregationBaseCard
{
    MMLiveColorfulLabel * _titleLabel; // +0x8
    WCFinderLiveHomePageAggregationAnchorHeaderInfoView * _headerInfoView; // +0x10
}
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (BOOL)showHeaderInfo;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headerInfoView;
- (void)setHeaderInfoView:(id)arg1;
- (void).cxx_destruct;
@end
