@interface WCFinderLiveStarterSwitchModeItem : NSObject
{
    BOOL _needHideAudioLiveMode; // +0x8
    BOOL _needHideKTVLiveMode; // +0x9
    unsigned long long _liveMode; // +0x10
    NSMutableDictionary * _liveModeDic; // +0x18
    WCFinderLiveStarterLiveModeSubItem * _selectSubItem; // +0x20
    WCFinderLiveStarterLiveModeSubItem * _lastSubItem; // +0x28
    NSLock * _liveModeLock; // +0x30
    WCFinderLiveStarterLiveModeCacheItem * _cacheItem; // +0x38
}
+ (id)cleanLiveStarterGameCacheItem;
+ (id)getLiveStarterCacheItem;
- (void)setUpLiveModeDicWithLiveModeCacheItem:(id)arg1 needHideAudioLiveMode:(BOOL)arg2 needHideKTVLiveMode:(BOOL)arg3;
- (BOOL)isRecordSelectedLiveMode:(unsigned long long)arg1;
- (id)getSelectSubItemWithLiveMode:(unsigned long long)arg1;
- (BOOL)isRecordSelectedVideoMode:(id)arg1;
- (BOOL)isRecordSelectedAudioMode:(id)arg1;
- (BOOL)isRecordSelectedGameMode:(id)arg1;
- (BOOL)selectModeWithLiveModeSubItem:(id)arg1;
- (BOOL)deleteModeWithLiveMode:(unsigned long long)arg1;
- (BOOL)changeVideoLandscapModeToPortraitMode;
- (id)liveModeLock;
- (id)getDirectSwitchSubItem:(id)arg1 didConsumeRedDot:(BOOL)arg2;
- (void)cacheLiveStarterLiveModeSubItem:(unsigned long long)arg1;
- (void)cleanCurrentLiveStarterGameCacheItem;
- (id)getLiveModeDicWithCacheItem:(id)arg1;
- (id)updateLiveModeDicWithDic:(id)arg1 needHideAudioLiveMode:(BOOL)arg2 needHideKTVLiveMode:(BOOL)arg3;
- (id)changeLanguageWithItem:(id)arg1 liveMode:(unsigned long long)arg2 videoSubType:(unsigned long long)arg3 audioSubType:(unsigned long long)arg4;
- (unsigned long long)liveMode;
- (void)setLiveMode:(unsigned long long)arg1;
- (id)liveModeDic;
- (void)setLiveModeDic:(id)arg1;
- (id)selectSubItem;
- (void)setSelectSubItem:(id)arg1;
- (id)lastSubItem;
- (void)setLastSubItem:(id)arg1;
- (void)setLiveModeLock:(id)arg1;
- (id)cacheItem;
- (void)setCacheItem:(id)arg1;
- (BOOL)needHideAudioLiveMode;
- (void)setNeedHideAudioLiveMode:(BOOL)arg1;
- (BOOL)needHideKTVLiveMode;
- (void)setNeedHideKTVLiveMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
