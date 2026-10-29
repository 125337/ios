@interface WCFinderProfileOverviewMusicCache : NSObject <PBCoding>
{
    NSArray * _playList; // +0x8
    MMListenCategoryItem * _musicCategory; // +0x10
    NSArray * _musicList; // +0x18
    long long _musicCnt; // +0x20
}
+ (void)PBArrayAdd_playList;
+ (void)PBArrayAdd_musicCategory;
+ (void)PBArrayAdd_musicList;
+ (void)PBArrayAdd_musicCnt;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)playList;
- (void)setPlayList:(id)arg1;
- (id)musicCategory;
- (void)setMusicCategory:(id)arg1;
- (id)musicList;
- (void)setMusicList:(id)arg1;
- (long long)musicCnt;
- (void)setMusicCnt:(long long)arg1;
- (void).cxx_destruct;
@end

