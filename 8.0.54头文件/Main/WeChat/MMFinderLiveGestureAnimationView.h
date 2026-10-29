@interface MMFinderLiveGestureAnimationView : UIView <PAGViewListener>
{
    unsigned int _audioId; // +0x8
    id <MMFinderLiveGestureAnimationViewDelegate> _delegate; // +0x10
    NSString * _instanceId; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    PAGView * _pagView; // +0x28
    MMLiveStrokedLabel * _label; // +0x30
    NSString * _soundPath; // +0x38
    double _labelAppearTime; // +0x40
    double _labelDisappearTime; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithTaskId:(id)arg1 audioId:(unsigned int)arg2;
- (BOOL)prepareForGenericDisplayWithGesture:(id)arg1 mute:(BOOL)arg2 instanceId:(id)arg3;
- (BOOL)prepareForGiftingDisplayWithGesture:(id)arg1 text:(id)arg2 mute:(BOOL)arg3 instanceId:(id)arg4;
- (void)play;
- (void)layoutSubviews;
- (void)onAnimationEnd:(id)arg1;
- (void)playSoundEffect;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)audioId;
- (void)setAudioId:(unsigned int)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)soundPath;
- (void)setSoundPath:(id)arg1;
- (double)labelAppearTime;
- (void)setLabelAppearTime:(double)arg1;
- (double)labelDisappearTime;
- (void)setLabelDisappearTime:(double)arg1;
- (void).cxx_destruct;
@end

