@interface ScaleControl : NSObject
{
    BOOL mTouchControlEnable; // +0x8
    _GLKMatrix4 mMatrix; // +0x10
    CGPoint mTransPrevPoint; // +0x50
    CGPoint mScalePrevPoint; // +0x60
    int mTransPrevTouchNum; // +0x70
    float mScalePrevVal; // +0x74
    float mScaleVal; // +0x78
    float mTransX; // +0x7c
    float mTransY; // +0x80
    float mScaleTransX; // +0x84
    float mScaleTransY; // +0x88
    float mXBoundary; // +0x8c
    float mYBoundary; // +0x90
    int mViewWidth; // +0x94
    int mViewHeight; // +0x98
}
- (id)init;
- (void)reset;
- (void)setViewSize:(int)arg1 viewHeight:(int)arg2;
- (void)setBoundaryVal:(float)arg1 YBoundaryVal:(float)arg2;
- (float *)getMatrix;
- (float)checkTransVal:(float)arg1 boundaryVal:(float)arg2;
- (void)checkMatrix;
- (void)checkScale;
- (void)updateMatrix;
- (void)setTouchControlFlag:(BOOL)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (float)currentScale;
@end

