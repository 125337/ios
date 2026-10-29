@interface MiniTaskAnimiatedTransitioningConfig : NSObject
{
    BOOL _isFlutterScenes; // +0x8
    UIImage * _snapshotImage; // +0x10
    UIImage * _iconImage; // +0x18
    UIImage * _frontImage; // +0x20
    MinimizeTaskData * _taskData; // +0x28
    id <MiniTaskTransitionAnimationDelegate> _animationDelegate; // +0x30
    double _fadeAnimateDuration; // +0x38
    CGRect _snapshotFrameToSuperView; // +0x40
    CGRect _snapshotFrameToWindow; // +0x60
}
+ (CGRect)cellRectToSnapshotRect:(CGRect)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)frontImage;
- (void)setFrontImage:(id)arg1;
- (CGRect)snapshotFrameToSuperView;
- (void)setSnapshotFrameToSuperView:(CGRect)arg1;
- (CGRect)snapshotFrameToWindow;
- (void)setSnapshotFrameToWindow:(CGRect)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)animationDelegate;
- (void)setAnimationDelegate:(id)arg1;
- (double)fadeAnimateDuration;
- (void)setFadeAnimateDuration:(double)arg1;
- (BOOL)isFlutterScenes;
- (void)setIsFlutterScenes:(BOOL)arg1;
- (void).cxx_destruct;
@end
