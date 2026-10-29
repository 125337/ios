@interface TPSlicePlayer : TPAVPlayer <TPAVPlayerDelegate>
{
    BOOL needToCacheNext; // +0x8
    BOOL isPlayInPIP; // +0x9
    BOOL _needToNotifySeekCompleteAfterPrepared; // +0xa
    BOOL _needToSwitchPlayerAfterPrepared; // +0xb
    BOOL _isPausedByUser; // +0xc
    BOOL _isCachingNext; // +0xd
    long long _currentClipIndex; // +0x10
    TPPlayerLayerViewContainer * _containerView; // +0x18
    long long _playOrder; // +0x20
    double _VROutputInterval; // +0x28
    TPPlayerVideo * _video; // +0x30
    TPSlicePlayer * _nextPlayer; // +0x38
    TPPlayerLogContext * _log; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)updateContext:(id)arg1;
- (void)loadVideo:(id)arg1;
- (void)updateVideo:(id)arg1;
- (long long)totalBufferedDuration;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (void)startOutputFrame:(double)arg1;
- (void)playNext;
- (void)cacheNext;
- (void)cachePlayerWithOrder:(unsigned long long)arg1 video:(id)arg2 autoSwitchPlayer:(BOOL)arg3 needToNotifySeekComplete:(BOOL)arg4;
- (id)assemblePlayerWithOrder:(unsigned long long)arg1 autoSwitchPlayer:(BOOL)arg2 needToNotifySeekComplete:(BOOL)arg3 previousPlayer:(id)arg4;
- (void)jumpToSlice:(long long)arg1 offsetPosition:(long long)arg2 withSeekMode:(long long)arg3;
- (BOOL)needToCacheNext;
- (void)switchToNextPlayer;
- (void)setContainerView:(id)arg1;
- (long long)currentClipIndex;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 seekCompleted:(BOOL)arg2;
- (void)player:(id)arg1 airplayDidActive:(BOOL)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 onVideoFrame:(__CVBuffer *)arg2;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(CGSize)arg2;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)setCurrentClipIndex:(long long)arg1;
- (BOOL)isPlayInPIP;
- (void)setIsPlayInPIP:(BOOL)arg1;
- (id)containerView;
- (long long)playOrder;
- (void)setPlayOrder:(long long)arg1;
- (double)VROutputInterval;
- (void)setVROutputInterval:(double)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)nextPlayer;
- (void)setNextPlayer:(id)arg1;
- (BOOL)needToNotifySeekCompleteAfterPrepared;
- (void)setNeedToNotifySeekCompleteAfterPrepared:(BOOL)arg1;
- (BOOL)needToSwitchPlayerAfterPrepared;
- (void)setNeedToSwitchPlayerAfterPrepared:(BOOL)arg1;
- (BOOL)isPausedByUser;
- (void)setIsPausedByUser:(BOOL)arg1;
- (BOOL)isCachingNext;
- (void)setIsCachingNext:(BOOL)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (void).cxx_destruct;
@end
