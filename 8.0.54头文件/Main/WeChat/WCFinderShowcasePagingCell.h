@interface WCFinderShowcasePagingCell : UIView
{
    UILongPressGestureRecognizer * _longGesture; // +0x8
    WCFinderShowcasePagingView * _owner; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTap;
- (id)longGesture;
- (void)setLongGesture:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void).cxx_destruct;
@end

