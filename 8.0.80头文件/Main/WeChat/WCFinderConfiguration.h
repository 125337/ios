@interface WCFinderConfiguration : NSObject
{
    unsigned long long _liveNoticeStateRefreshInterval; // +0x8
    unsigned long long _adContactRefreshInterval; // +0x10
    long long _nearbyLivePrefetchInterval; // +0x18
    long long _liveTabPrefetchInterval; // +0x20
    NSMutableDictionary * _liveDict; // +0x28
    NSMutableDictionary * _liveNoticeDict; // +0x30
    NSMutableDictionary * _adContactDict; // +0x38
    NSMutableDictionary * _nearbyLivePrefetchDict; // +0x40
    NSMutableDictionary * _liveTabPrefetchTimeDict; // +0x48
    NSMutableDictionary * _liveShareStatusRefreshIntevalDict; // +0x50
    NSMutableDictionary * _liveAutoPlayControlFlagDict; // +0x58
}
- (id)init;
- (BOOL)shouldUseLocalLiveStatusWithLiveId:(id)arg1;
- (unsigned long long)getLiveStatusFromLocalWithLiveId:(id)arg1;
- (BOOL)shouldUseLocalLiveNoticeReserveStateWithNoticeId:(id)arg1;
- (unsigned long long)getLiveNoticeReserveStateFromLocalWithNoticeId:(id)arg1;
- (void)updateLiveNoticeInfo:(id)arg1;
- (BOOL)shouldUseLocalAdContactWithUsername:(id)arg1;
- (id)getAdContactFromLocalWithUsername:(id)arg1;
- (void)updateAdContact:(id)arg1;
- (void)refreshNearbyLivePrefetchTimestampWithPullType:(unsigned long long)arg1;
- (BOOL)canNearbyLivePrefetchWithPullType:(unsigned long long)arg1;
- (void)refreshLiveTabPrefetchTimestampWithTabId:(unsigned long long)arg1;
- (BOOL)canLiveTabPrefetch;
- (BOOL)canLiveTabPrefetchWithTabId:(unsigned long long)arg1;
- (void)resetLivePrefetchTime;
- (BOOL)updateLiveShareStatusRefreshInteval:(id)arg1 refreshInteval:(double)arg2;
- (double)currentLiveShareStatusRefreshInteval:(id)arg1;
- (void)resetLiveShareStatusRefreshIntevalDict;
- (BOOL)updateLiveAutoPlayControlFlag:(id)arg1 controlFlag:(unsigned int)arg2;
- (unsigned int)currentLiveAutoPlayControlFlag:(id)arg1;
- (void)resetLiveAutoPlayControlFlagDict;
- (id)liveShareSupportJumpFlagKey:(id)arg1;
- (void)updateLiveShareSupportJumpFlag:(id)arg1 controlFlag:(BOOL)arg2;
- (BOOL)currentLiveShareSupportJumpFlag:(id)arg1;
- (id)liveShareSupportSquareJumpPrefetchKey:(id)arg1 scene:(unsigned int)arg2 isControlFlag:(BOOL)arg3;
- (void)updateLiveShareSupportSquareJumpPrefetchInfo:(id)arg1 scene:(unsigned int)arg2 controlFlag:(BOOL)arg3 jumpNavliveBuffer:(id)arg4;
- (BOOL)currentLiveShareSupportSquareJumpPrefetchFlag:(id)arg1 scene:(unsigned int)arg2;
- (id)currentLiveShareSupportSquareJumpPrefetchData:(id)arg1 scene:(unsigned int)arg2;
- (id)liveDict;
- (id)liveNoticeDict;
- (id)adContactDict;
- (id)nearbyLivePrefetchDict;
- (id)liveTabPrefetchTimeDict;
- (id)liveShareStatusRefreshIntevalDict;
- (id)liveAutoPlayControlFlagDict;
- (unsigned long long)liveNoticeStateRefreshInterval;
- (void)setLiveNoticeStateRefreshInterval:(unsigned long long)arg1;
- (unsigned long long)adContactRefreshInterval;
- (void)setAdContactRefreshInterval:(unsigned long long)arg1;
- (long long)nearbyLivePrefetchInterval;
- (void)setNearbyLivePrefetchInterval:(long long)arg1;
- (long long)liveTabPrefetchInterval;
- (void)setLiveTabPrefetchInterval:(long long)arg1;
- (void)setLiveDict:(id)arg1;
- (void)setLiveNoticeDict:(id)arg1;
- (void)setAdContactDict:(id)arg1;
- (void)setNearbyLivePrefetchDict:(id)arg1;
- (void)setLiveTabPrefetchTimeDict:(id)arg1;
- (void)setLiveShareStatusRefreshIntevalDict:(id)arg1;
- (void)setLiveAutoPlayControlFlagDict:(id)arg1;
- (void).cxx_destruct;
@end
