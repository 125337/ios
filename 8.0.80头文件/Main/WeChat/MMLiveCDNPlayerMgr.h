@interface MMLiveCDNPlayerMgr : MMUserService <WCAVAudioSessionSwizzleExtension, MMServiceProtocol>
{
    BOOL _canReuseCdnPlayerItemWhenEnterLive; // +0x8
    BOOL _canPreloadCdnPlayerItemInFeedList; // +0x9
    BOOL _isInBackground; // +0xa
    unsigned int _nextReportStreamStatusInterval; // +0xc
    unsigned int _lastReportStreamStatusTime; // +0x10
    MMLiveCDNPlayerView * _currentReusablePlayerView; // +0x18
    MMLiveCDNPlayerItem * _lastStartedCdnPlayerItem; // +0x20
    NSMutableDictionary * _liveCDNPlayerItemDict; // +0x28
    OrderedDictionary * _livePreloadCDNPlayerItemDict; // +0x30
    unsigned long long _preloadItemDictMaxCount; // +0x38
    FLVNetworkInfo * _cachedFlvNetworkInfo; // +0x40
    NSMutableDictionary * _enterLiveUIEventItemTimeMap; // +0x48
    NSMutableArray * _streamStatusList; // +0x50
    NSRecursiveLock * _playerItemDictLock; // +0x58
    MMLiveCDNPlayerIllegalEvent * _lastReportedIllegalMultipleUnmutePlayEvent; // +0x60
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)clearReusablePlayerView;
- (void)clearPreloadCDNPlayerItemDict;
- (void)clearLiveCDNPlayerItemDict;
- (void)setEnableHEVAndAVCDecoder;
- (void)setEnterLiveUIEventTimestamp:(unsigned long long)arg1 forItemId:(id)arg2;
- (unsigned long long)getEnterLiveUIEventTimestampWithItemId:(id)arg1;
- (id)getLiveCDNPlayerItemWithId:(id)arg1 delegate:(id)arg2 playScene:(unsigned long long)arg3 liveVrType:(int)arg4;
- (id)getPlayingLiveCDNPlayerItemIfExistWithId:(id)arg1;
- (BOOL)removeCDNPlayerItem:(id)arg1;
- (void)pauseOrCleanPlayerItemsWhenEnterBackground;
- (void)startPlayForPreloadWithId:(id)arg1 url:(id)arg2 andDelayStopTime:(double)arg3 liveVrType:(unsigned int)arg4;
- (void)checkPreloadCDNPlayerItemDictCount;
- (BOOL)removePreloadCDNPlayerItem:(id)arg1;
- (id)preloadLiveRoomCDNPlayerItemWithId:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 url:(id)arg4 originalUrl:(id)arg5 andDelayStopTime:(double)arg6 liveSdkInfo:(id)arg7 liveVrType:(unsigned int)arg8 anchorNickname:(id)arg9 commentScene:(int)arg10;
- (BOOL)isLiveCDNPlayersPlayingOrLoading;
- (BOOL)checkHasCdnPlayerPlaying;
- (BOOL)checkHasCdnPlayerPlayingOutsideLiveRoom;
- (BOOL)checkHasCdnPlayerOutsideLiveRoomWithId:(id)arg1;
- (BOOL)checkHasUnmutedCdnPlayerPlaying;
- (BOOL)checkHasCdnPlayerPrePlayingInFinderFeed;
- (id)getFlvNetworkInfo;
- (long long)getLastFlvNetworkQuality;
- (void)delayCheckIllegalPlayAndReport;
- (void)_checkIllegalPlayAndReport;
- (BOOL)checkMultipleUnmutedPlayersPlaying;
- (BOOL)pauseLeakedCDNPlayerItem:(id)arg1;
- (void)wcAVAudioSessionSwizzleDidCallMethod:(id)arg1 error:(id)arg2 ret:(BOOL)arg3 caller:(id)arg4;
- (void)tryReportStreamStatus:(id)arg1;
- (void)doReportStreamStatusIfNeed;
- (BOOL)canReuseCdnPlayerItemWhenEnterLive;
- (void)setCanReuseCdnPlayerItemWhenEnterLive:(BOOL)arg1;
- (BOOL)canPreloadCdnPlayerItemInFeedList;
- (void)setCanPreloadCdnPlayerItemInFeedList:(BOOL)arg1;
- (id)currentReusablePlayerView;
- (void)setCurrentReusablePlayerView:(id)arg1;
- (id)lastStartedCdnPlayerItem;
- (void)setLastStartedCdnPlayerItem:(id)arg1;
- (id)liveCDNPlayerItemDict;
- (void)setLiveCDNPlayerItemDict:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)livePreloadCDNPlayerItemDict;
- (void)setLivePreloadCDNPlayerItemDict:(id)arg1;
- (unsigned long long)preloadItemDictMaxCount;
- (void)setPreloadItemDictMaxCount:(unsigned long long)arg1;
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
- (id)playerItemDictLock;
- (void)setPlayerItemDictLock:(id)arg1;
- (id)lastReportedIllegalMultipleUnmutePlayEvent;
- (void)setLastReportedIllegalMultipleUnmutePlayEvent:(id)arg1;
- (void).cxx_destruct;
@end
