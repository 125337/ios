@interface WCPayOfflinePayConfirmView : MMUIView <CAAnimationDelegate, WCBaseInfoItemDelegate>
{
    UIImageView * m_backgroundView; // +0x8
    WCPayTenpayPasswordCtrlItem * m_textFieldItemPwd; // +0x10
    id m_userData; // +0x18
    id <WCPayOfflinePayConfirmViewDelegate> m_delegate; // +0x20
    unsigned char _routeInfo; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)showAnimation;
- (void)closeView;
- (void)onPayBtnClick;
- (void)onCancelBtnClick;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (unsigned char)routeInfo;
- (void)setRouteInfo:(unsigned char)arg1;
- (void).cxx_destruct;
@end

