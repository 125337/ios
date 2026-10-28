@interface WCPaySelectArriveTimeItem : WCBaseInfoItem <WCPaySelectArriveTimeViewControllerDelegate>
{
    UILabel * m_arriveTimeLabel; // +0x40
    EnterTimeItem * m_enterTimeItem; // +0x48
    MMUIViewController * m_currentVC; // +0x50
    BOOL m_isMaintenance; // +0x58
    UITableViewCell * _fatherCell; // +0x60
    id <WCPaySelectArriveTimeItemDelegate> _m_selectArriveItemDelegate; // +0x68
    WCPayTransBankItem * _m_bankItem; // +0x70
}
- (void)initView:(CGRect)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)becomeFirstResponder;
- (void)updateView;
- (id)getValue;
- (void)setBankItem:(id)arg1;
- (id)getArriveTimeString;
- (id)getAccessibilityLabel;
- (void)OnWCPaySelectArriveTimeViewControllerSelectArriveTime:(id)arg1;
- (void)updateWithEnterTimeItem:(id)arg1;
- (void)clearItem;
- (id)fatherCell;
- (void)setFatherCell:(id)arg1;
- (id)m_selectArriveItemDelegate;
- (void)setM_selectArriveItemDelegate:(id)arg1;
- (id)m_bankItem;
- (void)setM_bankItem:(id)arg1;
- (void).cxx_destruct;
@end
