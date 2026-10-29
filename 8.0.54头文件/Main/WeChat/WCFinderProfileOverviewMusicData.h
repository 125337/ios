@interface WCFinderProfileOverviewMusicData : NSObject
{
    NSArray * _playList; // +0x8
    MMListenCategoryItem * _musicCategory; // +0x10
    NSArray * _musicList; // +0x18
}
- (id)playList;
- (void)setPlayList:(id)arg1;
- (id)musicCategory;
- (void)setMusicCategory:(id)arg1;
- (id)musicList;
- (void)setMusicList:(id)arg1;
- (void).cxx_destruct;
@end

