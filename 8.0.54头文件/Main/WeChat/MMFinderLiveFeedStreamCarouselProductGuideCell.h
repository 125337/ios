@interface MMFinderLiveFeedStreamCarouselProductGuideCell : MMFinderLiveFeedStreamCarouselCell <MMFinderLiveFeedStreamProductStyleViewDelegate>
{
    MMFinderLiveFeedStreamProductStyleView * _guideStyleView; // +0x18
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
- (void)onLiveFeedStreamProductStyleViewClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (id)guideStyleView;
- (void)setGuideStyleView:(id)arg1;
- (void).cxx_destruct;
@end

