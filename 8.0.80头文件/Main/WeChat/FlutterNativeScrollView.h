@interface FlutterNativeScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    id /* block */ _offsetCallback; // +0x8
    UIView * _flutterView; // +0x10
}
- (void)setContentOffset:(CGPoint)arg1;
- (void)dealloc;
- (void)attachFlutterView:(id)arg1;
- (void)setContentOffsetCallback:(id /* block */)arg1;
- (void)setContentSize:(CGSize)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (id /* block */)offsetCallback;
- (void)setOffsetCallback:(id /* block */)arg1;
- (id)flutterView;
- (void)setFlutterView:(id)arg1;
- (void).cxx_destruct;
@end
