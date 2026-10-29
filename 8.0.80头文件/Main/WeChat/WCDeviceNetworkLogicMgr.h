@interface WCDeviceNetworkLogicMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCDeviceNetworkLogicMgrDelegate> _delegate; // +0x8
}
- (void)dealloc;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2 SubscribeFlag:(unsigned int)arg3;
- (void)sendWCDeviceUnbindRequest:(id)arg1;
- (void)sendWCDeviceUnbindSingleDeviceRequest:(id)arg1 deviceId:(id)arg2;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)searchWCDeviceForQRCode:(id)arg1;
- (void)batchSearchWCDeviceByMac:(id)arg1 Filter:(id)arg2 Secene:(int)arg3;
- (void)sendWCDevicesGetOperTicketRequest:(id)arg1 Filter:(id)arg2;
- (void)sendUpdateMyDeviceAttrRequest:(id)arg1 alias:(id)arg2 isMain:(unsigned int)arg3;
- (void)sendUploadDeviceStepReq:(id)arg1 stepCount:(unsigned int)arg2 fromTime:(unsigned int)arg3 toTime:(unsigned int)arg4 hkSourceList:(id)arg5;
- (void)sendDeviceStepReq:(id)arg1 stepObject:(id)arg2;
- (void)sendSearchWifiHardDeviceReq:(id)arg1;
- (void)sendSearchBLEHardDevice:(id)arg1;
- (void)sendGetSportDeviceListReq;
- (void)sendWorkoutActivityReqWithRecord:(id)arg1;
- (void)sendSummaryActivityReqWithGoal:(id)arg1;
- (void)handleUpdateMyDeviceAttrResponse:(id)arg1;
- (void)handleGetHardDeviceOperTicketResponse:(id)arg1;
- (void)handleWCDeviceBindResponse:(id)arg1;
- (void)handleUploadDeviceStepResponse:(id)arg1;
- (void)handleUploadActivityResponse:(id)arg1;
- (void)onSendWCDeviceUnbindResponse:(id)arg1 Request:(id)arg2 HardDevice:(id)arg3 UserData:(id)arg4;
- (void)onSendWCDeviceGetBoundDevicesResponse:(id)arg1 Request:(id)arg2;
- (void)onSearchDeviceResponse:(id)arg1 Request:(id)arg2;
- (void)onBatchSearchHardDeviceResponse:(id)arg1 Request:(id)arg2;
- (void)handleWCDeviceUnbindResponse:(id)arg1;
- (void)handleWCDeviceGetBoundDevicesResponse:(id)arg1;
- (void)handleWCDeviceSearchResponse:(id)arg1;
- (void)handleBatchSearchHardDeviceResponse:(id)arg1;
- (void)handleSearchWifiHardDeviceResponse:(id)arg1;
- (void)handleSearchBLEHardDeviceResponse:(id)arg1;
- (void)handleGetSportDeviceListResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
