@interface TingMusicNowPlay : TingNowPlayingInfoCenter
{
    id <TingFlowPlayerProtocol> _player; // +0x8
}
- (id)activePlayer;
- (id)moduleId;
- (id)nowPlayingInfoWithPlayingItem:(id)arg1 player:(id)arg2;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end
