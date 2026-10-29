@interface MMFinderLiveModeVideoSubItem : MMFinderLiveModeItem <PBCoding>
{
    BOOL _isPureAudioMode; // +0x28
    BOOL _disableVideoLandscape; // +0x29
    int _videoSubMode; // +0x2c
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_videoSubMode;
+ (void)PBArrayAdd_isPureAudioMode;
+ (void)PBArrayAdd_disableVideoLandscape;
+ (void)initialize;
+ (id)getVideoSubModeItems;
+ (id)getVideoSubModeItem:(BOOL)arg1;
- (id)getPBPropertyTable;
- (BOOL)isPortrait;
- (int)videoSubMode;
- (void)setVideoSubMode:(int)arg1;
- (BOOL)isPureAudioMode;
- (void)setIsPureAudioMode:(BOOL)arg1;
- (BOOL)disableVideoLandscape;
- (void)setDisableVideoLandscape:(BOOL)arg1;
@end
