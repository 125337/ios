@interface MMHookUIAlertView : UIView
{
    BOOL _visible; // +0x8
    id <UIAlertViewDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSString * _message; // +0x20
    long long _cancelButtonIndex; // +0x28
    long long _clickedButtonIndex; // +0x30
    UIAlertAction * _cancelAction; // +0x38
    UIAlertController * _alertController; // +0x40
    NSMutableArray * _actionList; // +0x48
    id /* block */ _actionHandler; // +0x50
}
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)setTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)numberOfButtons;
- (long long)firstOtherButtonIndex;
- (void)show;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (id)actionList;
- (void)dismissAlertWithComplete:(id /* block */)arg1;
- (id)fakeAlertView;
- (id /* block */)actionHandler;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (id)message;
- (long long)cancelButtonIndex;
- (void)setCancelButtonIndex:(long long)arg1;
- (BOOL)isVisible;
- (void)setVisible:(BOOL)arg1;
- (long long)clickedButtonIndex;
- (void)setClickedButtonIndex:(long long)arg1;
- (id)cancelAction;
- (void)setCancelAction:(id)arg1;
- (id)alertController;
- (void)setAlertController:(id)arg1;
- (void)setActionList:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

