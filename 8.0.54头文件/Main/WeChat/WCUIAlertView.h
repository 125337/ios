@interface WCUIAlertView : NSObject
{
    MMTipsViewController * _tipsVc; // +0x8
}
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9 view:(id)arg10;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9 view:(id)arg10 forbidDarkMode:(BOOL)arg11;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 destructiveBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 cancelBtnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 view:(id)arg9;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 view:(id)arg9;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 view:(id)arg9;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 view:(id)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11 view:(id)arg12;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6 windowLevel:(int)arg7;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6 btnTitle:(id)arg7 handler:(id /* block */)arg8;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelBtnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6;
+ (id)getTopVc;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)tipsViewController;
- (void)setRequestKeyWindow:(BOOL)arg1;
- (void)showTextFieldWithMaxLen:(unsigned int)arg1;
- (id)getTextField;
- (id)getTextFieldText;
- (BOOL)isFirstResponder;
- (void)setTextFieldPlaceHolder:(id)arg1;
- (void)setTextFieldDefaultText:(id)arg1;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addCancelBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3 btnStyle:(long long)arg4;
- (void)addBtnTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addDestructiveBtnTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addCancelBtnTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)show;
- (void)dismissAnimated:(BOOL)arg1;
- (BOOL)isVisible;
- (void).cxx_destruct;
@end

