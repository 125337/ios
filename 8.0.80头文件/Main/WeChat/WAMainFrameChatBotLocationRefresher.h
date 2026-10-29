@interface WAMainFrameChatBotLocationRefresher : NSObject <ILocationMgrExt>
{
    unsigned long long _gpsTag; // +0x8
    unsigned long long _addressTag; // +0x10
    unsigned long long _refreshGeneration; // +0x18
}
+ (id)sharedRefresher;
+ (void)refreshIfNeeded;
- (void)beginRefresh;
- (void)finishRefresh;
- (void)onGPSAccurateLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)handleRefreshLocation:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (unsigned long long)gpsTag;
- (void)setGpsTag:(unsigned long long)arg1;
- (unsigned long long)addressTag;
- (void)setAddressTag:(unsigned long long)arg1;
- (unsigned long long)refreshGeneration;
- (void)setRefreshGeneration:(unsigned long long)arg1;
@end
