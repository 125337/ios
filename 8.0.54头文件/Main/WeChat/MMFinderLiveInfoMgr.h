@interface MMFinderLiveInfoMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isInBackground; // +0x8
    OrderedDictionary * _liveInfoWrapDict; // +0x10
    NSMutableDictionary * _fetchLiveActivityFinderDataItemDict; // +0x18
    double _nextFetchLiveActivityInterval; // +0x20
    NSMutableDictionary * _fetchNavLiveHomePageDataItemDict; // +0x28
    double _nextFetchNavLiveHomePageStatusInterval; // +0x30
    OrderedDictionary * _cachedAudioRoomBackgroundImageInfoDict; // +0x38
    NSMutableDictionary * _waitResultAudioRoomBackgroundImageInfoDict; // +0x40
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)updateFinderLiveInfo:(id)arg1 withObjectId:(unsigned long long)arg2;
- (void)updateFinderLiveInfo:(id)arg1 withTid:(id)arg2;
- (void)updateFinderLiveInfo:(id)arg1 withTid:(id)arg2 updateActivityType:(BOOL)arg3;
- (unsigned long long)getFinderLiveActivityTypeFromList:(id)arg1;
- (void)updateFinderLiveActivityType:(id)arg1 withObjectId:(unsigned long long)arg2;
- (void)updateFinderLiveActivityType:(id)arg1 withTid:(id)arg2;
- (void)markFinderLiveEndWithObjectId:(unsigned long long)arg1;
- (void)markFinderLiveEndWithTid:(id)arg1;
- (unsigned long long)getFinderLiveActivityTypeByTid:(id)arg1;
- (void)registerFetchLiveActivityWithFinderDataItem:(id)arg1;
- (void)unregisterFetchLiveActivityWithFinderDataItem:(id)arg1;
- (void)delayBatchGetLiveActivity;
- (id)allRegisteredFetchLiveActivityDataItems;
- (void)batchGetLiveActivity;
- (void)registerFetchNavLiveHomePageStatusWithFinderDataItem:(id)arg1;
- (void)unregisterFetchNavLiveHomePageStatusWithFinderDataItem:(id)arg1;
- (void)delayBatchGetNavLiveStatus;
- (id)allRegisteredFetchNavLiveHomePageStatusDataItems;
- (void)unregisterFetchAllNavLiveHomePageStatus;
- (void)batchGetNavLiveStatus;
- (void)updateFinderNavLiveHomePageStatus:(id)arg1 withTid:(id)arg2;
- (id)generateFinderLiveStreamTypeInfoWithLiveInfo:(id)arg1;
- (id)getFinderLiveStreamTypeInfoByTid:(id)arg1 withLiveInfo:(id)arg2;
- (void)updateFinderLiveStreamTypeInfo:(id)arg1 withTid:(id)arg2;
- (void)updateFinderLiveStreamTypeInfoWithMicSEIMsg:(id)arg1 isAudioMode:(BOOL)arg2 andTid:(id)arg3;
- (void)markStartCalcAudioRoomBackgroundImageWithOriginalUrlString:(id)arg1;
- (void)updateAudioRoomBackgroundImage:(id)arg1 audioWaveColor:(id)arg2 originalUrlString:(id)arg3;
- (id)getAudioRoomBackgroundImageInfoWithOriginalUrlString:(id)arg1;
- (id)liveInfoWrapDict;
- (void)setLiveInfoWrapDict:(id)arg1;
- (id)fetchLiveActivityFinderDataItemDict;
- (void)setFetchLiveActivityFinderDataItemDict:(id)arg1;
- (double)nextFetchLiveActivityInterval;
- (void)setNextFetchLiveActivityInterval:(double)arg1;
- (id)fetchNavLiveHomePageDataItemDict;
- (void)setFetchNavLiveHomePageDataItemDict:(id)arg1;
- (double)nextFetchNavLiveHomePageStatusInterval;
- (void)setNextFetchNavLiveHomePageStatusInterval:(double)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id)cachedAudioRoomBackgroundImageInfoDict;
- (void)setCachedAudioRoomBackgroundImageInfoDict:(id)arg1;
- (id)waitResultAudioRoomBackgroundImageInfoDict;
- (void)setWaitResultAudioRoomBackgroundImageInfoDict:(id)arg1;
- (void).cxx_destruct;
@end

