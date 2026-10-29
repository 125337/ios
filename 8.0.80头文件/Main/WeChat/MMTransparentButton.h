@interface MMTransparentButton : MMUIButton <UIGestureRecognizerDelegate>
{
    BOOL m_bScale; // +0x8
    id <MMTransparentButtonDelegate> _delegate; // +0x10
    UILongPressGestureRecognizer * _customLongPressGesture; // +0x18
    CGPoint _m_pTouchLocation; // +0x20
}
- (id)description;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)recordTouchLocationwithEvent:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (BOOL)m_bScale;
- (void)setM_bScale:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (CGPoint)m_pTouchLocation;
- (void)setM_pTouchLocation:(CGPoint)arg1;
- (id)customLongPressGesture;
- (void)setCustomLongPressGesture:(id)arg1;
- (void).cxx_destruct;
@end
