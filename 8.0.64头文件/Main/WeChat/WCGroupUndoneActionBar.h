@interface WCGroupUndoneActionBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGroupUndoneItemCellDelegate>
{
    id <WCGroupUndoneActionDelegate> _delegate; // +0x8
    NSMutableArray * _undoneItems; // +0x10
    UICollectionView * _collectionView; // +0x18
    CAGradientLayer * _leftGradientLayer; // +0x20
    CAGradientLayer * _rightGradientLayer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)setUndoneItems:(id)arg1;
- (void)updateUndoneItem:(id)arg1;
- (void)removeUndoneItem:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onCloseUndoneCell:(id)arg1;
- (void)onClickUndoneCell:(id)arg1;
- (void)onCompleteUndoneCell:(id)arg1;
- (void)onRevokeUndoneCell:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)undoneItems;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)leftGradientLayer;
- (void)setLeftGradientLayer:(id)arg1;
- (id)rightGradientLayer;
- (void)setRightGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
