@interface MMImageScrollViewHelper : NSObject
{
    BOOL dontCalcPreviewRect; // +0x8
    BOOL noSingleTaps; // +0x9
    BOOL noDoubleTaps; // +0xa
    id <MMImageScrollViewHelperDelegate> m_delegate; // +0x10
    double _contentRatioY; // +0x18
}
- (id)init;
- (void)InitGestureRecognizer;
- (void)initHelper:(CGSize)arg1;
- (void)initHelper:(CGSize)arg1 orientation:(long long)arg2 containSize:(CGSize)arg3;
- (void)initHelper:(CGSize)arg1 orientation:(long long)arg2 containSize:(CGSize)arg3 rectImage:(CGRect)arg4;
- (void)initHelper:(CGSize)arg1 orientation:(long long)arg2;
- (void)dealloc;
- (void)onSingleTap:(id)arg1;
- (CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2;
- (void)onDoubleTap:(id)arg1;
- (void)ZoomForPoint:(CGPoint)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (BOOL)dontCalcPreviewRect;
- (void)setDontCalcPreviewRect:(BOOL)arg1;
- (BOOL)noSingleTaps;
- (void)setNoSingleTaps:(BOOL)arg1;
- (BOOL)noDoubleTaps;
- (void)setNoDoubleTaps:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (double)contentRatioY;
- (void)setContentRatioY:(double)arg1;
- (void).cxx_destruct;
@end

