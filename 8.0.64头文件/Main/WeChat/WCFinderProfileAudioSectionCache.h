@interface WCFinderProfileAudioSectionCache : NSObject <PBCoding>
{
    NSArray * _audios; // +0x8
    long long _audioCount; // +0x10
    MMListenCategoryItem * _audioCategory; // +0x18
}
+ (void)PBArrayAdd_audios;
+ (void)PBArrayAdd_audioCount;
+ (void)PBArrayAdd_audioCategory;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)audios;
- (void)setAudios:(id)arg1;
- (long long)audioCount;
- (void)setAudioCount:(long long)arg1;
- (id)audioCategory;
- (void)setAudioCategory:(id)arg1;
- (void).cxx_destruct;
@end
