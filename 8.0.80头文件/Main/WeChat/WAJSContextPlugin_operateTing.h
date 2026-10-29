@interface WAJSContextPlugin_operateTing : WAJSContextPluginBase <TingPlayAppNotification, IWAJSContextPlugin_operateMusic>
{
    BOOL _useIndependentPlayApp; // +0x8
    BOOL _hasDisabledMinimize; // +0x9
    NSString * _curClientId; // +0x10
    NSMutableSet * _setMusicWhiteListAppid; // +0x18
    id <TingPlayApp> _weAppPlayApp; // +0x20
    NSArray * _cachedSentences; // +0x28
    NSString * _cachedSentencesListenId; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)cleanupWeAppSessionState;
- (void)applyMinimizeDisable:(BOOL)arg1;
- (void)playMusic:(id)arg1 referrer:(id)arg2;
- (void)playArticle:(id)arg1 referrer:(id)arg2;
- (void)fetchAsrParagraphForListenId:(id)arg1 customModel:(id)arg2;
- (BOOL)isOwnPlayAppType:(int)arg1;
- (void)startOnIndependentPlayApp:(id)arg1 launchOptions:(id)arg2 customModel:(id)arg3;
- (BOOL)canAccessCurPlayer;
- (BOOL)canAccessWeAppPlayApp;
- (BOOL)canAccessCurSession;
- (id)currentSessionPlayer;
- (BOOL)curPlayerTaskActive;
- (BOOL)curPlayerIsPlaying;
- (BOOL)isWeAppAudioPlaying;
- (BOOL)isWeAppAudioPlayingWithClientId:(id)arg1;
- (id)currentPlayingInfo;
- (id)currentPlayingPlayerState;
- (BOOL)operateMusic:(id)arg1 param:(id)arg2;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (void)pauseMusic;
- (void)stopMusic;
- (void)resumeMusic;
- (void)seekPlay:(float)arg1;
- (BOOL)setShutdown:(id)arg1 minutes:(long long)arg2;
- (double)getDuration;
- (id)getCurrentMusicId;
- (BOOL)monopolizeMusicPlayer;
- (void)setMusicMinimizationViewVisibleIfOccupied:(BOOL)arg1;
- (id)generateMusicId:(id)arg1 appTask:(id)arg2;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)preemptSessionIfOwnedByOthers:(id)arg1;
- (void)playApp:(id)arg1 onPlayingContextUpdated:(id)arg2;
- (void)playApp:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3 onEvent:(int)arg4 withContext:(id)arg5 withEventContext:(id)arg6 error:(id)arg7;
- (void)onTingRecieveNextTrackControl;
- (void)onTingRecievePreTrackControl;
- (void)initConfigedMusicAppId;
- (id)curClientId;
- (void)setCurClientId:(id)arg1;
- (id)setMusicWhiteListAppid;
- (void)setSetMusicWhiteListAppid:(id)arg1;
- (id)weAppPlayApp;
- (void)setWeAppPlayApp:(id)arg1;
- (BOOL)useIndependentPlayApp;
- (void)setUseIndependentPlayApp:(BOOL)arg1;
- (BOOL)hasDisabledMinimize;
- (void)setHasDisabledMinimize:(BOOL)arg1;
- (id)cachedSentences;
- (void)setCachedSentences:(id)arg1;
- (id)cachedSentencesListenId;
- (void)setCachedSentencesListenId:(id)arg1;
- (void).cxx_destruct;
@end
