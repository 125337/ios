@interface WCAdCollectedSubAdReportHelper : NSObject <PBMessageObserverDelegate>
{
    NSMutableDictionary * _pendingClickEvents; // +0x8
}
+ (id)sharedInstance;
+ (void)reportOriginExposure:(id)arg1 scene:(int)arg2;
+ (void)reportEffectiveExposure:(id)arg1 bodyWrap:(id)arg2 scene:(int)arg3;
+ (id)createBaseBodyWrap:(id)arg1;
- (id)init;
- (void)reportClickWithDataItem:(id)arg1 clickPos:(long long)arg2 scene:(int)arg3 resIndex:(int)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportMonitorSubAdClick:(id)arg1 resIndex:(int)arg2 snsId:(id)arg3;
- (void)reportMonitorSubAdClickResult:(id)arg1 resIndex:(int)arg2 snsId:(id)arg3 aid:(id)arg4;
- (id)pendingClickEvents;
- (void)setPendingClickEvents:(id)arg1;
- (void).cxx_destruct;
@end
