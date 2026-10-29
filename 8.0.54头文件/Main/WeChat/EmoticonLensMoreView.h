@interface EmoticonLensMoreView : MMUIHalfScreenViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonLensMgrExt, MMRefreshTableFooterDelegate, MMUIHalfScreenViewControllerDelegate>
{
    MMUIView * _backgroundView; // +0x68
    MMUIView * _topNavBar; // +0x70
    MMUIView * _navBarSeparator; // +0x78
    UILabel * _titleLabel; // +0x80
    UICollectionView * _lensCollectionView; // +0x88
    EmoticonStoreFootView * _footerView; // +0x90
    id <EmoticonLensMoreViewDelegate> _lensDelegate; // +0x98
    NSArray * _recentUseItems; // +0xa0
    NSArray * _recommandItems; // +0xa8
    NSIndexPath * _selectedIndex; // +0xb0
    long long _numberPerRow; // +0xb8
    EmoticonLensInfo * _selectedLens; // +0xc0
}
- (id)initWithHeight:(double)arg1 delegate:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setSelectLens:(id)arg1;
- (void)tryAppendLens:(id)arg1;
- (long long)selectedLensIndex;
- (void)reloadDataWithWidth:(double)arg1;
- (id)visiableLens;
- (void)setupContentView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onEmoticonLensListRequestSuccess:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (id)lensItemAtIndex:(id)arg1;
- (void)reloadDataAndExposure;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)topNavBar;
- (void)setTopNavBar:(id)arg1;
- (id)navBarSeparator;
- (void)setNavBarSeparator:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lensCollectionView;
- (void)setLensCollectionView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)lensDelegate;
- (void)setLensDelegate:(id)arg1;
- (id)recentUseItems;
- (void)setRecentUseItems:(id)arg1;
- (id)recommandItems;
- (void)setRecommandItems:(id)arg1;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (long long)numberPerRow;
- (void)setNumberPerRow:(long long)arg1;
- (id)selectedLens;
- (void)setSelectedLens:(id)arg1;
- (void).cxx_destruct;
@end

