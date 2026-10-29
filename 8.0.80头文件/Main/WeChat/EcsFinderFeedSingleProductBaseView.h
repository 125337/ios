@interface EcsFinderFeedSingleProductBaseView : UIView
{
    EcsFinderFeedSingleProductViewModel * _dataVM; // +0x8
    CGSize _viewSize; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)onViewSizeChanged;
- (id)productCard;
- (id)finderNavigationController;
- (id)dataVM;
- (void)setDataVM:(id)arg1;
- (CGSize)viewSize;
- (void)setViewSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
