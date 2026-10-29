@interface KeepRotateImageView : UIImageView
{
    BOOL _isRotating; // +0x8
}
- (void)startRotate;
- (void)stopRotate;
- (void)didMoveToWindow;
- (void)resumeRotatingIfNeeded;
@end

