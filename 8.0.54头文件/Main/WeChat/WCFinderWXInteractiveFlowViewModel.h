@interface WCFinderWXInteractiveFlowViewModel : NSObject <WCFinderWXInteractCenterDataProviderDelegate, WCFinderDataItemExt>
{
    long long _selectType; // +0x8
    id <WCFinderWXInteractiveFlowViewModelDelegate> _delegate; // +0x10
    WCFinderWXInteractCenterDataProvider * _dataProvider; // +0x18
}
- (id)initWithSelectType:(long long)arg1;
- (long long)numberOfItems;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMFromTid:(id)arg1;
- (long long)indexRowForContentVM:(id)arg1;
- (unsigned long long)flowViewState;
- (void)triggerFetchAction;
- (void)setSelectType:(long long)arg1;
- (void)selectTabChanged:(long long)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)onWXInteractCenterDataLoadLocal;
- (void)onWXInteractCenterDataFetchSuc;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderDataItemCancelFav:(id)arg1;
- (long long)selectType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
@end

