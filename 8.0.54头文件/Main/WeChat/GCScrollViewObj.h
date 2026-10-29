@interface GCScrollViewObj : NSObject
{
    UIView * _scrollView; // +0x8
    double _marginBottomInputView; // +0x10
    double _initialBottom; // +0x18
    id /* block */ _callback; // +0x20
    id /* block */ _getBottomCallback; // +0x28
}
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (double)marginBottomInputView;
- (void)setMarginBottomInputView:(double)arg1;
- (double)initialBottom;
- (void)setInitialBottom:(double)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id /* block */)getBottomCallback;
- (void)setGetBottomCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

