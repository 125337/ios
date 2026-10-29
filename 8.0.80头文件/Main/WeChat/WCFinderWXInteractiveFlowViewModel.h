@interface WCFinderWXInteractiveFlowViewModel : NSObject <WCFinderWXInteractCenterDataProviderDelegate, WCFinderDataItemExt>
{
    long long _selectType; // +0x8
    long long _selectDataType; // +0x10
    id <WCFinderWXInteractiveFlowViewModelDelegate> _delegate; // +0x18
    WCFinderWXInteractCenterDataProvider * _dataProvider; // +0x20
}
- (id)initWithSelectType:(long long)arg1;
- (long long)numberOfItems;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)collectionInfoAtIndex:(long long)arg1;
- (id)contentConfigurationAtIndex:(long long)arg1;
- (id)usernameAtIndex:(long long)arg1;
- (id)itemAtIndex:(long long)arg1;
- (unsigned long long)flowViewState;
- (void)triggerFetchAction;
- (void)setSelectType:(long long)arg1;
- (void)selectTabChanged:(long long)arg1 dataType:(long long)arg2;
- (void)deleteFavoriteItemAtIndex:(long long)arg1;
- (void)onWXInteractCenterDataLoadLocal;
- (void)onWXInteractCenterDataFetchSuc:(BOOL)arg1;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderDataItemCancelFav:(id)arg1;
- (long long)selectType;
- (long long)selectDataType;
- (void)setSelectDataType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
@end
