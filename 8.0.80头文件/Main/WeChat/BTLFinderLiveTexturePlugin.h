@interface BTLFinderLiveTexturePlugin : NSObject <BizFinderLivePlayersManager, MMFlutterPlugin>
{
    NSMutableDictionary * _playerItemsMap; // +0x8
    NSObject<FlutterTextureRegistry> * _registry; // +0x10
    BizFinderLivePlayersCallbackApi * _callback; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)createPlayerFinderLivePlayInfo:(id)arg1 autoPlay:(BOOL)arg2 playOffset:(long long)arg3 completion:(id /* block */)arg4;
- (void)destroyPlayerId:(long long)arg1 error:(id *)arg2;
- (void)playPlayerId:(long long)arg1 error:(id *)arg2;
- (void)stopPlayerId:(long long)arg1 error:(id *)arg2;
- (id)playerItemsMap;
- (void)setPlayerItemsMap:(id)arg1;
- (id)registry;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
@end
