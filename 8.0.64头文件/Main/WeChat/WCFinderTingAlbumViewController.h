@interface WCFinderTingAlbumViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderTingAlbumViewModelDelegate, WCFinderStreamLayoutDelegate>
{
    WCFinderTingAlbumViewModel * _viewModel; // +0x70
    UICollectionView * _collectionView; // +0x78
    WCFinderStreamFooterView * _footerView; // +0x80
}
- (id)initWithDataProvider:(id)arg1 innerType:(int)arg2;
- (void)viewDidLoad;
- (CGSize)getItemSize;
- (id)collectionView;
- (void)updateNavTitle;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)getStaticCoverConfig;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onTingAlbumFetchDataSuc;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
