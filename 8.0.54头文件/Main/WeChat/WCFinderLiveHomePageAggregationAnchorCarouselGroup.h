@interface WCFinderLiveHomePageAggregationAnchorCarouselGroup : UIView
{
    WCFinderLiveAggregationCardAnchorGroup * _group; // +0x8
    UIView * _headInfoBgView; // +0x10
    NSMutableArray * _headInfoViews; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithGroup:(id)arg1;
- (BOOL)isSmallScreen;
- (id)group;
- (void)setGroup:(id)arg1;
- (id)headInfoBgView;
- (void)setHeadInfoBgView:(id)arg1;
- (id)headInfoViews;
- (void)setHeadInfoViews:(id)arg1;
- (void).cxx_destruct;
@end

