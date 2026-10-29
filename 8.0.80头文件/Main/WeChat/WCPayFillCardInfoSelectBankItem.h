@interface WCPayFillCardInfoSelectBankItem : WCBaseInfoItem <WCPaySelectBankViewControllerDelegate>
{
    UILabel * m_bankLabel; // +0x40
    WCPayCardBinInfo * m_selectedBank; // +0x48
    MMUIViewController * m_currentViewController; // +0x50
    NSMutableArray * _m_arrCardTypeList; // +0x58
    WCPaySelectBankViewController * _m_selectBankViewController; // +0x60
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)setCardTypeList:(id)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)becomeFirstResponder;
- (BOOL)containsBankType:(id)arg1;
- (id)getValue;
- (id)bankString;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (id)m_arrCardTypeList;
- (void)setM_arrCardTypeList:(id)arg1;
- (id)m_selectBankViewController;
- (void)setM_selectBankViewController:(id)arg1;
- (void).cxx_destruct;
@end
