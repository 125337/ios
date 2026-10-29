@interface MiniTaskTransitionContext : NSObject
{
    BOOL _isPresent; // +0x8
    BOOL _isFromFlutterScenes; // +0x9
    unsigned int _fromSource; // +0xc
    unsigned int _animationType; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    UIImage * _snapshotImage; // +0x20
    UIImage * _iconImage; // +0x28
    UIImage * _dismissSnapshotImage; // +0x30
    UIImage * _frontImage; // +0x38
    id /* block */ _snapshotFrameGetter; // +0x40
    id /* block */ _presentEndCallback; // +0x48
    id /* block */ _dimissBeginCallback; // +0x50
    id /* block */ _dimissEndCallback; // +0x58
    MiniTaskEdgeGestureHandler * _presentGestureHandler; // +0x60
    id <MiniTaskTransitionAnimationDelegate> _animationDelegate; // +0x68
    double _fadeAnimateDuration; // +0x70
    MultiTaskPageActionInfo * _pageActionInfo; // +0x78
    CGRect _snapshotFrameToSuperView; // +0x80
    CGRect _snapshotFrameToWindow; // +0xa0
}
- (void)tryUpdateSnapshotFrame;
- (void)onPresentTransitionEnd:(BOOL)arg1;
- (void)onDismissTransitionBegin:(unsigned int)arg1;
- (void)onDismissTransitionEnd:(unsigned int)arg1 finish:(BOOL)arg2;
- (unsigned int)fromSource;
- (void)setFromSource:(unsigned int)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (CGRect)snapshotFrameToSuperView;
- (void)setSnapshotFrameToSuperView:(CGRect)arg1;
- (CGRect)snapshotFrameToWindow;
- (void)setSnapshotFrameToWindow:(CGRect)arg1;
- (id)dismissSnapshotImage;
- (void)setDismissSnapshotImage:(id)arg1;
- (id)frontImage;
- (void)setFrontImage:(id)arg1;
- (id /* block */)snapshotFrameGetter;
- (void)setSnapshotFrameGetter:(id /* block */)arg1;
- (id /* block */)presentEndCallback;
- (void)setPresentEndCallback:(id /* block */)arg1;
- (id /* block */)dimissBeginCallback;
- (void)setDimissBeginCallback:(id /* block */)arg1;
- (id /* block */)dimissEndCallback;
- (void)setDimissEndCallback:(id /* block */)arg1;
- (id)presentGestureHandler;
- (void)setPresentGestureHandler:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (id)animationDelegate;
- (void)setAnimationDelegate:(id)arg1;
- (double)fadeAnimateDuration;
- (void)setFadeAnimateDuration:(double)arg1;
- (unsigned int)animationType;
- (void)setAnimationType:(unsigned int)arg1;
- (id)pageActionInfo;
- (void)setPageActionInfo:(id)arg1;
- (BOOL)isFromFlutterScenes;
- (void)setIsFromFlutterScenes:(BOOL)arg1;
- (void).cxx_destruct;
@end

