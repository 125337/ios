@interface WCFinderPoiDetailViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _isRequestingData; // +0x9
    BOOL _nearbyFlag; // +0xa
    int _commentScene; // +0xc
    id <WCFinderPoiDetailViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _contentVMArray; // +0x18
    FinderPoiStreamTabList_FinderPoiStreamTabItem * _tabInfo; // +0x20
    WCFinderPOIParamsModel * _params; // +0x28
    NSMutableSet * _containedTidSet; // +0x30
    NSData * _lastBuffer; // +0x38
    unsigned long long _state; // +0x40
    NSString * _syncKey; // +0x48
    FinderPoiStreamNearbyInfo * _nearbyInfo; // +0x50
}
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 DataArray:(id)arg3 lastBuffer:(id)arg4 continueFlag:(BOOL)arg5 commentScene:(int)arg6 syncKey:(id)arg7;
- (id)minimizeBizKey;
- (unsigned long long)numberOfItem;
- (id)contentVMAtIndex:(long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)deleteContentVMWithIndex:(unsigned long long)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)updateState;
- (id)tranformDataItemArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)filterDataArray:(id)arg1;
- (id)contentVMArray;
- (id)containedTidSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentVMArray:(id)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void)setContainedTidSet:(id)arg1;
- (BOOL)isRequestingData;
- (void)setIsRequestingData:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (BOOL)nearbyFlag;
- (void)setNearbyFlag:(BOOL)arg1;
- (id)nearbyInfo;
- (void)setNearbyInfo:(id)arg1;
- (void).cxx_destruct;
@end

