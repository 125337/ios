@interface MMFinderLiveModeAudioSubItem : MMFinderLiveModeItem <PBCoding>
{
    int _audioSubMode; // +0x20
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_audioSubMode;
+ (void)initialize;
+ (id)getAudioSubModeItems;
- (id)getPBPropertyTable;
- (BOOL)isKtv;
- (int)audioSubMode;
- (void)setAudioSubMode:(int)arg1;
@end
