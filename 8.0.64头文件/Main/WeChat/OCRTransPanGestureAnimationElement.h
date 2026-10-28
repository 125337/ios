@interface OCRTransPanGestureAnimationElement : NSObject
{
    double _exitViewTopAtPanBegin; // +0x8
    double _previousPanPositionX; // +0x10
    double _zoomScaleAtPanBegin; // +0x18
    CGPoint _scrollOffsetAtPanBegin; // +0x20
    CGSize _imageSizeAtPanBegin; // +0x30
    CGPoint _imageOriginAtPanBegin; // +0x40
}
- (double)exitViewTopAtPanBegin;
- (void)setExitViewTopAtPanBegin:(double)arg1;
- (double)previousPanPositionX;
- (void)setPreviousPanPositionX:(double)arg1;
- (double)zoomScaleAtPanBegin;
- (void)setZoomScaleAtPanBegin:(double)arg1;
- (CGPoint)scrollOffsetAtPanBegin;
- (void)setScrollOffsetAtPanBegin:(CGPoint)arg1;
- (CGSize)imageSizeAtPanBegin;
- (void)setImageSizeAtPanBegin:(CGSize)arg1;
- (CGPoint)imageOriginAtPanBegin;
- (void)setImageOriginAtPanBegin:(CGPoint)arg1;
@end
