@interface WxpayLFSSecureInputSurface : NSObject <WxpaySecureInputSurface, TenpayPasswordCtrlDelegate, UITextFieldDelegate>
{
    BOOL _released; // +0x8
    BOOL _completing; // +0x9
    UIView * _view; // +0x10
    TenpayPasswordCtrl * _passwordControl; // +0x18
    WxpaySecureInputRequest * _request; // +0x20
    id /* block */ _lengthChanged; // +0x28
    id /* block */ _completed; // +0x30
    id /* block */ _closed; // +0x38
}
- (id)initWithRequest:(id)arg1 lengthChanged:(id /* block */)arg2 completed:(id /* block */)arg3 closed:(id /* block */)arg4;
- (void)dealloc;
- (void)applyKeyboardStyle;
- (void)applyScreenCapture;
- (void)applyKeyAccessibility:(id)arg1;
- (id)extraString:(id)arg1;
- (void)updateRequest:(id)arg1;
- (void)registerPasswordTimestamp;
- (void)passwordCtrlShouldChange:(id)arg1;
- (id)resultWithControl:(id)arg1 cipher:(long long)arg2;
- (void)reportSm2Error:(id)arg1 encrypted:(id)arg2 hash:(long long)arg3;
- (id)hkResultWithControl:(id)arg1 mode:(id)arg2;
- (id)hkEncryptWithControl:(id)arg1 mode:(id)arg2 salt:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)setEnabled:(BOOL)arg1;
- (void)clear;
- (void)releaseSurface;
- (id)view;
- (void)setView:(id)arg1;
- (id)passwordControl;
- (void)setPasswordControl:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)lengthChanged;
- (void)setLengthChanged:(id /* block */)arg1;
- (id /* block */)completed;
- (void)setCompleted:(id /* block */)arg1;
- (id /* block */)closed;
- (void)setClosed:(id /* block */)arg1;
- (BOOL)released;
- (void)setReleased:(BOOL)arg1;
- (BOOL)completing;
- (void)setCompleting:(BOOL)arg1;
- (void).cxx_destruct;
@end
