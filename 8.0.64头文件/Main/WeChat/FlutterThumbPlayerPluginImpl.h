@interface FlutterThumbPlayerPluginImpl : NSObject <FlutterStreamHandler, MMFlutterPlugin, TPFlutterApi>
{
    NSObject<FlutterTextureRegistry> * _registry; // +0x8
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x10
    FlutterEventChannel * _playerEventChannel; // +0x18
    id /* block */ _playerEventSink; // +0x20
    NSMutableDictionary * _playerMap; // +0x28
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)initWithRegistry:(id)arg1 messenger:(id)arg2;
- (id)generatePlayerId;
- (id)createPlayerForMediaType:(long long)arg1 playerId:(id)arg2 playReportDict:(id)arg3;
- (id)tpPlayerCreateMediaType:(long long)arg1 playReportDict:(id)arg2 error:(id *)arg3;
- (id)tpPlayerInitParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMediaInfoParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMediaProtoParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerPreparePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpPlayerPlayPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpPlayerPausePlayerId:(long long)arg1 isManualPause:(BOOL)arg2 error:(id *)arg3;
- (id)tpPlayerSeekParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetPlayRangeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerGetPlayRangePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpPlaySetScaleTypeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMuteParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetStreamTypeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetLoopParams:(id)arg1 error:(id *)arg2;
- (id)tpUpdateDisplaySizeParams:(id)arg1 error:(id *)arg2;
- (id)tpStopPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpReleasePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpAddEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpUpdateEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpRemoveEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpClearEffectPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetProgressListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPreparedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetPlayCompletedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnFirstFrameRenderedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPlayerShowBufferingListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPlayerHideBufferingListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPlayerStateChangeListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpGetVideoSizePlayerId:(long long)arg1 error:(id *)arg2;
- (void)tpPreloadParams:(id)arg1 error:(id *)arg2;
- (id)tpSetPlaySpeedPlayerId:(long long)arg1 ratio:(double)arg2 error:(id *)arg3;
- (id)tpGetPlayerContextPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpGetPlayerStatePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpGetFeedbackInfoPlayerId:(long long)arg1 error:(id *)arg2;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)getPlayerForId:(id)arg1 clear:(BOOL)arg2;
- (id)firstPlayerMatch:(id /* block */)arg1;
- (id)registry;
- (id)messenger;
- (id)playerEventChannel;
- (void)setPlayerEventChannel:(id)arg1;
- (id /* block */)playerEventSink;
- (void)setPlayerEventSink:(id /* block */)arg1;
- (id)playerMap;
- (void)setPlayerMap:(id)arg1;
- (void).cxx_destruct;
@end
