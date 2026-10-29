@interface QBBeaconEventModule : NSObject <QBBeaconAnalyticsModule>
{
    BOOL userEnabled; // +0x8
    BOOL beaconStatisReportEnabled; // +0x9
    QBBeaconModuleStrategy * moduleStrategy; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (int)moduleKey;
- (BOOL)checkAndEnable;
- (void)disableModule;
- (void)enableModule;
- (BOOL)isEnabled;
- (BOOL)uploadModuleHistoryData;
- (void)appStarted;
- (void)appResumed;
- (void)recordAppLaunchEvent:(BOOL)arg1;
- (void)appEnterBack;
- (void)initBeaconProperties;
- (void)refreshNetInfo;
- (void).cxx_destruct;
- (BOOL)userEnabled;
- (void)setUserEnabled:(BOOL)arg1;
- (BOOL)beaconStatisReportEnabled;
- (void)setBeaconStatisReportEnabled:(BOOL)arg1;
- (id)moduleStrategy;
- (void)setModuleStrategy:(id)arg1;
@end

