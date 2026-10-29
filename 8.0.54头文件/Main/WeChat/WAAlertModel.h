@interface WAAlertModel : NSObject
{
    BOOL _isShow; // +0x8
    NSString * _title; // +0x10
    NSString * _message; // +0x18
    NSString * _okButton; // +0x20
    id /* block */ _okButtonClickedAction; // +0x28
    NSString * _cancelButton; // +0x30
    id /* block */ _cancelButtonClickedAction; // +0x38
    id /* block */ _alertDidShowAction; // +0x40
    id _userInfo; // +0x48
    id /* block */ _showEvent; // +0x50
}
- (id)initWithTitle:(id)arg1 message:(id)arg2 okButton:(id)arg3 cancelButton:(id)arg4 okButtonClickedAction:(id /* block */)arg5 cancelButtonClickedAction:(id /* block */)arg6;
- (void)show;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (id /* block */)okButtonClickedAction;
- (void)setOkButtonClickedAction:(id /* block */)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id /* block */)cancelButtonClickedAction;
- (void)setCancelButtonClickedAction:(id /* block */)arg1;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg1;
- (id /* block */)alertDidShowAction;
- (void)setAlertDidShowAction:(id /* block */)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)showEvent;
- (void)setShowEvent:(id /* block */)arg1;
- (void).cxx_destruct;
@end

