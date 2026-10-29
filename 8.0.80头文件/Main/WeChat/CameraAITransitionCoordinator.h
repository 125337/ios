@interface CameraAITransitionCoordinator : NSObject
{
    BOOL _clickPreviewHoldCompleted; // +0x8
    BOOL _halfScreenShown; // +0x9
    long long _state; // +0x10
    unsigned long long _currentRequestId; // +0x18
    CameraAIContentView * _contentView; // +0x20
    unsigned long long _currentTransitionToken; // +0x28
    NSMutableArray * _pendingClickPreviewHoldBlocks; // +0x30
}
- (id)initWithContentView:(id)arg1;
- (void)flushPendingClickPreviewHoldBlocksForRequestId:(unsigned long long)arg1;
- (CGRect)centeredClickPreviewTargetFrameInContentView:(id)arg1 baseFrame:(CGRect)arg2;
- (void)startClickProcessingWithRequestId:(unsigned long long)arg1 transitionToken:(unsigned long long)arg2;
- (void)beginClickPreviewTransitionWithRequestId:(unsigned long long)arg1 cameraFrame:(CGRect)arg2 capturedImage:(id)arg3;
- (void)markClickPreviewExitingWithRequestId:(unsigned long long)arg1;
- (void)performAfterClickPreviewHoldForRequestId:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)handleClickHalfScreenWillAppearWithRequestId:(unsigned long long)arg1;
- (void)handleClickHalfScreenDidAppearWithRequestId:(unsigned long long)arg1;
- (void)handleClickHalfScreenShownWithRequestId:(unsigned long long)arg1;
- (void)updateClickCapturedImage:(id)arg1 requestId:(unsigned long long)arg2;
- (void)beginLongPressTransitionWithRequestId:(unsigned long long)arg1 cameraFrame:(CGRect)arg2 originView:(id)arg3 capturedImage:(id)arg4;
- (void)transitionLongPressToRecordingWithRequestId:(unsigned long long)arg1;
- (void)transitionLongPressToProcessingWithRequestId:(unsigned long long)arg1;
- (void)markLongPressExitingWithRequestId:(unsigned long long)arg1;
- (void)handleLongPressHalfScreenWillAppearWithRequestId:(unsigned long long)arg1;
- (void)handleLongPressHalfScreenDidAppearWithRequestId:(unsigned long long)arg1;
- (void)handleLongPressHalfScreenShownWithRequestId:(unsigned long long)arg1;
- (void)updateLongPressCapturedImage:(id)arg1 requestId:(unsigned long long)arg2;
- (void)resetTransition;
- (void)showLoadingForCurrentClickRequestId:(unsigned long long)arg1;
- (void)showLoadingForCurrentLongPressRequestId:(unsigned long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (unsigned long long)currentRequestId;
- (void)setCurrentRequestId:(unsigned long long)arg1;
- (BOOL)clickPreviewHoldCompleted;
- (void)setClickPreviewHoldCompleted:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (unsigned long long)currentTransitionToken;
- (void)setCurrentTransitionToken:(unsigned long long)arg1;
- (BOOL)halfScreenShown;
- (void)setHalfScreenShown:(BOOL)arg1;
- (id)pendingClickPreviewHoldBlocks;
- (void)setPendingClickPreviewHoldBlocks:(id)arg1;
- (void).cxx_destruct;
@end
