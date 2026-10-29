@interface BrandProfileFuwuContainerView : MMUIView <BrandProfileFuwuBaseViewDelegate>
{
    double _maxContainerHeight; // +0x8
    UIScrollView * _fuwuScrollView; // +0x10
    NSMutableArray * _fuwuViewList; // +0x18
    id <BrandProfileFuwuContainerViewDelegate> _delegate; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)setupSubviews;
- (void)setDisplayName:(id)arg1;
- (void)setFuwuInfoList:(id)arg1;
- (void)removeFuwuViewList;
- (void)layoutSubviews;
- (double)calcuateCancelButtonHeight;
- (void)reCreateRoundCornersLayer;
- (void)onCancelBtnClicked;
- (void)onFuwuInfoClicked:(id)arg1;
- (double)maxContainerHeight;
- (void)setMaxContainerHeight:(double)arg1;
- (id)fuwuScrollView;
- (void)setFuwuScrollView:(id)arg1;
- (id)fuwuViewList;
- (void)setFuwuViewList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
