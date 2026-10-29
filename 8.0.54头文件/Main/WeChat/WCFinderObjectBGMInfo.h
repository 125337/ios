@interface WCFinderObjectBGMInfo : NSObject <PBCoding>
{
    unsigned int _hasBgm; // +0x8
    WCFinderMusicInfoModel * _musicInfo; // +0x10
    NSString * _groupId; // +0x18
    unsigned long long _postMusicType; // +0x20
}
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_hasBgm;
+ (void)PBArrayAdd_postMusicType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithEditMusicInfo:(id)arg1;
- (id)initWithFinderObjectBGMInfo:(id)arg1;
- (id)genFinderObjectBGMInfo;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned int)hasBgm;
- (void)setHasBgm:(unsigned int)arg1;
- (unsigned long long)postMusicType;
- (void)setPostMusicType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

