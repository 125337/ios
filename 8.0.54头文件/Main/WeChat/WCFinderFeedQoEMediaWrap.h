@interface WCFinderFeedQoEMediaWrap : WCFinderFeedMediaWrap
{
    long long _limitBitrateQoE; // +0x8
    long long _adajustPreloadDurationQoE; // +0x10
    double _adajustLimitBufferCountQoE; // +0x18
    FinderQoEReporter _mFinderQoEReporter; // +0x20
}
+ (id)mediaWrapWith:(id)arg1 mediaInfosPrelodList:(id)arg2 mediaInfosPlayList:(id)arg3;
+ (void)assignValueToFinderMediaQoEInfo:(id)arg1 finderMediaSpec:(id)arg2 mediaWrap:(id)arg3;
- (int)adaptiveAdjustMediaWrap:(id)arg1 mediaPlayedArray:(id)arg2 mediaNeeDecisionArray:(id)arg3 mediaInfo:(id)arg4 fileFormat:(id)arg5;
- (long long)limitBitrateQoE;
- (void)setLimitBitrateQoE:(long long)arg1;
- (long long)adajustPreloadDurationQoE;
- (void)setAdajustPreloadDurationQoE:(long long)arg1;
- (double)adajustLimitBufferCountQoE;
- (void)setAdajustLimitBufferCountQoE:(double)arg1;
- (FinderQoEReporter)mFinderQoEReporter;
- (void)setMFinderQoEReporter:(FinderQoEReporter)arg1;
@end

