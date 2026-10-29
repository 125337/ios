@interface WCPaySelectBankItem : WCBaseInfoItem <WCPaySelectBankViewControllerDelegate, WCPayT2BCGetBankListCgiDelegate>
{
    MMUIViewController * m_currentViewController; // +0x40
    WCPayTransBankItem * m_value; // +0x48
    MMWebImageView * m_bankIconView; // +0x50
    UILabel * m_bankLabel; // +0x58
    BOOL _m_isUnselectable; // +0x60
    UITableViewCell * _fatherCell; // +0x68
    id <WCPaySelectBankItemDelegate> _m_selectBankItemDelegate; // +0x70
    WCPayT2BCGetBankListCgi * _m_getBankListCgi; // +0x78
    WCPaySelectBankViewController * _m_selectBankViewController; // +0x80
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)setCurrentViewController:(id)arg1;
- (id)getValue;
- (void)clearItem;
- (void)becomeFirstResponder;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)setBankItem:(id)arg1;
- (id)bankString;
- (id)getBankIconImageView;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnGetBankListOK:(id)arg1 allBankList:(id)arg2;
- (id)fatherCell;
- (void)setFatherCell:(id)arg1;
- (id)m_selectBankItemDelegate;
- (void)setM_selectBankItemDelegate:(id)arg1;
- (BOOL)m_isUnselectable;
- (void)setM_isUnselectable:(BOOL)arg1;
- (id)m_getBankListCgi;
- (void)setM_getBankListCgi:(id)arg1;
- (id)m_selectBankViewController;
- (void)setM_selectBankViewController:(id)arg1;
- (void).cxx_destruct;
@end

