@interface MJGlobalFilterPanelView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, MJPublisherSliderAccessibilityDelegate>
{
    MMUIButton * _dismissButton; // +0x8
    UIView * _bottomBar; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MJGlobalFilterViewModel * _viewModel; // +0x20
    UICollectionView * _collectionView; // +0x28
    MJPublisherSlider * _intensitySlider; // +0x30
    MMUILabel * _valueLabel; // +0x38
    UIButton * _retryButton; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (void)setupBottomBar;
- (void)setupFilterViewsInContent:(id)arg1;
- (void)reloadFilterState;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)intensityChanged:(id)arg1;
- (void)retryList;
- (void)accessibilityIncrementInSlider:(id)arg1;
- (void)accessibilityDecrementInSlider:(id)arg1;
- (id)dismissButton;
- (void)setDismissButton:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)intensitySlider;
- (void)setIntensitySlider:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (void).cxx_destruct;
@end
