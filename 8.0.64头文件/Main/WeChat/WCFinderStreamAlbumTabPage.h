@interface WCFinderStreamAlbumTabPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderStreamAlbumTabPageModelDelegate>
{
    WCFinderStreamFooterView * _footerView; // +0x8
}
- (id)loadView;
- (void)setViewModel:(id)arg1;
- (void)viewWillApear;
- (void)viewDidAppear;
- (void)updateLoadingaState;
- (void)playListDataDidReload:(id)arg1;
- (void)playList:(id)arg1 appendDataAtRange:(_NSRange)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
