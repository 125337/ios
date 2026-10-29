@interface MMFinderForwardButton : UIButton
{
    UIView * _mask; // +0x8
    UILongPressGestureRecognizer * _longpressGesture; // +0x10
    id <MMFinderForwardButtonDelegate> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)onLongPressGesture:(id)arg1;
- (id)mask;
- (void)setMask:(id)arg1;
- (id)longpressGesture;
- (void)setLongpressGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

