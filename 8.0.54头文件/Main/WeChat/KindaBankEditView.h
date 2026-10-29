@interface KindaBankEditView : KindaView <WCPaySelectBankViewControllerDelegate, UITextFieldDelegate, WCPaySingleSelectedTableViewControllerDelegate, MMKBankEditView>
{
    WCPaySelectBankViewController * m_selectBankVC; // +0xa8
    UITextField * m_view; // +0xb0
    NSMutableArray * m_major_bank_list; // +0xb8
    NSMutableArray * m_bank_list; // +0xc0
    MMKBankEditViewOnSeletBankCallback * m_callback; // +0xc8
    NSMutableArray * m_bank_type_list; // +0xd0
    float _fontSize; // +0xd8
    long long _fontStyle; // +0xe0
    MMDynamicColor * _dynamicColor; // +0xe8
    NSString * _bankName; // +0xf0
    NSString * _bankCardType; // +0xf8
    WCPaySingleSelectTableViewController * _singleSelectViewController; // +0x100
    NSMutableArray * _currentBankCardTypeList; // +0x108
    NSMutableArray * _currentBankCardTypeDisplayList; // +0x110
    NSString * _tmpBankName; // +0x118
}
- (id)init;
- (id)getView;
- (id)bankListFromKindaData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setSelected:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)openBankSelectView;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (BOOL)needPushSelectCardTypeViewController;
- (void)onSingleSelectWithIndexPath:(id)arg1;
- (void)setOnSeletBankCallback:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setFontStyle:(long long)arg1;
- (long long)getFontStyle;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (id)getSelectedBankType;
- (BOOL)getSupportDynamicSize;
- (long long)fontStyle;
- (id)dynamicColor;
- (void)setDynamicColor:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (id)bankName;
- (void)setBankName:(id)arg1;
- (id)bankCardType;
- (void)setBankCardType:(id)arg1;
- (id)singleSelectViewController;
- (void)setSingleSelectViewController:(id)arg1;
- (id)currentBankCardTypeList;
- (void)setCurrentBankCardTypeList:(id)arg1;
- (id)currentBankCardTypeDisplayList;
- (void)setCurrentBankCardTypeDisplayList:(id)arg1;
- (id)tmpBankName;
- (void)setTmpBankName:(id)arg1;
- (void).cxx_destruct;
@end

