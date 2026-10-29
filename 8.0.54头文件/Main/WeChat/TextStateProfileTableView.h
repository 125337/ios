@interface TextStateProfileTableView : WCTableView
{
    UIEdgeInsets _expendTouchInsets; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (UIEdgeInsets)expendTouchInsets;
- (void)setExpendTouchInsets:(UIEdgeInsets)arg1;
@end

