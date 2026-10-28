@interface WASubscriptionMessageSettingsViewModel : MMObject
{
    BOOL _dataReady; // +0x8
    BOOL _globalSwitch; // +0x9
    NSString * _detailTitle; // +0x10
    NSArray * _items; // +0x18
    NSString * _appName; // +0x20
    SubscribeMsgResp * _originRes; // +0x28
}
- (id)initWithListResponse:(id)arg1;
- (void)fillWithRes:(id)arg1;
- (BOOL)dataChanged;
- (void)backToOrigin;
- (void)mergeWithResponse:(id)arg1;
- (id)_mergeResponseWithOriginResponse:(id)arg1 newResponse:(id)arg2;
- (BOOL)globalSwitchDataChanged;
- (id)toMsgItemsArrayUpdated;
- (BOOL)itemsDataChanged;
- (id)generateItemsWith:(id)arg1;
- (id)detailTitle;
- (void)setDetailTitle:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (BOOL)dataReady;
- (void)setDataReady:(BOOL)arg1;
- (BOOL)globalSwitch;
- (void)setGlobalSwitch:(BOOL)arg1;
- (id)originRes;
- (void)setOriginRes:(id)arg1;
- (void).cxx_destruct;
@end
