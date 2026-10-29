@interface WCFinderCachedMgr : NSObject
{
    BOOL _ignoreFaceVerifyCheck; // +0x8
    unsigned long long _discoverySyncTimestamp; // +0x10
    unsigned long long _foregroundSyncTimestamp; // +0x18
    unsigned long long _lbsLifeForegroundSyncTimestamp; // +0x20
    unsigned long long _enterSnsSyncTimestamp; // +0x28
    unsigned long long _exitSnsSyncTimestamp; // +0x30
    unsigned long long _exposeLastSnsFeedSyncTimestamp; // +0x38
    unsigned long long _exposeNSnsFeedSyncTimestamp; // +0x40
    unsigned long long _snsReddotDeliverySyncTimestamp; // +0x48
    unsigned long long _exposeIntervalReplaceSyncTimestamp; // +0x50
    unsigned long long _fetchRedDotSnsDelivery; // +0x58
    unsigned long long _fetchRedDotAppPush; // +0x60
    WCFinderTipsShowEntranceExtInfo * _lbsLifeEntranceShowInfoExtInfo; // +0x68
    MMLRUCache * _notifyUUIDCache; // +0x70
    MMLRUCache * _lbsLifeSyncNotifyUUIDCache; // +0x78
    MMLRUCache * _feedPlayInfoCache; // +0x80
    MMLRUCache * _feedClientReportInfoCache; // +0x88
    MMLRUCache * _profilePreFetchCache; // +0x90
    MMLRUCache * _encryptedDataItemChache; // +0x98
    MMLRUCache * _autoPlayNextFeedSwitchCache; // +0xa0
    NSMutableSet * _redPacketBubbleShowSet; // +0xa8
    NSMutableSet * _postJumpInfoBubbleShowSet; // +0xb0
    EntranceReportSwitch * _syncReport; // +0xb8
    EntranceReportSwitch * _lbsLifeSyncReport; // +0xc0
    MMLRUCache * _fansProfileUsernameCache; // +0xc8
    MMLRUCache * _subTabCache; // +0xd0
    unsigned long long _hasEnterTabRecord; // +0xd8
    unsigned long long _hasJumpToTabFromLeadToCardRecord; // +0xe0
    MMLRUCache * _shareListRemindFeedCache; // +0xe8
    MMLRUCache * _musicVideoRecommendCache; // +0xf0
    unsigned long long _musicVideoRecommendCacheCapacity; // +0xf8
    NSString * _exposeIntervalReplaceTipsUuid; // +0x100
    unsigned long long _exposeIntervalReplaceCount; // +0x108
    unsigned long long _exposeIntervalReplaceObservedExposeCount; // +0x110
    unsigned long long _exposeIntervalReplaceLastEndTimestamp; // +0x118
    NSString * _exposeIntervalReplaceExposingTipsUuid; // +0x120
    NSString * _exposeIntervalReplaceScheduledTipsUuid; // +0x128
    unsigned long long _exposeIntervalReplaceScheduledTimestamp; // +0x130
}
+ (id)cachedKeyOfEncryptedFeedID:(id)arg1;
+ (unsigned long long)convertFrom:(long long)arg1;
- (void)configureMusicVideoRecommendCacheCapacity:(unsigned long long)arg1;
- (id)musicVideoRecommendCacheObjectForKey:(id)arg1;
- (void)setMusicVideoRecommendCacheObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)redPacketBubbleShowSet;
- (void)addRedPacketBubbleShow:(id)arg1;
- (BOOL)redPacketBubbleHasShow:(id)arg1;
- (id)postJumpInfoBubbleShowSet;
- (void)addPostJumpInfoBubbleShow:(id)arg1;
- (BOOL)postJumpInfoBubbleShow:(id)arg1;
- (void)onCachedMgrClearData;
- (void)onCachedMgrTerminate;
- (void)_saveEncryTidCached:(id)arg1;
- (BOOL)hadCacheNotifyUUID:(id)arg1;
- (void)cacheNotifyUUID:(id)arg1;
- (BOOL)hadCacheLbsLifeSyncNotifyUUID:(id)arg1;
- (void)cacheLbsLifeSyncNotifyUUID:(id)arg1;
- (void)updateVideoPlayReportInfo:(id)arg1 withFeedID:(id)arg2 commentScene:(unsigned long long)arg3;
- (id)getVideoPlayReportInfoWithTid:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)updateFeedClientInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2 reportInfo:(id)arg3;
- (id)getFeedClientInfoWithFeedID:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)removeFeedClientInfoKeys:(id)arg1 withFeedID:(id)arg2 commentScene:(unsigned long long)arg3;
- (id)getKeyWithTid:(id)arg1 commentScene:(unsigned long long)arg2;
- (id)notifyUUIDCache;
- (id)feedPlayInfoCache;
- (id)feedClientReportInfoCache;
- (id)lbsLifeSyncNotifyUUIDCache;
- (id)profilePreFetchCache;
- (void)saveProfilePreFetchTimestampWithUsername:(id)arg1;
- (BOOL)canProfilePreFetchWithUsername:(id)arg1 interval:(long long)arg2;
- (id)encryptedDataItemChache;
- (id)feedIdWithEncryptedFeedID:(id)arg1;
- (void)removeCachedFeedIDWithEncryptedFeedID:(id)arg1;
- (void)updateFeedId:(id)arg1 withEncryptedFeedID:(id)arg2;
- (id)autoPlayNextFeedSwitchCache;
- (void)setAutoPlayNextFeedSwitch:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)getAutoPlayNextFeedSwitchForKey:(id)arg1;
- (unsigned long long)exposeIntervalReplaceCountForTipsUuid:(id)arg1;
- (void)increaseExposeIntervalReplaceCountForTipsUuid:(id)arg1;
- (void)updateExposeIntervalReplaceStateForTipsUuid:(id)arg1 exposeCount:(unsigned long long)arg2 lastEndTimestamp:(unsigned long long)arg3;
- (unsigned long long)exposeIntervalReplaceObservedExposeCountForTipsUuid:(id)arg1;
- (unsigned long long)exposeIntervalReplaceLastEndTimestampForTipsUuid:(id)arg1;
- (BOOL)beginExposeIntervalReplaceExposureForTipsUuid:(id)arg1;
- (void)endExposeIntervalReplaceExposureForTipsUuid:(id)arg1;
- (BOOL)isExposeIntervalReplaceExposingTipsUuid:(id)arg1;
- (BOOL)updateExposeIntervalReplaceScheduleForTipsUuid:(id)arg1 triggerTimestamp:(unsigned long long)arg2;
- (BOOL)consumeExposeIntervalReplaceScheduleForTipsUuid:(id)arg1 triggerTimestamp:(unsigned long long)arg2;
- (void)updateSyncConfig:(id)arg1;
- (id)syncConfig;
- (void)commonLogForSyncConfigUpdateWithConfig:(id)arg1 logIdentifier:(id)arg2;
- (void)updateLbsLifeSyncConfig:(id)arg1;
- (id)lbsLifeSyncConfig;
- (void)cacheFansProfileUsername:(id)arg1 username:(id)arg2;
- (id)getFansProfileCacheName:(id)arg1;
- (BOOL)hasEnterTimelineTab:(long long)arg1;
- (void)markEnterTimelineTab:(long long)arg1;
- (BOOL)hasJumpToTimelineTabFromLeadToCard:(long long)arg1;
- (void)markJumpToTimelineTabFromLeadToCard:(long long)arg1;
- (void)clearAllEnterTimelineTabRecord;
- (id)shareListRemindFeedCache;
- (void)setShareListRemindFeedCache:(id)arg1 shareFeedKey:(id)arg2;
- (void)removeShareListRemindFeedCacheWithShareFeedKey:(id)arg1;
- (id)getShareListRemindFeedCacheForKey:(id)arg1;
- (unsigned long long)discoverySyncTimestamp;
- (void)setDiscoverySyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)foregroundSyncTimestamp;
- (void)setForegroundSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)lbsLifeForegroundSyncTimestamp;
- (void)setLbsLifeForegroundSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)enterSnsSyncTimestamp;
- (void)setEnterSnsSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)exitSnsSyncTimestamp;
- (void)setExitSnsSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)exposeLastSnsFeedSyncTimestamp;
- (void)setExposeLastSnsFeedSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)exposeNSnsFeedSyncTimestamp;
- (void)setExposeNSnsFeedSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)snsReddotDeliverySyncTimestamp;
- (void)setSnsReddotDeliverySyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)exposeIntervalReplaceSyncTimestamp;
- (void)setExposeIntervalReplaceSyncTimestamp:(unsigned long long)arg1;
- (unsigned long long)fetchRedDotSnsDelivery;
- (void)setFetchRedDotSnsDelivery:(unsigned long long)arg1;
- (unsigned long long)fetchRedDotAppPush;
- (void)setFetchRedDotAppPush:(unsigned long long)arg1;
- (BOOL)ignoreFaceVerifyCheck;
- (void)setIgnoreFaceVerifyCheck:(BOOL)arg1;
- (id)lbsLifeEntranceShowInfoExtInfo;
- (void)setLbsLifeEntranceShowInfoExtInfo:(id)arg1;
- (void)setNotifyUUIDCache:(id)arg1;
- (void)setLbsLifeSyncNotifyUUIDCache:(id)arg1;
- (void)setFeedPlayInfoCache:(id)arg1;
- (void)setFeedClientReportInfoCache:(id)arg1;
- (void)setProfilePreFetchCache:(id)arg1;
- (void)setEncryptedDataItemChache:(id)arg1;
- (void)setAutoPlayNextFeedSwitchCache:(id)arg1;
- (void)setRedPacketBubbleShowSet:(id)arg1;
- (void)setPostJumpInfoBubbleShowSet:(id)arg1;
- (id)syncReport;
- (void)setSyncReport:(id)arg1;
- (id)lbsLifeSyncReport;
- (void)setLbsLifeSyncReport:(id)arg1;
- (id)fansProfileUsernameCache;
- (void)setFansProfileUsernameCache:(id)arg1;
- (id)subTabCache;
- (void)setSubTabCache:(id)arg1;
- (unsigned long long)hasEnterTabRecord;
- (void)setHasEnterTabRecord:(unsigned long long)arg1;
- (unsigned long long)hasJumpToTabFromLeadToCardRecord;
- (void)setHasJumpToTabFromLeadToCardRecord:(unsigned long long)arg1;
- (void)setShareListRemindFeedCache:(id)arg1;
- (id)musicVideoRecommendCache;
- (void)setMusicVideoRecommendCache:(id)arg1;
- (unsigned long long)musicVideoRecommendCacheCapacity;
- (void)setMusicVideoRecommendCacheCapacity:(unsigned long long)arg1;
- (id)exposeIntervalReplaceTipsUuid;
- (void)setExposeIntervalReplaceTipsUuid:(id)arg1;
- (unsigned long long)exposeIntervalReplaceCount;
- (void)setExposeIntervalReplaceCount:(unsigned long long)arg1;
- (unsigned long long)exposeIntervalReplaceObservedExposeCount;
- (void)setExposeIntervalReplaceObservedExposeCount:(unsigned long long)arg1;
- (unsigned long long)exposeIntervalReplaceLastEndTimestamp;
- (void)setExposeIntervalReplaceLastEndTimestamp:(unsigned long long)arg1;
- (id)exposeIntervalReplaceExposingTipsUuid;
- (void)setExposeIntervalReplaceExposingTipsUuid:(id)arg1;
- (id)exposeIntervalReplaceScheduledTipsUuid;
- (void)setExposeIntervalReplaceScheduledTipsUuid:(id)arg1;
- (unsigned long long)exposeIntervalReplaceScheduledTimestamp;
- (void)setExposeIntervalReplaceScheduledTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
