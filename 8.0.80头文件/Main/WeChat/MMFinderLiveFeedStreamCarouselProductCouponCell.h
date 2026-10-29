@interface MMFinderLiveFeedStreamCarouselProductCouponCell : MMFinderLiveFeedStreamCarouselCell <MMFinderLiveFeedStreamProductStyleViewDelegate>
{
    MMFinderLiveFeedStreamProductStyleView * _couponStyleView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (void)reload;
- (void)layoutSubviews;
- (void)layout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setTaskId:(id)arg1;
- (id)reportWording;
- (unsigned long long)getCarouselCellReportType;
- (void)onLiveFeedStreamProductStyleViewClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (id)couponStyleView;
- (void)setCouponStyleView:(id)arg1;
- (void).cxx_destruct;
@end
