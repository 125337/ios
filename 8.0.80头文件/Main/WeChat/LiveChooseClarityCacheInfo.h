@interface LiveChooseClarityCacheInfo : NSObject <PBCoding>
{
    unsigned int _settingTime; // +0x8
    unsigned int _cdnQualityTag; // +0xc
    unsigned int _mediaType; // +0x10
    unsigned int _videoQualityLevel; // +0x14
    unsigned long long _liveTaskId; // +0x18
    NSString * _tagName; // +0x20
    NSString * _videoQualityLevelDesc; // +0x28
    unsigned long long _currentUin; // +0x30
}
+ (void)PBArrayAdd_liveTaskId;
+ (void)PBArrayAdd_tagName;
+ (void)PBArrayAdd_videoQualityLevelDesc;
+ (void)PBArrayAdd_settingTime;
+ (void)PBArrayAdd_cdnQualityTag;
+ (void)PBArrayAdd_currentUin;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_videoQualityLevel;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)liveTaskId;
- (void)setLiveTaskId:(unsigned long long)arg1;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)videoQualityLevelDesc;
- (void)setVideoQualityLevelDesc:(id)arg1;
- (unsigned int)settingTime;
- (void)setSettingTime:(unsigned int)arg1;
- (unsigned int)cdnQualityTag;
- (void)setCdnQualityTag:(unsigned int)arg1;
- (unsigned long long)currentUin;
- (void)setCurrentUin:(unsigned long long)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (unsigned int)videoQualityLevel;
- (void)setVideoQualityLevel:(unsigned int)arg1;
- (void).cxx_destruct;
@end
