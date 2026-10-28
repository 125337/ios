@interface MMFinderLiveModeVideoSubItem : MMFinderLiveModeItem <PBCoding>
{
    BOOL _isPureAudioMode; // +0x20
    BOOL _disableVideoLandscape; // +0x21
    int _videoSubMode; // +0x24
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
