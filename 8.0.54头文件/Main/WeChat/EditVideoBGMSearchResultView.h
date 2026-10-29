@interface EditVideoBGMSearchResultView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, EditVideoBGMSearchResultCollectionViewFooterViewDelegate>
{
    id <EditVideoBGMSearchResultViewDelegate> _delegate; // +0x8
    NSMutableArray * _musicList; // +0x10
    unsigned long long _maxExposureIndex; // +0x18
    NSIndexPath * _selectedIndexPath; // +0x20
    UICollectionView * _collectionView; // +0x28
    EditVideoBGMSearchResultCollectionViewFooterView * _footerView; // +0x30
    unsigned long long _replayTime; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSelectState:(BOOL)arg1;
- (void)readyToPlay;
- (void)replay;
- (void)resetStatus:(unsigned long long)arg1;
- (void)setMusicList:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onEditVideoBGMSearchResultCollectionViewFooterViewTriggerRefresh:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)musicList;
- (unsigned long long)maxExposureIndex;
- (void)setMaxExposureIndex:(unsigned long long)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (unsigned long long)replayTime;
- (void)setReplayTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

