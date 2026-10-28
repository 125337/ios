@interface TingPlatformPlayerLyricListner : NSObject <TingLyricDataServiceListener>
{
    id <TingFlowPlayerProtocol> _player; // +0x8
}
- (void)onLyricTextChange:(id)arg1 lyricItem:(id)arg2;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end
