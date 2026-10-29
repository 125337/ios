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
    BOOL _isStartByProgressAnchor; // +0x10
    BOOL _hasShownProgressAnchorTips; // +0x11
    BOOL _hasShownProgressAnchorThisPlaySession; // +0x12
    UIColor * _thumbnailBackgroundColor; // +0x18
    unsigned long long _maxBitRate; // +0x20
    unsigned long long _startPlayTimestampInMS; // +0x28
    double _playbackRate; // +0x30
    NSNumber * _currentStartPlayPosition; // +0x38
    NSNumber * _currentPlayHistoryVersion; // +0x40
    double _playPositionBeforeStopPlay; // +0x48
    NSDictionary * _fpsInfo; // +0x50
    NSNumber * _scrollFeedTimestamp; // +0x58
    NSNumber * _lastDragProgressbarTimestamp; // +0x60
    WCPlayerPlaybackInfo * _currentPlayBackInfo; // +0x68
    double _historyRealPlayTime; // +0x70
    double _progressAnchorPercent; // +0x78
}
- (double)realPlayTime;
- (double)currentPlayPercent;
- (double)videoDurationInS;
- (BOOL)hideErrorTipsView;
- (void)setHideErrorTipsView:(BOOL)arg1;
- (BOOL)hideOriginalContactView;
- (void)setHideOriginalContactView:(BOOL)arg1;
- (id)thumbnailBackgroundColor;
- (void)setThumbnailBackgroundColor:(id)arg1;
- (BOOL)forceUseSystemPlayer;
- (void)setForceUseSystemPlayer:(BOOL)arg1;
- (unsigned long long)maxBitRate;
- (void)setMaxBitRate:(unsigned long long)arg1;
- (unsigned long long)startPlayTimestampInMS;
- (void)setStartPlayTimestampInMS:(unsigned long long)arg1;
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
- (double)historyRealPlayTime;
- (void)setHistoryRealPlayTime:(double)arg1;
- (BOOL)isStartByProgressAnchor;
- (void)setIsStartByProgressAnchor:(BOOL)arg1;
- (BOOL)hasShownProgressAnchorTips;
- (void)setHasShownProgressAnchorTips:(BOOL)arg1;
- (double)progressAnchorPercent;
- (void)setProgressAnchorPercent:(double)arg1;
- (BOOL)hasShownProgressAnchorThisPlaySession;
- (void)setHasShownProgressAnchorThisPlaySession:(BOOL)arg1;
- (void).cxx_destruct;
@end
