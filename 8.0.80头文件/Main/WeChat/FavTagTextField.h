@interface FavTagTextField : UITextField
{
    UIResponder * _overrideNextResponder; // +0x8
    BOOL _isMarking; // +0x10
}
- (id)nextResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (id)overrideNextResponder;
- (void)setOverrideNextResponder:(id)arg1;
- (BOOL)isMarking;
- (void)setIsMarking:(BOOL)arg1;
- (void).cxx_destruct;
@end
