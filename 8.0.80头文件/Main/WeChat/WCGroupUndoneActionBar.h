@interface WCGroupUndoneActionBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGroupUndoneItemCellDelegate, WCXiaoweiTaskItemCellDelegate>
{
    id <WCGroupUndoneActionDelegate> _delegate; // +0x8
    NSMutableArray * _capsuleItems; // +0x10
    unsigned long long _maxDisplayCount; // +0x18
    UICollectionView * _collectionView; // +0x20
    CAGradientLayer * _leftGradientLayer; // +0x28
    CAGradientLayer * _rightGradientLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (Class)capsuleCellClass;
- (id)capsuleCellIdentifier;
- (void)updateCapsuleItems:(id)arg1;
- (void)updateUndoneItem:(id)arg1;
- (void)removeUndoneItem:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (Class)capsuleCellClassForItem:(id)arg1;
- (id)capsuleCellIdentifierForItem:(id)arg1;
- (BOOL)isXiaoweiTaskItem:(id)arg1;
- (long long)lastGroupUndoneIndexWithinDisplay;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onCloseUndoneCell:(id)arg1;
- (void)onClickUndoneCell:(id)arg1;
- (void)onCompleteUndoneCell:(id)arg1;
- (void)onRevokeUndoneCell:(id)arg1;
- (void)onClickXiaoweiTaskItemCell:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)capsuleItems;
- (void)setCapsuleItems:(id)arg1;
- (unsigned long long)maxDisplayCount;
- (void)setMaxDisplayCount:(unsigned long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)leftGradientLayer;
- (void)setLeftGradientLayer:(id)arg1;
- (id)rightGradientLayer;
- (void)setRightGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
