@interface WxpayCustomKeyboardView : UIView <UIInputViewAudioFeedback>
{
    long long _kind; // +0x8
    NSString * _confirmText; // +0x10
    UIColor * _confirmColor; // +0x18
    UIColor * _confirmBackgroundColor; // +0x20
    double _fontScale; // +0x28
    UIWindow * _hostWindow; // +0x30
    double _builtWidth; // +0x38
    UIButton * _confirmButton; // +0x40
    UIImageView * _deleteImage; // +0x48
    UIImageView * _deletePressedImage; // +0x50
    NSTimer * _deleteTimer; // +0x58
    BOOL _confirmEnabled; // +0x60
    id /* block */ _insertHandler; // +0x68
    id /* block */ _deleteHandler; // +0x70
    id /* block */ _performActionHandler; // +0x78
    long long _keyboardStyle; // +0x80
}
- (id)initWithKeyboardKind:(long long)arg1 confirmText:(id)arg2 confirmColor:(id)arg3 confirmBackgroundColor:(id)arg4 confirmEnabled:(BOOL)arg5 fontScale:(double)arg6 hostWindow:(id)arg7 keyboardStyle:(long long)arg8;
- (void)dealloc;
- (void)setKeyboardStyle:(long long)arg1;
- (void)setConfirmEnabled:(BOOL)arg1;
- (void)applyConfirmEnabled;
- (double)layoutWidth;
- (double)bottomInset;
- (BOOL)isLandscape;
- (double)dynamicLength:(double)arg1;
- (void)layoutSubviews;
- (void)rebuild;
- (void)buildNumberKeyboard:(const Palette *)arg1;
- (double)payKeyWidth;
- (id)payKeyWithFrame:(CGRect)arg1 palette:(const Palette *)arg2;
- (void)buildPayKeyboard:(const Palette *)arg1;
- (void)installCharacterKey:(id)arg1 on:(id)arg2;
- (void)installExtraKey:(id)arg1 on:(id)arg2 palette:(const Palette *)arg3;
- (void)installNumberDeleteKey:(id)arg1 palette:(const Palette *)arg2;
- (void)installDeleteActions:(id)arg1;
- (BOOL)enableInputClicksWhenVisible;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)characterPressed:(id)arg1;
- (void)deleteOnce;
- (void)deletePressed:(id)arg1;
- (void)startDeleteRepeat;
- (void)deleteReleased:(id)arg1;
- (void)stopDeleteRepeat;
- (void)confirmPressed:(id)arg1;
- (id /* block */)insertHandler;
- (void)setInsertHandler:(id /* block */)arg1;
- (id /* block */)deleteHandler;
- (void)setDeleteHandler:(id /* block */)arg1;
- (id /* block */)performActionHandler;
- (void)setPerformActionHandler:(id /* block */)arg1;
- (BOOL)confirmEnabled;
- (long long)keyboardStyle;
- (void).cxx_destruct;
@end
