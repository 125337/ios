@interface WADeviceVoipAuthViewController : ZZFLEXTableViewController <MessagePageSheetAdapterDelegate, IWADeviceVoipAuthServiceExt>
{
    NSString * _weappUsername; // +0x70
    NSArray * _deviceList; // +0x78
    NSArray * _serviceVoipList; // +0x80
    NSString * _enterSessionId; // +0x88
    unsigned long long _enterSource; // +0x90
    NSMutableSet * _statusChangedDevice; // +0x98
    NSMutableSet * _statusChangedServiceVoip; // +0xa0
    NSString * _pageId; // +0xa8
}
- (id)init;
- (void)viewDidLoad;
- (void)fetchVoipAuthItemIfNeeded;
- (void)reloadUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)enterVoipRecordList;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onFetchVoipDeviceList:(id)arg1 serviceVoipList:(id)arg2;
- (void)report37090:(unsigned long long)arg1 templateId:(id)arg2;
- (id)weappUsername;
- (void)setWeappUsername:(id)arg1;
- (id)deviceList;
- (void)setDeviceList:(id)arg1;
- (id)serviceVoipList;
- (void)setServiceVoipList:(id)arg1;
- (id)enterSessionId;
- (void)setEnterSessionId:(id)arg1;
- (unsigned long long)enterSource;
- (void)setEnterSource:(unsigned long long)arg1;
- (id)statusChangedDevice;
- (void)setStatusChangedDevice:(id)arg1;
- (id)statusChangedServiceVoip;
- (void)setStatusChangedServiceVoip:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (void).cxx_destruct;
@end
