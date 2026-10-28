@interface TingCustomNowPlay : TingNowPlayingInfoCenter
{
    id <TingFlowPlayerProtocol> _player; // +0x8
    id <TingPlayAppConfig> _playAppConfig; // +0x10
}
- (id)activePlayer;
- (id)moduleId;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (void).cxx_destruct;
@end
