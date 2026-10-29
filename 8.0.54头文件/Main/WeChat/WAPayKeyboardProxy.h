@interface WAPayKeyboardProxy : NSObject <WCPayDecimalKeyboardViewDelegate, IWAPayKeyboardService>
{
    UITextField * _textField; // +0x8
    id <IWAPayKeyboardServiceDelegate> _delegate; // +0x10
    WCPayDecimalKeyboardView * _keyboard; // +0x18
}
+ (id)createService;
- (void)attachKeyboardTo:(id)arg1 delegate:(id)arg2;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)keyboard;
- (void)setKeyboard:(id)arg1;
- (void).cxx_destruct;
@end

