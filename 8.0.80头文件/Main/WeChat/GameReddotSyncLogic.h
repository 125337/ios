@interface GameReddotSyncLogic : NSObject
{
    unsigned int _lastBatteryLevel; // +0x8
    unsigned long long _lastGetBatteryTimeMs; // +0x10
}
- (id)init;
- (void)triggerEnterForForegroundSync;
- (void)triggerEnterDiscoverySync;
- (void)triggerByreliableNotify:(id)arg1;
- (void)doSync:(int)arg1 data:(id)arg2;
- (id)getLastReddotQuitId;
- (int)getLastReddotQuitType;
- (long long)getLastReddotQuitTime;
- (unsigned int)getLastReddotQuitExposureCount;
- (BOOL)getWifiStatus;
- (unsigned int)getCacheBatteryLevel;
- (unsigned int)getUserExposureCount;
- (BOOL)checkIsInCooldownTime:(int)arg1;
- (unsigned int)getNextPulldownTime;
- (unsigned long long)lastGetBatteryTimeMs;
- (void)setLastGetBatteryTimeMs:(unsigned long long)arg1;
- (unsigned int)lastBatteryLevel;
- (void)setLastBatteryLevel:(unsigned int)arg1;
@end
