@interface WCFinderLiveStarterLiveModeVideoSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>
{
    BOOL _isPureAudioMode; // +0x70
    BOOL _disableVideoLandscape; // +0x71
    unsigned long long _videoSubType; // +0x78
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_videoSubType;
+ (void)PBArrayAdd_isPureAudioMode;
+ (void)PBArrayAdd_redDotPathOuter;
+ (void)PBArrayAdd_redDotPathInner;
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
