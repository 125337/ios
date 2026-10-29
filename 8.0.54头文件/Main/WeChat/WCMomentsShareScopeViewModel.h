@interface WCMomentsShareScopeViewModel : NSObject <WCFacadeExt>
{
    BOOL _isBlackList; // +0x8
    BOOL _isFilterTagDataEnabled; // +0x9
    BOOL _isModifyShareScopeEnabled; // +0xa
    BOOL _showBottomExpiredTip; // +0xb
    WCDataItem * _hostDataItem; // +0x10
    long long _privacy; // +0x18
    NSString * _shareScopeTitle; // +0x20
    NSArray * _usernameList; // +0x28
    NSArray * _tagIdList; // +0x30
    double _targetListHeight; // +0x38
    long long _loadMoreThreshold; // +0x40
    id /* block */ _hostDataItemUpdateBlock; // +0x48
}
- (id)initWithHostDataItem:(id)arg1 isNeedForceUpdate:(BOOL)arg2;
- (id)initWithBlackMode:(BOOL)arg1 usernameList:(id)arg2 tagIdList:(id)arg3 title:(id)arg4;
- (id)initWithBlackMode:(BOOL)arg1 usernameList:(id)arg2 tagIdList:(id)arg3 title:(id)arg4 privacy:(long long)arg5;
- (void)dealloc;
- (void)_initBaseData;
- (void)prepareDataItemWithCompleteBlock:(id /* block */)arg1;
- (BOOL)hasShareScopeList;
- (id)noMoreDataTips;
- (BOOL)shouldShowLoadMoreCellForTagListAtIndex:(long long)arg1;
- (BOOL)shouldShowLoadMoreCellForContactListAtIndex:(long long)arg1;
- (BOOL)shouldShowLoadMore:(long long)arg1;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)_initDataFromDataItem:(id)arg1 isNeedForceUpdate:(BOOL)arg2;
- (void)_resetShareScopeFromDataItem:(id)arg1;
- (void)_setupShareScopeData:(BOOL)arg1;
- (void)_initDataFromRawDataWithMode:(BOOL)arg1 usernameList:(id)arg2 tagIdList:(id)arg3 title:(id)arg4;
- (void)_onGetShareScopeData;
- (BOOL)_shouldShowLoadMoreCellForDataList:(id)arg1 atCellIndex:(long long)arg2;
- (void)_logStatusWithMsg:(id)arg1;
- (id)hostDataItem;
- (void)setHostDataItem:(id)arg1;
- (BOOL)isBlackList;
- (void)setIsBlackList:(BOOL)arg1;
- (long long)privacy;
- (void)setPrivacy:(long long)arg1;
- (id)shareScopeTitle;
- (void)setShareScopeTitle:(id)arg1;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (id)tagIdList;
- (void)setTagIdList:(id)arg1;
- (BOOL)isFilterTagDataEnabled;
- (void)setIsFilterTagDataEnabled:(BOOL)arg1;
- (BOOL)isModifyShareScopeEnabled;
- (void)setIsModifyShareScopeEnabled:(BOOL)arg1;
- (BOOL)showBottomExpiredTip;
- (void)setShowBottomExpiredTip:(BOOL)arg1;
- (double)targetListHeight;
- (void)setTargetListHeight:(double)arg1;
- (long long)loadMoreThreshold;
- (void)setLoadMoreThreshold:(long long)arg1;
- (id /* block */)hostDataItemUpdateBlock;
- (void)setHostDataItemUpdateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

