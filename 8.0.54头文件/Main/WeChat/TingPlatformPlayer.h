@interface TingPlatformPlayer : NSObject <TingPlayerStateClient, TingAudioFocus, TingPlayerCoreExtension, TingPlayTaskStateListener, TingFlowPlayerProtocol, TingPlatformPlayerObj>
{
    int _playTaskType; // +0x8
    unsigned int _playerId; // +0xc
    id <TingPlayTask> _playTask; // +0x10
    NSString * _playTaskId; // +0x18
    TingPlatformPlayerCore * _curPlayerCore; // +0x20
    TingPlatformPlayerCore * _playerCore; // +0x28
    TingPlayerAudioModuleHelper * _audioModuleHelper; // +0x30
    id <TingAudioFocusCallback> _audioFocusCallback; // +0x38
    TingPlayerContext * _playingContext; // +0x40
    TingPlayTaskListenerBridge * _listenerBridge; // +0x48
    NSRecursiveLock * _lock; // +0x50
}
+ (id)fromURObj:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)currentItem;
- (void)setEnableBackupItemFetching:(BOOL)arg1;
- (BOOL)hasTapeLoaded;
- (void)loadWithModel:(id)arg1;
- (void)playWithModel:(id)arg1;
- (void)_loadListSource:(id)arg1 index:(unsigned long long)arg2 configuration:(id)arg3;
- (void)setupPlayerWithconfiguration:(id)arg1;
- (void)playWithIndex:(long long)arg1;
- (void)play;
- (void)playCurrentIndex;
- (void)stop;
- (void)stopWithContext:(id)arg1;
- (void)pause;
- (void)passivePause;
- (void)resume;
- (BOOL)canSeek;
- (void)seek:(double)arg1;
- (void)clear;
- (BOOL)canPlayPrevious;
- (BOOL)playPrevious;
- (void)playPreviousOrSeekToStartPos;
- (BOOL)canPlayNext;
- (BOOL)playNext;
- (void)playNextItemOrTape;
- (void)setPlayMode:(int)arg1 saveSettings:(BOOL)arg2;
- (void)setShuffled:(BOOL)arg1 saveSettings:(BOOL)arg2;
- (void)setPlayMode:(int)arg1;
- (int)playMode;
- (BOOL)isPlayModeInteractionEnabled;
- (void)setShuffled:(BOOL)arg1;
- (BOOL)shuffled;
- (id)generateCurrentItem;
- (id)genearetePlayingContext;
- (long long)currentIndex;
- (long long)playListCount;
- (void)updatePlayingItem:(id)arg1;
- (void)setPlayRate:(float)arg1;
- (void)setPlayRate:(double)arg1 needSave:(BOOL)arg2;
- (float)playRate;
- (BOOL)isPlayRateSupported;
- (void)setPreferredAudioQuality:(int)arg1;
- (int)getPreferredAudioQuality;
- (void)setEnableSqQualityOnWwan:(BOOL)arg1;
- (void)refreshMembershipOpenStatusIfNeeded;
- (id)tapeItem;
- (id)currentDisplayElement;
- (BOOL)enableAutoPlayRecommendList;
- (void)setEnableAutoPlayRecommendList:(BOOL)arg1;
- (void)playWithContext:(id)arg1;
- (void)switchToMVContext:(id)arg1;
- (void)refreshPlayList;
- (void)setDisableSyncPlayRecord:(BOOL)arg1;
- (BOOL)checkAndActiveAudioModule;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (int)status;
- (id)playTask;
- (id)playTaskId;
- (id)curPlayerCore;
- (id)playerCore;
- (id)audioModuleHelper;
- (id)listenerBridge;
- (BOOL)isIsolateModule;
- (void)setIsIsolateModule:(BOOL)arg1;
- (BOOL)isDissociative;
- (void)setIsDissociative:(BOOL)arg1;
- (id)currentPlayingInfo;
- (id)reportContext;
- (void)setAudioFocusCallback:(id)arg1;
- (void)_requestFocus:(int)arg1 context:(id)arg2;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)_onPlayerEvent:(int)arg1 item:(id)arg2 msg:(id)arg3;
- (void)performOnMainThread:(id /* block */)arg1;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)_onPlayInfoEvent:(int)arg1 context:(id)arg2 msg:(id)arg3;
- (void)onHeartbeatResponseUpdateWithContext:(id)arg1 extInfo:(id)arg2;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(BOOL)arg3;
- (void)onInactivated:(id)arg1 update:(BOOL)arg2;
- (void)_onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementFrameOut:(id)arg3;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementAvailable:(id)arg3;
- (void)tingPlayerCore:(id)arg1 onDisplayViewMTKViewCreated:(id)arg2;
- (void)onTingItemListenIdAvailable:(id)arg1 item:(id)arg2;
- (void)onServiceChanged:(id)arg1;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onPlayModeChanged;
- (void)onPlayingIndexChanged:(int)arg1;
- (void)handlePlayingContextChanged:(id)arg1;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onPlayTaskEvent:(int)arg1 currentState:(int)arg2 previousState:(int)arg3 message:(id)arg4;
- (void)notifyPlayTaskStatusChaged:(int)arg1 item:(id)arg2 event:(int)arg3 context:(id)arg4;
- (void)notifyPlayTaskEvent:(int)arg1 previousStatus:(int)arg2 currentStatus:(int)arg3 message:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onTingPlayTaskReportAction:(int)arg1 context:(id)arg2;
- (void)logInfo:(id)arg1;
- (void)logError:(id)arg1;
- (id)currentPlayTaskPlayingContext;
- (int)playTaskType;
- (void)setPlayTaskType:(int)arg1;
- (void)setPlayTask:(id)arg1;
- (void)setPlayTaskId:(id)arg1;
- (unsigned int)playerId;
- (void)setPlayerId:(unsigned int)arg1;
- (void)setCurPlayerCore:(id)arg1;
- (void)setPlayerCore:(id)arg1;
- (void)setAudioModuleHelper:(id)arg1;
- (id)audioFocusCallback;
- (id)playingContext;
- (void)setPlayingContext:(id)arg1;
- (void)setListenerBridge:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

