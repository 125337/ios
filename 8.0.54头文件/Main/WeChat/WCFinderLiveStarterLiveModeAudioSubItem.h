@interface WCFinderLiveStarterLiveModeAudioSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>
{
    unsigned long long _audioSubType; // +0x68
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_audioSubType;
+ (void)PBArrayAdd_redDotPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)audioSubType;
- (void)setAudioSubType:(unsigned long long)arg1;
@end

