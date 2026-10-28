@interface MMLivePreviewRelatedViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _isFetchingNextPage; // +0x8
    BOOL _isStarted; // +0x9
    BOOL _isPreviewRelatedLiveState; // +0xa
    BOOL _isInClickScrollingAnimation; // +0xb
    BOOL _needChangeIndexOnUpdate; // +0xc
    BOOL _nextEnterLiveReportWithClick; // +0xd
    BOOL _nextScrollLiveWithClick; // +0xe
    BOOL _needReportOnDisplay; // +0xf
    BOOL _isDataItemsRemoving; // +0x10
    BOOL _isDataItemsAppending; // +0x11
    BOOL _isDataItemsPrepending; // +0x12
    BOOL _isDataItemsPrependSettingOffset; // +0x13
    BOOL _isDataItemsReplacing; // +0x14
    unsigned int _activityId; // +0x18
    id <MMLivePreviewRelatedViewModelDelegate> _vmDelegate; // +0x20
    long long _viewModelId; // +0x28
    UICollectionView * _collectionView; // +0x30
    NSMutableArray * _specialLiveContentVMList; // +0x38
    NSMutableArray * _relatedItemControllers; // +0x40
    NSMutableArray * _displayPRContentVMs; // +0x48
    long long _normalStateIndex; // +0x50
    unsigned long long _currentPlayingIndex; // +0x58
    FinderJumpInfo * _bannerInfo; // +0x60
    NSData * _preivewRelatedLastBuffer; // +0x68
    unsigned long long _enterTime; // +0x70
    unsigned long long _initialLiveId; // +0x78
    NSData * _initialFetchLastBuffer; // +0x80
    MMLiveTaskId * _taskId; // +0x88
    unsigned long long _maxPreviewPlayConcurrency; // +0x90
    NSMutableArray * _visiblePreviewCellIndices; // +0x98
}
- (id)initWithTaskId:(id)arg1;
- (void)setBannerInfo:(id)arg1;
- (void)setCurrentPlayingIndex:(unsigned long long)arg1;
- (unsigned int)activityId;
- (void)setIsFetchingNextPage:(BOOL)arg1;
- (void)setIsPreviewRelatedLiveState:(BOOL)arg1;
- (void)OnReloadData;
- (void)cleanBannerInfos;
- (void)updateEnterTime;
- (void)adjustCollectionViewContentOffsetWithIndex:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)reportOnDisplayWithType:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)addVisiblePreviewCellIndex:(long long)arg1;
- (void)updatePlayingPreviewCellsForCollectionView:(id)arg1;
- (id)vmDelegate;
- (void)setVmDelegate:(id)arg1;
- (long long)viewModelId;
- (void)setViewModelId:(long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)specialLiveContentVMList;
- (void)setSpecialLiveContentVMList:(id)arg1;
- (id)relatedItemControllers;
- (void)setRelatedItemControllers:(id)arg1;
- (id)displayPRContentVMs;
- (void)setDisplayPRContentVMs:(id)arg1;
- (long long)normalStateIndex;
- (void)setNormalStateIndex:(long long)arg1;
- (unsigned long long)currentPlayingIndex;
- (id)bannerInfo;
- (id)preivewRelatedLastBuffer;
- (void)setPreivewRelatedLastBuffer:(id)arg1;
- (void)setActivityId:(unsigned int)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)initialLiveId;
- (void)setInitialLiveId:(unsigned long long)arg1;
- (BOOL)isFetchingNextPage;
- (BOOL)isStarted;
- (void)setIsStarted:(BOOL)arg1;
- (BOOL)isPreviewRelatedLiveState;
- (BOOL)isInClickScrollingAnimation;
- (void)setIsInClickScrollingAnimation:(BOOL)arg1;
- (BOOL)needChangeIndexOnUpdate;
- (void)setNeedChangeIndexOnUpdate:(BOOL)arg1;
- (BOOL)nextEnterLiveReportWithClick;
- (void)setNextEnterLiveReportWithClick:(BOOL)arg1;
- (BOOL)nextScrollLiveWithClick;
- (void)setNextScrollLiveWithClick:(BOOL)arg1;
- (BOOL)needReportOnDisplay;
- (void)setNeedReportOnDisplay:(BOOL)arg1;
- (BOOL)isDataItemsRemoving;
- (void)setIsDataItemsRemoving:(BOOL)arg1;
- (BOOL)isDataItemsAppending;
- (void)setIsDataItemsAppending:(BOOL)arg1;
- (BOOL)isDataItemsPrepending;
- (void)setIsDataItemsPrepending:(BOOL)arg1;
- (BOOL)isDataItemsPrependSettingOffset;
- (void)setIsDataItemsPrependSettingOffset:(BOOL)arg1;
- (BOOL)isDataItemsReplacing;
- (void)setIsDataItemsReplacing:(BOOL)arg1;
- (id)initialFetchLastBuffer;
- (void)setInitialFetchLastBuffer:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)maxPreviewPlayConcurrency;
- (void)setMaxPreviewPlayConcurrency:(unsigned long long)arg1;
- (id)visiblePreviewCellIndices;
- (void)setVisiblePreviewCellIndices:(id)arg1;
- (void).cxx_destruct;
@end
