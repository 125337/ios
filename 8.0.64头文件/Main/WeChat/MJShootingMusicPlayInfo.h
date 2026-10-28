@interface MJShootingMusicPlayInfo : NSObject <EditVideoBGMPlayerData>
{
    NSString * _musicUrl; // +0x8
    unsigned long long _songDurationInMs; // +0x10
    unsigned long long _musicStartTimeInMs; // +0x18
}
- (id)musicUrl;
- (void)setMusicUrl:(id)arg1;
- (unsigned long long)songDurationInMs;
- (void)setSongDurationInMs:(unsigned long long)arg1;
- (unsigned long long)musicStartTimeInMs;
- (void)setMusicStartTimeInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
