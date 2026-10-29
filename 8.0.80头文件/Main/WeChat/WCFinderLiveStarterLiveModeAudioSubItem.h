@interface WCFinderLiveStarterLiveModeAudioSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>
{
    unsigned long long _audioSubType; // +0x70
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_audioSubType;
+ (void)PBArrayAdd_redDotPathOuter;
+ (void)PBArrayAdd_redDotPathInner;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)audioSubType;
- (void)setAudioSubType:(unsigned long long)arg1;
@end
