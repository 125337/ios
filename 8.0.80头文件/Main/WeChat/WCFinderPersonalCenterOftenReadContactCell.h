@interface WCFinderPersonalCenterOftenReadContactCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderPersonalCenterRecentContactItemDelegate, WCFinderPersonalCenterOftenReadViewModelDelegate, WCFinderFullShareListViewControllerDelegate>
{
    WCFinderPersonalCenterOftenReadViewModel * _oftenReadViewModel; // +0x8
    id <WCFinderPersonalCenterOftenReadContactCellDelegate> _delegate; // +0x10
    UILabel * _titleLabel; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _layout; // +0x28
    long long _pageCount; // +0x30
    double _itemHeight; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)installTitleLabel;
- (void)installCollectionView;
- (void)setOftenReadViewModel:(id)arg1;
- (void)updatePageCount;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onRecentContactItemDidClick:(id)arg1 fromView:(id)arg2;
- (void)onRecentContactItemDidPressDelete:(id)arg1 fromView:(id)arg2;
- (void)_handleDeleteOftenContact:(id)arg1 mmvc:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_checkLoadMore;
- (void)onPersonalCenterOftenReadDataChanged:(id)arg1;
- (void)onPersonalCenterOftenViewModel:(id)arg1 unreadItemChange:(id)arg2;
- (void)onFullScreenWillPlayContentVM:(id)arg1;
- (id)oftenReadViewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (long long)pageCount;
- (void)setPageCount:(long long)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (void).cxx_destruct;
@end
