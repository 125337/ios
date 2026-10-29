@interface WAVoipNotiView : UIControl <MMVoipCSMainWindowDelegate>
{
    WACampusVoipMsg * _msg; // +0x8
    id /* block */ _clickAction; // +0x10
    id /* block */ _acceptAction; // +0x18
    id /* block */ _rejectAction; // +0x20
    MMVoipCSMainWindow * _notiWindow; // +0x28
}
- (void)configWithMsg:(id)arg1 clickAction:(id /* block */)arg2 acceptAction:(id /* block */)arg3 rejectAction:(id /* block */)arg4;
- (void)setupViews;
- (void)show;
- (void)dismiss;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id /* block */)acceptAction;
- (void)setAcceptAction:(id /* block */)arg1;
- (id /* block */)rejectAction;
- (void)setRejectAction:(id /* block */)arg1;
- (id)notiWindow;
- (void)setNotiWindow:(id)arg1;
- (void).cxx_destruct;
@end
