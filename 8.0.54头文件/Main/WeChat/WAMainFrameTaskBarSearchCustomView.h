@interface WAMainFrameTaskBarSearchCustomView : MMBarItemCustomView
{
    UIButton * _innerButton; // +0x8
    id <WAMainFrameTaskBarSearchCustomViewDelegate> _taskBarViewDelegate; // +0x10
}
- (id)init;
- (void)setupSubviews;
- (void)updateInnerButtonWithSize:(CGSize)arg1;
- (void)onClickSearch;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)innerButton;
- (void)setInnerButton:(id)arg1;
- (id)taskBarViewDelegate;
- (void)setTaskBarViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end

