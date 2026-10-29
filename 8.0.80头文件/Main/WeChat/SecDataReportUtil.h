@interface SecDataReportUtil : MMUserService <KindaNotifyExt, MMServiceProtocol, MMKernelExt, WCPaySecInfoReportCgiDelegate>
+ (BOOL)checkScreenRecording;
+ (BOOL)checkVoipCalling;
+ (BOOL)checkVpnConnect;
- (float)getScreenBrightness;
- (id)init;
- (void)onKindaNotify:(id)arg1 value:(id)arg2;
- (void)doReportInfo:(id)arg1 eventName:(id)arg2;
- (void)onSecInfoReportCgiOK:(int)arg1 errorMessage:(id)arg2;
@end
