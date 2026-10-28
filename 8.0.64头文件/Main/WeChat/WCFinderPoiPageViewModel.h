@interface WCFinderPoiPageViewModel : NSObject <WCFinderPoiStreamExt>
{
    BOOL _continueFlag; // +0x8
    BOOL _nearbyFlag; // +0x9
    int _commentScene; // +0xc
    id <WCFinderPoiPageViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _contentVMArray; // +0x18
    NSMutableArray * _currentVMArray; // +0x20
    NSMutableArray * _nearbyVMArray; // +0x28
    WCFinderPOIParamsModel * _params; // +0x30
    FinderPoiStreamTabList_FinderPoiStreamTabItem * _tabInfo; // +0x38
    NSData * _lastBuffer; // +0x40
    unsigned long long _state; // +0x48
    unsigned long long _refreshTime; // +0x50
    NSString * _syncKey; // +0x58
    NSString * _nearbyWording; // +0x60
    FinderPoiStreamNearbyInfo * _nearbyInfo; // +0x68
    unsigned long long _tabIndex; // +0x70
    unsigned long long _filterIndex; // +0x78
    unsigned long long _prefetchCount; // +0x80
    NSMutableSet * _containedTidSet; // +0x88
}
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 tabIndex:(unsigned long long)arg3 filterIndex:(unsigned long long)arg4 DataArray:(id)arg5 lastBuffer:(id)arg6 continueFlag:(BOOL)arg7 commentScene:(int)arg8 nearbyFlag:(BOOL)arg9 nearbyInfo:(id)arg10 prefetchCount:(unsigned long long)arg11;
- (void)requestFirstPageDataWithCompletion:(id /* block */)arg1;
- (void)requestNextPageDataWithCompletion:(id /* block */)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)tranformDataItemArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)filterDataArray:(id)arg1;
- (void)updateState;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (id)indexPathForContentVMTid:(id)arg1;
- (unsigned long long)offsetAtIndexPath:(id)arg1;
- (BOOL)isCustomSupplementaryViewOfKind:(id)arg1 atSection:(long long)arg2;
- (void)onFinderPoiStreamReloadAllData:(id)arg1 nearbyFlag:(BOOL)arg2 nearbyInfo:(id)arg3;
- (void)onFinderPoiStreamAppendData:(id)arg1 nearbyFlag:(BOOL)arg2 nearbyInfo:(id)arg3;
- (id)contentVMArray;
- (id)currentVMArray;
- (id)nearbyVMArray;
- (id)containedTidSet;
- (id)filterInfo;
- (unsigned int)filterType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentVMArray:(id)arg1;
- (void)setCurrentVMArray:(id)arg1;
- (void)setNearbyVMArray:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)nearbyWording;
- (void)setNearbyWording:(id)arg1;
- (BOOL)nearbyFlag;
- (void)setNearbyFlag:(BOOL)arg1;
- (id)nearbyInfo;
- (void)setNearbyInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)tabIndex;
- (void)setTabIndex:(unsigned long long)arg1;
- (unsigned long long)filterIndex;
- (void)setFilterIndex:(unsigned long long)arg1;
- (unsigned long long)prefetchCount;
- (void)setPrefetchCount:(unsigned long long)arg1;
- (void)setContainedTidSet:(id)arg1;
- (void).cxx_destruct;
@end
