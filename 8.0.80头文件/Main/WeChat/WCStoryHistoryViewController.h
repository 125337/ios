@interface WCStoryHistoryViewController : MMUIViewController <WCStoryFacadeExt, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCStoryCollectionFooterViewDelegate>
{
    BOOL _isFetchingData; // +0x70
    BOOL _hasNoMoreLocalData; // +0x71
    BOOL _hasNoMoreServerData; // +0x72
    TTCollectionView * _collectionView; // +0x78
    UICollectionViewFlowLayout * _flowLayout; // +0x80
    WCStoryFloatTopBar * _floatTopBar; // +0x88
    WCStoryCollectionFooterView * _footerView; // +0x90
    NSString * _username; // +0x98
    unsigned long long _currentDataID; // +0xa0
    NSMutableArray * _timeTable; // +0xa8
    NSMutableDictionary * _historyMediaData; // +0xb0
    NSMutableArray * _dateKeyTable; // +0xb8
    MMUILabel * _noDataLabel; // +0xc0
    NSMutableDictionary * _showYearCache; // +0xc8
}
- (id)initWithUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)historyMediaData;
- (id)dateKeyTable;
- (id)timeTable;
- (id)floatTopBar;
- (id)flowLayout;
- (id)noDataLabel;
- (id)collectionView;
- (void)setUpUI;
- (void)changeContentInsetAdjustmentBehavior;
- (void)setupData;
- (void)fetchMoreData;
- (id)getHistoryDataFromDB;
- (void)getHistoryDataFromServer;
- (void)handleNewDataItems:(id)arg1;
- (void)changeFooterViewState;
- (BOOL)shouleShowYearLabelAtSection:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)onDeleteStoryWithStory:(id)arg1 PageIndexObj:(id)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setFloatTopBar:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)currentDataID;
- (void)setCurrentDataID:(unsigned long long)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)hasNoMoreLocalData;
- (void)setHasNoMoreLocalData:(BOOL)arg1;
- (BOOL)hasNoMoreServerData;
- (void)setHasNoMoreServerData:(BOOL)arg1;
- (void)setTimeTable:(id)arg1;
- (void)setHistoryMediaData:(id)arg1;
- (void)setDateKeyTable:(id)arg1;
- (void)setNoDataLabel:(id)arg1;
- (id)showYearCache;
- (void)setShowYearCache:(id)arg1;
- (void).cxx_destruct;
@end
