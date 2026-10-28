@interface FlutterFoundationCrashPlugin : NSObject <MMStackReportConnectionDelegate, MMFlutterPlugin>
{
    BOOL _killSelf; // +0x8
    BOOL _reportToCrash; // +0x9
    BOOL _exitWhenKillSelf; // +0xa
    NSString * _pluginName; // +0x10
    long long _engineCreateTime; // +0x18
    MMStackReportConnection * _reportConnection; // +0x20
    NSDateFormatter * _timeFormatter; // +0x28
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)reportKvParams:(id)arg1 killSelf:(BOOL)arg2 error:(id)arg3 stackTrace:(id)arg4 wechatImage:(id)arg5;
- (void)reportStack:(id)arg1 killSelf:(id)arg2 error:(id)arg3 stackTrace:(id)arg4 wechatImage:(id)arg5;
- (void)onStackReportCompleted:(BOOL)arg1;
- (id)memoryInfo;
- (id)timeInfo;
- (id)byteToMegabyte:(unsigned long long)arg1;
- (id)flutterInfo:(id)arg1;
- (id)getWechatBinary;
- (id)reportPageName:(id)arg1;
- (id)pluginName;
- (void)setPluginName:(id)arg1;
- (long long)engineCreateTime;
- (void)setEngineCreateTime:(long long)arg1;
- (id)reportConnection;
- (void)setReportConnection:(id)arg1;
- (id)timeFormatter;
- (void)setTimeFormatter:(id)arg1;
- (BOOL)killSelf;
- (void)setKillSelf:(BOOL)arg1;
- (BOOL)reportToCrash;
- (void)setReportToCrash:(BOOL)arg1;
- (BOOL)exitWhenKillSelf;
- (void)setExitWhenKillSelf:(BOOL)arg1;
- (void).cxx_destruct;
@end
