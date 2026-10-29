@interface MMUILongPressMenuView : UIView
{
    id <LongPressMenuViewDelegate> menu_delegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)LongPressEvents;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (id)menu_delegate;
- (void)setMenu_delegate:(id)arg1;
- (void).cxx_destruct;
@end

