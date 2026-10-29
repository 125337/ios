@interface TingRadioChannelNowPlay : TingNowPlayingInfoCenter
{
    id <TingFlowPlayerProtocol> _player; // +0x8
}
- (id)activePlayer;
- (id)moduleId;
- (id)nowPlayingInfoWithPlayingItem:(id)arg1 player:(id)arg2;
- (void)registerCommandCenterActions;
- (long long)onNextChannelCommand:(id)arg1;
- (long long)onPrevChannelCommand:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end

