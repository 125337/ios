@interface WCFinderWXInteractiveDetailViewModel : NSObject <WCFinderWXInteractCenterDataProviderDelegate>
{
    id <WCFinderWXInteractiveDetailViewModelDelegate> _delegate; // +0x8
    long long _selectType; // +0x10
    WCFinderWXInteractCenterDataProvider * _dataProvider; // +0x18
}
- (id)initWithSelectType:(long long)arg1 dataProvider:(id)arg2;
- (long long)numberOfSection;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMAtTid:(id)arg1;
- (void)triggerFetchAction;
- (long long)contentIndexOfTid:(id)arg1;
- (void)delContentVM:(id)arg1;
- (BOOL)isNoMoreData;
- (void)onWXInteractCenterDataFetchSuc;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selectType;
- (void)setSelectType:(long long)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
@end

