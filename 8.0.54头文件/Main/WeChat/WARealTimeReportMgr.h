@interface WARealTimeReportMgr : MMUserService <MMServiceProtocol>
{
    MMTimer * _timerReportCheck; // +0x8
    NSMutableArray * _arrReportInfo; // +0x10
    unsigned int _reportTimeInterval; // +0x18
    unsigned int _lastReportTime; // +0x1c
    ReportDeviceInfo * _deviceInfo; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportPageRouteInfo:(id)arg1 appID:(id)arg2 withExtBaseItem:(id)arg3;
- (void)reportJSRealtimeAction:(id)arg1 appID:(id)arg2 withExtBaseItem:(id)arg3;
- (void)startRealTimeReportTimer;
- (void)invadateRealTimeReportTimer;
- (void)onTimerRealTimeReportTimer:(id)arg1;
- (void)realTimeReportInfo;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onReportResponse:(id)arg1;
- (void).cxx_destruct;
@end

