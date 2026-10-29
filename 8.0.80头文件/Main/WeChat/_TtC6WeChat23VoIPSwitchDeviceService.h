@interface _TtC6WeChat23VoIPSwitchDeviceService : MMUserService <MultiTalkMgrExt, IVOIPExt, MMKernelExt, MMServiceProtocol>
{
     _extDeviceTip; // +0x8
}
- (void)onEnterMultiTalk:(id)arg1;
- (void)onSwitchToOtherDevice:(unsigned long long)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)OnSwitchOtherDevice:(id)arg1;
- (void)onManulLoginOK;
- (void)validCurrentTipsBar;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)handleWithServerData:(id)arg1;
- (void)reset;
- (void)reportSwitchDeviceExpose;
- (id)switchDeviceExposeReportParams;
- (BOOL)shouldShowExtDeviceTipWithWxGroupId:(id)arg1;
- (BOOL)checkIfCouldChangeDeviceWithContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (id)init;
- (void).cxx_destruct;
@end
