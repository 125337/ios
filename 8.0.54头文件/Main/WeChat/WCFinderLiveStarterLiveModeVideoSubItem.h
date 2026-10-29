@interface WCFinderLiveStarterLiveModeVideoSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>
{
    BOOL _isPureAudioMode; // +0x68
    BOOL _disableVideoLandscape; // +0x69
    unsigned long long _videoSubType; // +0x70
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_videoSubType;
+ (void)PBArrayAdd_isPureAudioMode;
+ (void)PBArrayAdd_redDotPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isLandscapSubItem;
- (unsigned long long)videoSubType;
- (void)setVideoSubType:(unsigned long long)arg1;
- (BOOL)isPureAudioMode;
- (void)setIsPureAudioMode:(BOOL)arg1;
- (BOOL)disableVideoLandscape;
- (void)setDisableVideoLandscape:(BOOL)arg1;
@end

