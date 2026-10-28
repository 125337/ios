@interface WCFinderFeedVideoCellViewModel : NSObject
{
    BOOL _hideErrorTipsView; // +0x8
    BOOL _hideOriginalContactView; // +0x9
    BOOL _forceUseSystemPlayer; // +0xa
    BOOL _forceResumePlaying; // +0xb
    BOOL _ignoreGlobalResumePlaying; // +0xc
    BOOL _isPauseBeforeStopPlay; // +0xd
    BOOL _downloadSuccessful; // +0xe
    BOOL _notifyOthersAudioModule; // +0xf
    unsigned long long _maxBitRate; // +0x10
    double _playbackRate; // +0x18
    NSNumber * _currentStartPlayPosition; // +0x20
    NSNumber * _currentPlayHistoryVersion; // +0x28
    double _playPositionBeforeStopPlay; // +0x30
    NSDictionary * _fpsInfo; // +0x38
    NSNumber * _scrollFeedTimestamp; // +0x40
    NSNumber * _lastDragProgressbarTimestamp; // +0x48
    WCPlayerPlaybackInfo * _currentPlayBackInfo; // +0x50
}
- (double)realPlayTime;
- (BOOL)hideErrorTipsView;
- (void)setHideErrorTipsView:(BOOL)arg1;
- (BOOL)hideOriginalContactView;
- (void)setHideOriginalContactView:(BOOL)arg1;
- (BOOL)forceUseSystemPlayer;
- (void)setForceUseSystemPlayer:(BOOL)arg1;
- (unsigned long long)maxBitRate;
- (void)setMaxBitRate:(unsigned long long)arg1;
- (BOOL)forceResumePlaying;
- (void)setForceResumePlaying:(BOOL)arg1;
- (BOOL)ignoreGlobalResumePlaying;
- (void)setIgnoreGlobalResumePlaying:(BOOL)arg1;
- (BOOL)isPauseBeforeStopPlay;
- (void)setIsPauseBeforeStopPlay:(BOOL)arg1;
- (double)playbackRate;
- (void)setPlaybackRate:(double)arg1;
- (id)currentStartPlayPosition;
- (void)setCurrentStartPlayPosition:(id)arg1;
- (id)currentPlayHistoryVersion;
- (void)setCurrentPlayHistoryVersion:(id)arg1;
- (double)playPositionBeforeStopPlay;
- (void)setPlayPositionBeforeStopPlay:(double)arg1;
- (BOOL)downloadSuccessful;
- (void)setDownloadSuccessful:(BOOL)arg1;
- (BOOL)notifyOthersAudioModule;
- (void)setNotifyOthersAudioModule:(BOOL)arg1;
- (id)fpsInfo;
- (void)setFpsInfo:(id)arg1;
- (id)scrollFeedTimestamp;
- (void)setScrollFeedTimestamp:(id)arg1;
- (id)lastDragProgressbarTimestamp;
- (void)setLastDragProgressbarTimestamp:(id)arg1;
- (id)currentPlayBackInfo;
- (void)setCurrentPlayBackInfo:(id)arg1;
- (void).cxx_destruct;
@end
