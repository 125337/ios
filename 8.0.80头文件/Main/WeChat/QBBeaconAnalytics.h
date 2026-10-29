@interface QBBeaconAnalytics : NSObject
{
    BOOL analyticsEnabled; // +0x8
    QBBeaconLocalStrategy * localStrategy; // +0x10
    NSMutableArray * anaModules; // +0x18
    int workType; // +0x20
    int status; // +0x24
    BOOL hasLocalDB; // +0x28
    BOOL hasSyncServer; // +0x29
    int serverSyncDelay; // +0x2c
    long long currentStatus; // +0x30
}
+ (id)getDefualtAnalytics;
- (id)init;
- (BOOL)enableAnlytics:(int)arg1 uin:(id)arg2 gatewayIP:(id)arg3;
- (BOOL)initLocalService;
- (void)initStrategyConfig;
- (void)asyncStrategyQuery;
- (BOOL)fetchCommonStrategyFormDB;
- (void)apnEventNotifyListen;
- (void)registObserver;
- (BOOL)isBackground;
- (void)appResumed;
- (void)appEnterBackground;
- (void)reachabilityChanged:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)aesKeyEncrypt;
- (void)setAesKeyEncrypt:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
- (BOOL)analyticsEnabled;
- (void)setAnalyticsEnabled:(BOOL)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (int)serverSyncDelay;
- (void)setServerSyncDelay:(int)arg1;
- (BOOL)hasLocalDB;
- (void)setHasLocalDB:(BOOL)arg1;
- (BOOL)hasSyncServer;
- (void)setHasSyncServer:(BOOL)arg1;
- (id)localStrategy;
- (void)setLocalStrategy:(id)arg1;
- (id)anaModules;
- (void)setAnaModules:(id)arg1;
- (int)workType;
- (void)setWorkType:(int)arg1;
- (long long)currentStatus;
- (void)setCurrentStatus:(long long)arg1;
@end
