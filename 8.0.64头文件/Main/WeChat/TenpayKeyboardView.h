@interface TenpayKeyboardView : UIView
{
    id _touchNumTarget; // +0x8
    SEL _touchNumCallback; // +0x10
    id _touchDeleteTarget; // +0x18
    SEL _touchDeleteCallback; // +0x20
    NSString * _keyboardText; // +0x28
    UITextField * _curTextField; // +0x30
    UIView * _myKeyboardiPadPortrait; // +0x38
    UIView * _myKeyboardiPadLandscape; // +0x40
    long long _keybordOrientation; // +0x48
}
- (id)init;
- (void)dealloc;
- (id)initWithType:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 Controller:(id)arg6;
- (id)initWithType:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7 Controller:(id)arg8;
- (void)setPhoneKeyBoard:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7;
- (void)setPadKeyBoard;
- (void)orientationDidChange:(id)arg1;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)keyboardChangeFrame:(id)arg1;
- (void)updateKeyboardSizeForFloat:(CGSize)arg1 rootView:(id)arg2 isFloatKeyboard:(BOOL)arg3;
- (void)useKeyboardWithImageNumNormalOnIPad:(long long)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7 Controller:(id)arg8;
- (id)createMainKeyboardWithWidth:(int)arg1 andHeight:(int)arg2 type:(long long)arg3 ImageNumNormal:(id)arg4 ImageNumPress:(id)arg5 ImageDelNormal:(id)arg6 ImageDelPess:(id)arg7 ImageExtendNormal:(id)arg8 ImageExtendPess:(id)arg9 orientation:(long long)arg10;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3 rootView:(id)arg4;
- (void)SetTouchNum:(id)arg1 callback:(SEL)arg2;
- (void)SetTouchDelete:(id)arg1 callback:(SEL)arg2;
- (void)numberKeyBoardClicked:(id)arg1;
@end
