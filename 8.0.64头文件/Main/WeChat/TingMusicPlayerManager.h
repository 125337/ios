@interface TingMusicPlayerManager : NSObject
{
    id <TingFlowPlayerProtocol> _globalPlayer; // +0x8
    id <TingFlowPlayerProtocol> _activePlayer; // +0x10
    id <TingFlowPlayerProtocol> _restoredPlayer; // +0x18
}
- (id)init;
- (void)addPlayTaskControllerListener:(id)arg1;
- (void)removePlayTaskControllerListener:(id)arg1;
- (id)listeners;
- (void)setListeners:(id)arg1;
- (void)onPlayerChanged;
- (id)playingTask;
- (id)globalPlayer;
- (void)makePlayerActive:(id)arg1;
- (void)restoreInterruptedPlayer:(id)arg1;
- (id)popRestorePlayer;
- (void)makeIsolateDissociativePlayerActive:(id)arg1;
- (void)flushWatiingNotifyPlayer;
- (void)appWillEnterForeground;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)flowPlayer:(id)arg1 willChangeFromCurrentSource:(id)arg2 targetSource:(id)arg3;
- (void)flowPlayer:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)setGlobalPlayer:(id)arg1;
- (id)activePlayer;
- (void)setActivePlayer:(id)arg1;
- (id)restoredPlayer;
- (void)setRestoredPlayer:(id)arg1;
- (void).cxx_destruct;
@end
