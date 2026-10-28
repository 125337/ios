@interface WCFinderLiveHomePageAggregationTextCard : WCFinderLiveHomePageAggregationBaseCard
{
    NSMutableArray * _headInfoViews; // +0x8
    UIView * _headInfoBgView; // +0x10
    MMLiveColorfulLabel * _titleLabel; // +0x18
    UIImageView * _arrowView; // +0x20
}
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (id)headInfoViews;
- (void)setHeadInfoViews:(id)arg1;
- (id)headInfoBgView;
- (void)setHeadInfoBgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
