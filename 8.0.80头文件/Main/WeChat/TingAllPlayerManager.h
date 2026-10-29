@interface TingAllPlayerManager : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver>
{
    BOOL _isHeadsetConnected; // +0x8
    TingMusicPlayerManager * _tingMusicPlayer; // +0x10
    id <TingPlayApp> _dissociativePlayer; // +0x18
    id <TingPlayApp> _tingMusicChatPlayer; // +0x20
    NSHashTable * _playerList; // +0x28
    long long _generatedPlayerCount; // +0x30
    NSMutableDictionary * _nowPlayingInfo; // +0x38
    NSMutableDictionary * _oncePlayerCompletionMap; // +0x40
}
- (id)init;
- (void)callOncePlayerCompletion:(id)arg1 event:(int)arg2;
- (id)standalonePlayerMap;
- (id)playerList;
- (id)reportManager;
- (id)createDissociativePlayerIfNeed;
- (id)createIsolateDissociativePlayerWithIdentifier:(id)arg1;
- (id)createPlayAppWithIdentifier:(int)arg1 makeActive:(BOOL)arg2;
- (long long)generatePlayerId;
- (void)clearAllPlayer;
- (void)stopDeactivePlayers;
- (void)stopDissociativePlayer;
- (void)reloadAllPlayers;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)arg1;
- (BOOL)checkIfHeadsetConnected;
- (id)musicChatPlayer;
- (void)playOnce:(id)arg1 scene:(int)arg2 isAbandonFocusForce:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)tingMusicPlayer;
- (void)setTingMusicPlayer:(id)arg1;
- (id)dissociativePlayer;
- (void)setDissociativePlayer:(id)arg1;
- (id)tingMusicChatPlayer;
- (void)setTingMusicChatPlayer:(id)arg1;
- (void)setPlayerList:(id)arg1;
- (long long)generatedPlayerCount;
- (void)setGeneratedPlayerCount:(long long)arg1;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (BOOL)isHeadsetConnected;
- (void)setIsHeadsetConnected:(BOOL)arg1;
- (id)oncePlayerCompletionMap;
- (void)setOncePlayerCompletionMap:(id)arg1;
- (void).cxx_destruct;
@end
