@interface WACampusVoipNotiView : UIControl <MMVoipCSMainWindowDelegate>
{
    WACampusVoipMsg * _msg; // +0x8
    id /* block */ _clickAction; // +0x10
    id /* block */ _acceptAction; // +0x18
    id /* block */ _rejectAction; // +0x20
    UILabel * _nameLabel; // +0x28
    UIImageView * _iconView; // +0x30
    VoipAutoUpdateLabel * _descLabel; // +0x38
    UIButton * _rejectButton; // +0x40
    UIButton * _acceptButton; // +0x48
    MMVoipCSMainWindow * _notiWindow; // +0x50
}
- (id)initWithMsg:(id)arg1 clickAction:(id /* block */)arg2 acceptAction:(id /* block */)arg3 rejectAction:(id /* block */)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)setMsg:(id)arg1;
- (void)show;
- (void)dismiss;
- (void)setupViews;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (id)msg;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id /* block */)acceptAction;
- (void)setAcceptAction:(id /* block */)arg1;
- (id /* block */)rejectAction;
- (void)setRejectAction:(id /* block */)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)notiWindow;
- (void)setNotiWindow:(id)arg1;
- (void).cxx_destruct;
@end
