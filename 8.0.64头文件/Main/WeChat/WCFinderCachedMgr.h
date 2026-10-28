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
    unsigned long long _fetchRedDotSnsDelivery; // +0x48
    unsigned long long _fetchRedDotAppPush; // +0x50
    WCFinderTipsShowEntranceExtInfo * _lbsLifeEntranceShowInfoExtInfo; // +0x58
    MMLRUCache * _notifyUUIDCache; // +0x60
    MMLRUCache * _lbsLifeSyncNotifyUUIDCache; // +0x68
    MMLRUCache * _feedPlayInfoCache; // +0x70
    MMLRUCache * _feedClientReportInfoCache; // +0x78
    MMLRUCache * _profilePreFetchCache; // +0x80
    MMLRUCache * _encryptedDataItemChache; // +0x88
    MMLRUCache * _autoPlayNextFeedSwitchCache; // +0x90
    NSMutableSet * _redPacketBubbleShowSet; // +0x98
    EntranceReportSwitch * _syncReport; // +0xa0
    EntranceReportSwitch * _lbsLifeSyncReport; // +0xa8
    MMLRUCache * _fansProfileUsernameCache; // +0xb0
    MMLRUCache * _subTabCache; // +0xb8
    unsigned long long _hasEnterTabRecord; // +0xc0
    unsigned long long _hasJumpToTabFromLeadToCardRecord; // +0xc8
}
+ (id)cachedKeyOfEncryptedFeedID:(id)arg1;
+ (unsigned long long)convertFrom:(long long)arg1;
- (id)init;
- (id)redPacketBubbleShowSet;
- (void)addRedPacketBubbleShow:(id)arg1;
- (BOOL)redPacketBubbleHasShow:(id)arg1;
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
- (void).cxx_destruct;
@end
