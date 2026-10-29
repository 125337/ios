@interface TPIDKeyboardView : UIView
{
    UITextField * curText; // +0x8
    UIView * myKeyboardiPadPortrait; // +0x10
    UIView * myKeyboardiPadLandscape; // +0x18
    long long keybordOrientation; // +0x20
    id _touchNumTarget; // +0x28
    SEL _touchNumCallback; // +0x30
    id _touchDeleteTarget; // +0x38
    SEL _touchDeleteCallback; // +0x40
    NSMutableArray * _portraitBtns; // +0x48
    NSMutableArray * _landscapeBtns; // +0x50
    NSMutableArray * _numberBtns; // +0x58
    int maxInput; // +0x60
}
+ (void)addLabelOnButton:(id)arg1 text:(id)arg2 frame:(CGRect)arg3;
- (id)init;
- (void)layoutSubviews;
- (void)OrientationDidChange:(id)arg1;
- (void)layoutKeyboardButtonForRootView:(id)arg1;
- (void)dealloc;
- (void)setKeyboradOrientation:(long long)arg1;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2;
- (void)setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3;
- (void)setKeyboardNumFont:(id)arg1;
- (void)_setKeyboardNumFont:(id)arg1 rootView:(id)arg2;
- (void)_setKeyboardNumFontColor:(id)arg1 bgColor:(id)arg2 lineColor:(id)arg3 rootView:(id)arg4;
- (id)createMainKeyboardWithWidth:(int)arg1 andHeight:(int)arg2 ImageNumNormal:(id)arg3 ImageNumPress:(id)arg4 ImageDelNormal:(id)arg5 ImageDelPess:(id)arg6 ImageExtendNormal:(id)arg7 ImageExtendPess:(id)arg8 forTarget:(id)arg9 WithX:(BOOL)arg10 orientation:(long long)arg11;
- (void)UseKeyboardWithImageNumNormalOnIPad:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 forTarget:(id)arg5 Controller:(id)arg6 WithX:(BOOL)arg7;
- (void)UseKeyboardWithImageNumNormalOnIPad:(id)arg1 ImageNumPress:(id)arg2 ImageDelNormal:(id)arg3 ImageDelPess:(id)arg4 ImageExtendNormal:(id)arg5 ImageExtendPess:(id)arg6 forTarget:(id)arg7 Controller:(id)arg8 WithX:(BOOL)arg9;
- (id)initWithX:(BOOL)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5;
- (id)initWithX:(BOOL)arg1 ImageNumNormal:(id)arg2 ImageNumPress:(id)arg3 ImageDelNormal:(id)arg4 ImageDelPess:(id)arg5 ImageExtendNormal:(id)arg6 ImageExtendPess:(id)arg7;
- (void)addController:(id)arg1;
- (void)touchInput:(id)arg1;
- (void)SetTouchNum:(id)arg1 callback:(SEL)arg2;
- (void)SetTouchDelete:(id)arg1 callback:(SEL)arg2;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)HiddenKeyboardPressedState:(BOOL)arg1;
- (int)maxInput;
- (void)setMaxInput:(int)arg1;
@end
