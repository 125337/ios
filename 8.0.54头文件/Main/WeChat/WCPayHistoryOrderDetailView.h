@interface WCPayHistoryOrderDetailView : UIView <LongPressMenuViewDelegate, ILinkEventExt>
{
    WCPayOrderDetail * m_oWCPayOrderDetail; // +0x8
    id <WCPayHistoryOrderDetailViewDelegate> m_delegate; // +0x10
    UILabel * serialNameLable; // +0x18
    UILabel * oProductSerialLabel; // +0x20
    int m_enWCPayHistoryOrderDetailViewScene; // +0x28
}
- (void)dealloc;
- (id)GetFooterView:(id)arg1;
- (void)onShowUserIntruction:(id)arg1;
- (void)onShowAppProfile:(id)arg1;
- (id)getDetailView:(id)arg1 ShowedAppFrom:(BOOL)arg2;
- (id)getMoneyView:(id)arg1;
- (id)getExtentionView:(id)arg1;
- (id)initWithOrderDetail:(id)arg1 AppFromShowed:(BOOL)arg2 Scene:(int)arg3;
- (id)initWithOrderDetail:(id)arg1 AppFromShowed:(BOOL)arg2;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)RetrySendTransferMessage;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

