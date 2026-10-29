@interface WCPayOrderDetailView : MMUIView <ILinkEventExt>
{
    double m_fBodyViewHeight; // +0x8
    UIButton * m_btnFold; // +0x10
    UIButton * m_btnUnFold; // +0x18
    UIView * m_BodyView; // +0x20
    UIView * m_HeaderView; // +0x28
    UIView * m_FooterView; // +0x30
    id <WCPayOrderDetailViewDelegate> m_delegate; // +0x38
}
- (id)getViewWithOrderDetail:(id)arg1 Data:(id)arg2;
- (void)initBodyView:(id)arg1;
- (void)initHeaderView:(id)arg1 Data:(id)arg2;
- (void)initFooterView:(id)arg1 withBtn:(BOOL)arg2;
- (void)onShowUserIntruction:(id)arg1;
- (double)getMinHeight;
- (void)setBodyHeight:(double)arg1;
- (id)initWithFrame:(CGRect)arg1 Data:(id)arg2 delegate:(id)arg3;
- (void)OnFold;
- (void)OnUnfold;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void).cxx_destruct;
@end

