@interface CameraMixedSwipeItemCard : UIView
{
    BOOL _isLoading; // +0x8
    id <CameraMixedSwipeItemCardDeleagte> _delegate; // +0x10
    CameraScanGoodsItemViewModel * _viewModel; // +0x18
    UIView * _blurView; // +0x20
    UIImageView * _goodsSnapshotView; // +0x28
    UIView * _highlightMaskView; // +0x30
    MMUIButton * _resultBtn; // +0x38
    UIImageView * _searchIcon; // +0x40
    MMLoadingIndicatorView * _processingIndicator; // +0x48
}
+ (id)itemTintColor;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)onBgTap;
- (void)applyViewModel:(id)arg1;
- (void)resetViewModel;
- (void)setIsLoading:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)isLoading;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)goodsSnapshotView;
- (void)setGoodsSnapshotView:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)resultBtn;
- (void)setResultBtn:(id)arg1;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg1;
- (id)processingIndicator;
- (void)setProcessingIndicator:(id)arg1;
- (void).cxx_destruct;
@end
