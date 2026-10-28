@interface MMFinderLiveGestureAnimationContainerView : UIView <MMFinderLiveGestureAnimationViewDelegate>
{
    unsigned int _audioId; // +0x8
    id <MMFinderLiveGestureAnimationContainerViewDelegate> _delegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    NSMutableDictionary * _playingInstances; // +0x20
}
- (id)initWithTaskId:(id)arg1 audioId:(unsigned int)arg2;
- (BOOL)addGestureAnimationPagForGestureId:(id)arg1 instanceId:(id)arg2 referenceAspectRatio:(double)arg3 translationX:(double)arg4 translationY:(double)arg5 rotation:(double)arg6 scale:(double)arg7 giftSenderNickname:(id)arg8;
- (void)onGestureAnimationViewWillBeginPlaying:(id)arg1;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)audioId;
- (void)setAudioId:(unsigned int)arg1;
- (id)playingInstances;
- (void)setPlayingInstances:(id)arg1;
- (void).cxx_destruct;
@end
