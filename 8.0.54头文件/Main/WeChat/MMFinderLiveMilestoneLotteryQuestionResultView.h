@interface MMFinderLiveMilestoneLotteryQuestionResultView : MMFinderLiveMilestoneLotteryDetailSecondaryView
{
    MMFinderLiveMilestoneLotteryViewModel * _vm; // +0x8
    FinderLiveMilestoneLotteryInfo * _lotteryInfo; // +0x10
    UIView * _containerView; // +0x18
    UIScrollView * _scrollView; // +0x20
    UILabel * _titleLabel; // +0x28
    CGSize _lastLayoutSize; // +0x30
}
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;
- (void)initUI;
- (id)backButtonColor;
- (void)layoutSubviews;
- (void)rebuildContentViews;
- (void)layoutGradientMask;
- (id)vm;
- (void)setVm:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

