@interface WCCrashBlockMonitorConfig : MatrixPluginConfig
{
    BOOL _enableCrash; // +0x8
    BOOL _enableBlockMonitor; // +0x9
    BOOL _enableCorruptCrashUpload; // +0xa
    NSString * _appVersion; // +0x10
    NSString * _appShortVersion; // +0x18
    id <WCCrashBlockMonitorDelegate> _blockMonitorDelegate; // +0x20
    void * * _onHandleSignalCallBack; // +0x28
    void * * _onAppendAdditionalInfoCallBack; // +0x30
    WCBlockMonitorConfiguration * _blockMonitorConfiguration; // +0x38
    unsigned long long _reportStrategy; // +0x40
    NSArray * _customStrategy; // +0x48
}
+ (id)defaultConfiguration;
- (id)init;
- (id)description;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)appShortVersion;
- (void)setAppShortVersion:(id)arg1;
- (BOOL)enableCrash;
- (void)setEnableCrash:(BOOL)arg1;
- (BOOL)enableBlockMonitor;
- (void)setEnableBlockMonitor:(BOOL)arg1;
- (id)blockMonitorDelegate;
- (void)setBlockMonitorDelegate:(id)arg1;
- (void * *)onHandleSignalCallBack;
- (void)setOnHandleSignalCallBack:(void * *)arg1;
- (void * *)onAppendAdditionalInfoCallBack;
- (void)setOnAppendAdditionalInfoCallBack:(void * *)arg1;
- (id)blockMonitorConfiguration;
- (void)setBlockMonitorConfiguration:(id)arg1;
- (unsigned long long)reportStrategy;
- (void)setReportStrategy:(unsigned long long)arg1;
- (id)customStrategy;
- (void)setCustomStrategy:(id)arg1;
- (BOOL)enableCorruptCrashUpload;
- (void)setEnableCorruptCrashUpload:(BOOL)arg1;
- (void).cxx_destruct;
@end
