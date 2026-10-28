@interface TingPlayerManager : NSObject <TingPlayTaskController, IRemoteControlCheckExt, MMImageLoaderObserver>
{
    BOOL _isHeadsetConnected; // +0x8
    id <TingFlowPlayerProtocol> _globalPlayer; // +0x10
    id <TingFlowPlayerProtocol> _activePlayer; // +0x18
    id <TingFlowPlayerProtocol> _restoredPlayer; // +0x20
    id <TingFlowPlayerProtocol> _dissociativePlayer; // +0x28
    id <TingFlowPlayerProtocol> _globalMusicChatPlayer; // +0x30
    NSHashTable * _playerList; // +0x38
    long long _generatedPlayerCount; // +0x40
    NSMutableDictionary * _nowPlayingInfo; // +0x48
    NSMutableDictionary * _oncePlayerCompletionMap; // +0x50
}
- (id)playingTask;
- (id)standalonePlayerMap;
- (id)createTask:(id)arg1;
- (id)createStandaloneTask:(id)arg1;
- (BOOL)destroyStandaloneTask:(id)arg1;
- (BOOL)makeTaskGlobal:(id)arg1;
- (void)addPlayTaskControllerListener:(id)arg1;
- (void)removePlayTaskControllerListener:(id)arg1;
- (void)onPlayerChanged;
- (id)listeners;
- (void)setListeners:(id)arg1;
- (id)init;
- (void)callOncePlayerCompletion:(id)arg1 event:(int)arg2;
- (id)playerList;
- (id)reportManager;
- (Class)defaultPlayerClass;
- (id)globalPlayer;
- (void)createMusicChatPlayer;
- (id)musicChatPlayer;
- (id)createDissociativePlayerIfNeed;
- (id)createIsolateDissociativePlayer;
- (void)makeIsolateDissociativePlayerActive:(id)arg1;
- (id)createPlayerWithClass:(Class)arg1 makeActive:(BOOL)arg2;
- (void)makePlayerActive:(id)arg1;
- (long long)generatePlayerId;
- (void)flushWatiingNotifyPlayer;
- (void)clearAllPlayer;
- (void)stopDeactivePlayers;
- (void)stopDissociativePlayer;
- (void)restoreInterruptedPlayer:(id)arg1;
- (id)popRestorePlayer;
- (void)reloadAllPlayers;
- (void)playOnce:(id)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)playOnce:(id)arg1 scene:(int)arg2 isAbandonFocusForce:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)arg1;
- (BOOL)checkIfHeadsetConnected;
- (void)appWillEnterForeground;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)flowPlayer:(id)arg1 willChangeFromCurrentSource:(id)arg2 targetSource:(id)arg3;
- (void)flowPlayer:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)setGlobalPlayer:(id)arg1;
- (id)activePlayer;
- (void)setActivePlayer:(id)arg1;
- (id)restoredPlayer;
- (void)setRestoredPlayer:(id)arg1;
- (id)dissociativePlayer;
- (void)setDissociativePlayer:(id)arg1;
- (id)globalMusicChatPlayer;
- (void)setGlobalMusicChatPlayer:(id)arg1;
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
