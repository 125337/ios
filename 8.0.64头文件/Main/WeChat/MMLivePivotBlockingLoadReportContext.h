@interface MMLivePivotBlockingLoadReportContext : NSObject
{
    BOOL _usingBackupFeeds; // +0x8
    unsigned int _newItemExposuresCount; // +0xc
    unsigned int _cumulatedPlayDurationInMilliseconds; // +0x10
    long long _historyItemsCount; // +0x18
    long long _bottomMostExposedIndex; // +0x20
    NSMutableSet * _collapsingObjectIds; // +0x28
    FinderLiveReportBaseInfo * _initialReportBaseInfo; // +0x30
    NSMutableDictionary * _exposedFeedItems; // +0x38
    NSMutableArray * _blockedLoadingDurations; // +0x40
    NSMutableDictionary * _itemAssociatedBlockedLoadingDurations; // +0x48
    unsigned long long _startLoadingUnixEpochTime; // +0x50
    unsigned long long _initializationUnixEpochTime; // +0x58
    NSMutableSet * _playingFeedsSet; // +0x60
    unsigned long long _lastPlayUnixEpochTime; // +0x68
}
- (id)init;
- (id)collapsingObjectIds;
- (id)reportingBlockInfo;
- (void)setNewItemExposuresCount:(unsigned int)arg1;
- (void)beginBlockedLoading;
- (void)completeBlockedLoadingWithFirstResultingObjectId:(unsigned long long)arg1;
- (void)failBlockedLoading;
- (void)exposeLiveWithObjectId:(unsigned long long)arg1;
- (void)beginPlayingLiveWithObjectId:(unsigned long long)arg1;
- (void)leaveLiveWithObjectId:(unsigned long long)arg1;
- (long long)historyItemsCount;
- (void)setHistoryItemsCount:(long long)arg1;
- (long long)bottomMostExposedIndex;
- (void)setBottomMostExposedIndex:(long long)arg1;
- (void)setCollapsingObjectIds:(id)arg1;
- (unsigned int)newItemExposuresCount;
- (id)initialReportBaseInfo;
- (void)setInitialReportBaseInfo:(id)arg1;
- (BOOL)usingBackupFeeds;
- (void)setUsingBackupFeeds:(BOOL)arg1;
- (id)exposedFeedItems;
- (void)setExposedFeedItems:(id)arg1;
- (id)blockedLoadingDurations;
- (void)setBlockedLoadingDurations:(id)arg1;
- (id)itemAssociatedBlockedLoadingDurations;
- (void)setItemAssociatedBlockedLoadingDurations:(id)arg1;
- (unsigned long long)startLoadingUnixEpochTime;
- (void)setStartLoadingUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)initializationUnixEpochTime;
- (void)setInitializationUnixEpochTime:(unsigned long long)arg1;
- (id)playingFeedsSet;
- (void)setPlayingFeedsSet:(id)arg1;
- (unsigned long long)lastPlayUnixEpochTime;
- (void)setLastPlayUnixEpochTime:(unsigned long long)arg1;
- (unsigned int)cumulatedPlayDurationInMilliseconds;
- (void)setCumulatedPlayDurationInMilliseconds:(unsigned int)arg1;
- (void).cxx_destruct;
@end
