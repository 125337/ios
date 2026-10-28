@interface MMMusicSearchVideoController : NSObject <UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMMusicSearchVideoDataProviderDelegate, MMMusicPostVideoCollectionCellDelegate>
{
    MMMusicSearchVideoInitParams * _initParams; // +0x8
    MMUISearchBar * _searchBar; // +0x10
    UICollectionView * _listView; // +0x18
    UICollectionViewFlowLayout * _flowLayout; // +0x20
    MMMusicSearchVideoDataProvider * _dataProvider; // +0x28
    MMUIActivityIndicatorView * _loadingView; // +0x30
    MMMusicPostVideoCollectionFooterCell * m_footerView; // +0x38
    BOOL m_continueFlag; // +0x40
    double _minVideoDuration; // +0x48
    id <MMMusicSearchVideoControllerDataSource> _dataSource; // +0x50
    id <MMMusicSearchVideoControllerDelegate> _delegate; // +0x58
}
- (id)initWithHostView:(id)arg1 initParams:(id)arg2;
- (id)searchBar;
- (id)listView;
- (id)loadingView;
- (void)setSearchBarHidden:(BOOL)arg1;
- (void)enterSearchMode;
- (void)resignSearchBarFirstResponder;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateCanMultiSelect:(BOOL)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)onDataChanged:(BOOL)arg1 isClearAll:(BOOL)arg2;
- (void)mmMusicPostVideoCollectionCell:(id)arg1 onSelectedBtnClicked:(id)arg2;
- (BOOL)isSelectedWithModel:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
