@interface WCFinderFeedVideoCellViewModel : NSObject
{
    BOOL _hideErrorTipsView; // +0x8
    BOOL _hideOriginalContactView; // +0x9
    BOOL _forceUseSystemPlayer; // +0xa
    BOOL _forceResumePlaying; // +0xb
    BOOL _ignoreGlobalResumePlaying; // +0xc
    BOOL _isPauseBeforeStopPlay; // +0xd
    BOOL _downloadSuccessful; // +0xe
    unsigned long long _maxBitRate; // +0x10
    double _playbackRate; // +0x18
    double _playPositionBeforeStopPlay; // +0x20
}
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
- (double)playPositionBeforeStopPlay;
- (void)setPlayPositionBeforeStopPlay:(double)arg1;
- (BOOL)downloadSuccessful;
- (void)setDownloadSuccessful:(BOOL)arg1;
@end

