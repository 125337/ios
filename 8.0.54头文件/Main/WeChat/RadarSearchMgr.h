@interface RadarSearchMgr : MMUserService <MMServiceProtocol, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    BOOL _isStartReport; // +0x8
    LocationRetriever * _locationRetrieve; // +0x10
    MMTimer * _sendReportTimer; // +0x18
    NSString * _ticket; // +0x20
    RadarSearchSetting * _setting; // +0x28
    CLLocation * _location; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (id)getSettingPath;
- (void)loadRadarSearchSetting;
- (void)saveSetting;
- (void)startRetrieveLocationFor:(unsigned long long)arg1;
- (void)stopRetrieveLocation;
- (void)reSendRadarReportRequest;
- (void)startResendRadarReportLogic;
- (void)stopResendRadarReportLogic;
- (void)startRadarReport;
- (void)removeRadarReportRequest;
- (void)stopRadarReport;
- (void)addFriend:(id)arg1;
- (void)verifyUsr:(id)arg1 withTicket:(id)arg2;
- (void)sendRadarReportRequest:(BOOL)arg1;
- (id)getLocation;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onSendRequestFail:(id)arg1;
- (void)onAddContactSuccessed:(id)arg1;
- (void)onSendRequestSuccessed:(id)arg1 pbCGIWrap:(id)arg2;
- (void)onVerifyOkFail:(id)arg1;
- (void)onVerifyOkSuccessed:(id)arg1;
- (void)HandleVerifyUserResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleRadarSearchResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)setting;
- (void)setSetting:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end

