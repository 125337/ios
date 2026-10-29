@interface WWKFCustomToolBar : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WWKFCustomToolBarItemCellDelegate>
{
    NSMutableArray * m_arrHadExposureToolBarItemTitile; // +0x8
    id <WWKFCustomToolBarDelegate> _delegate; // +0x10
    NSMutableArray * _customToolBarItems; // +0x18
    UICollectionView * _collectionView; // +0x20
    CAGradientLayer * _leftGradientLayer; // +0x28
    CAGradientLayer * _rightGradientLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)updateCustomToolBarItems:(id)arg1 andUserName:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)stoppedScrollingForExposure;
- (void)handleExposureToolBarItem;
- (void)onClickCustomToolBarItemCell:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)customToolBarItems;
- (void)setCustomToolBarItems:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)leftGradientLayer;
- (void)setLeftGradientLayer:(id)arg1;
- (id)rightGradientLayer;
- (void)setRightGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

