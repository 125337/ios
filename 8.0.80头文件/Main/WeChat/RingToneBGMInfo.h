@interface RingToneBGMInfo : NSObject
{
    NSString * _songName; // +0x8
    NSString * _singerName; // +0x10
    NSString * _manualSongName; // +0x18
    NSString * _manualSingerName; // +0x20
}
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)singerName;
- (void)setSingerName:(id)arg1;
- (id)manualSongName;
- (void)setManualSongName:(id)arg1;
- (id)manualSingerName;
- (void)setManualSingerName:(id)arg1;
- (void).cxx_destruct;
@end
