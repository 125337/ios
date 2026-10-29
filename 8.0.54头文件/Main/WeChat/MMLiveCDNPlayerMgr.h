@interface MMLiveCDNPlayerMgr : MMUserService <MMServiceProtocol>
{
    BOOL _canReuseCdnPlayerItemWhenEnterLive; // +0x8
    BOOL _canPreloadCdnPlayerItemInFeedList; // +0x9
    BOOL _isInBackground; // +0xa
    unsigned int _nextReportStreamStatusInterval; // +0xc
    unsigned int _lastReportStreamStatusTime; // +0x10
    NSMutableDictionary * _liveCDNPlayerItemDict; // +0x18
    OrderedDictionary * _livePreloadCDNPlayerItemDict; // +0x20
    unsigned long long _preloadItemDictMaxCount; // +0x28
    TRTCDecoderFactory * _mWXVideoDecoder; // +0x30
    FLVNetworkInfo * _cachedFlvNetworkInfo; // +0x38
    NSMutableDictionary * _enterLiveUIEventItemTimeMap; // +0x40
    NSMutableArray * _streamStatusList; // +0x48
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)clearPreloadCDNPlayerItemDict;
- (void)clearLiveCDNPlayerItemDict;
- (void)setEnableHEVAndAVCDecoder;
- (void)setEnterLiveUIEventTimestamp:(unsigned long long)arg1 forItemId:(id)arg2;
- (unsigned long long)getEnterLiveUIEventTimestampWithItemId:(id)arg1;
- (id)getLiveCDNPlayerItemWithId:(id)arg1 delegate:(id)arg2 playScene:(unsigned long long)arg3 liveVrType:(int)arg4;
- (BOOL)removeCDNPlayerItem:(id)arg1;
- (void)pauseOrCleanPlayerItemsWhenEnterBackground;
- (void)startPlayForPreloadWithId:(id)arg1 url:(id)arg2 andDelayStopTime:(double)arg3 liveVrType:(unsigned int)arg4;
- (void)checkPreloadCDNPlayerItemDictCount;
- (BOOL)removePreloadCDNPlayerItem:(id)arg1;
- (id)preloadLiveRoomCDNPlayerItemWithId:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 url:(id)arg4 originalUrl:(id)arg5 andDelayStopTime:(double)arg6 liveSdkInfo:(id)arg7 liveVrType:(unsigned int)arg8 anchorNickname:(id)arg9 commentScene:(int)arg10;
- (BOOL)checkHasCdnPlayerPlaying;
- (BOOL)checkHasUnmutedCdnPlayerPlaying;
- (id)getFlvNetworkInfo;
- (long long)getLastFlvNetworkQuality;
- (void)tryReportStreamStatus:(id)arg1;
- (void)doReportStreamStatusIfNeed;
- (BOOL)canReuseCdnPlayerItemWhenEnterLive;
- (void)setCanReuseCdnPlayerItemWhenEnterLive:(BOOL)arg1;
- (BOOL)canPreloadCdnPlayerItemInFeedList;
- (void)setCanPreloadCdnPlayerItemInFeedList:(BOOL)arg1;
- (id)liveCDNPlayerItemDict;
- (void)setLiveCDNPlayerItemDict:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)livePreloadCDNPlayerItemDict;
- (void)setLivePreloadCDNPlayerItemDict:(id)arg1;
- (unsigned long long)preloadItemDictMaxCount;
- (void)setPreloadItemDictMaxCount:(unsigned long long)arg1;
- (id)mWXVideoDecoder;
- (void)setMWXVideoDecoder:(id)arg1;
- (id)cachedFlvNetworkInfo;
- (void)setCachedFlvNetworkInfo:(id)arg1;
- (id)enterLiveUIEventItemTimeMap;
- (void)setEnterLiveUIEventItemTimeMap:(id)arg1;
- (id)streamStatusList;
- (void)setStreamStatusList:(id)arg1;
- (unsigned int)nextReportStreamStatusInterval;
- (void)setNextReportStreamStatusInterval:(unsigned int)arg1;
- (unsigned int)lastReportStreamStatusTime;
- (void)setLastReportStreamStatusTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

