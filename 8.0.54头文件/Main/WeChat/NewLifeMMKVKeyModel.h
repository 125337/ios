@interface NewLifeMMKVKeyModel : NSObject
{
    MemoryMappedKV * _internalKV; // +0x8
    NewLifePrefetchConf * _prefetchConf; // +0x10
    unsigned long long _userAttrFlag; // +0x18
}
- (id)init;
- (BOOL)updateNewLifePrefetchConfig:(id)arg1;
- (BOOL)updateNewLifeUserPrepare:(unsigned long long)arg1 entryRule:(id)arg2;
- (id)getNewLifeUserEntryRule;
- (BOOL)enableUseFinderContact;
- (BOOL)setEnableUseFinderContact:(BOOL)arg1;
- (BOOL)isHobbySelected;
- (BOOL)setIsHobbySelected:(BOOL)arg1;
- (BOOL)isNewLifePostGuideByTimelineStreamExptOpened;
- (BOOL)isNewLifePostGuideByTimelineDetailExptOpened;
- (BOOL)isNewLifePostGuideByTimelineActionSheetExptOpened;
- (id)userProfilePageCacheForUsername:(id)arg1;
- (BOOL)setUserProfilePageCache:(id)arg1 username:(id)arg2;
- (id)syncBufferForNewLifeSync;
- (void)setSyncBufferForNewLifeSync:(id)arg1;
- (id)lastBufferForNewLifeSync;
- (void)setLastBufferForNewLifeSync:(id)arg1;
- (long long)predownloadFirstImageFeedCount;
- (id)prefetchConfigArray;
- (BOOL)setPrefetchConfigArray:(id)arg1;
- (unsigned int)lastPrefetchTime:(unsigned long long)arg1;
- (BOOL)setLastPrefetchTime:(double)arg1 type:(unsigned long long)arg2;
- (BOOL)hasShowedPictureLocationPermissionReq;
- (BOOL)hasShownPostAssistPermissionRequest;
- (void)setShownPostAssistPermissionRequest;
- (BOOL)hasMigratedPictureLocationOnce;
- (void)setHasMigratedPictureLocation;
- (BOOL)resetJumpTopStoryTime;
- (BOOL)enableOperateDiscoverSearch;
- (id)internalKV;
- (void)setInternalKV:(id)arg1;
- (id)prefetchConf;
- (void)setPrefetchConf:(id)arg1;
- (unsigned long long)userAttrFlag;
- (void)setUserAttrFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

