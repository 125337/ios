@interface WCPayLQTOrderConfirmView : MMUIView <WCBaseInfoItemDelegate>
{
    unsigned int _money; // +0x8
    id <WCPayLQTOrderConfirmViewDelegate> _delegate; // +0x10
    MMUIView * _contentView; // +0x18
    WCPayTenpayPasswordCtrlItem * _pwdTextFieldItem; // +0x20
}
- (void)dealloc;
- (id)initLQTConfirmViewWithFrame:(CGRect)arg1 money:(unsigned int)arg2 delegate:(id)arg3;
- (void)setupSubView;
- (void)setupContentView;
- (void)showView;
- (void)hideView;
- (void)cancelBtnClick;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onPayBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)money;
- (void)setMoney:(unsigned int)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)pwdTextFieldItem;
- (void)setPwdTextFieldItem:(id)arg1;
- (void).cxx_destruct;
@end

