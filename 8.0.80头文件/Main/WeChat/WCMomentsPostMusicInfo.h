@interface WCMomentsPostMusicInfo : NSObject
{
    long long _musicEditSource; // +0x8
    NSString * _songName; // +0x10
    NSString * _singerName; // +0x18
    NSString * _musicId; // +0x20
    long long _musicScene; // +0x28
    NSString * _musicType; // +0x30
}
- (id)toJSONString;
- (long long)musicEditSource;
- (void)setMusicEditSource:(long long)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singerName;
- (void)setSingerName:(id)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (long long)musicScene;
- (void)setMusicScene:(long long)arg1;
- (id)musicType;
- (void)setMusicType:(id)arg1;
- (void).cxx_destruct;
@end
