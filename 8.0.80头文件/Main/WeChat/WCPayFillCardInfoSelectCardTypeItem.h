@interface WCPayFillCardInfoSelectCardTypeItem : WCBaseInfoItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel * m_cardTypeLabel; // +0x40
    MMUIViewController * m_currentViewController; // +0x48
    WCBizPickerView * m_pickerView; // +0x50
    WCPayCardBinInfo * _m_selectCardTypeInfo; // +0x58
    NSArray * _m_allCardTypeList; // +0x60
    NSMutableArray * _m_selectCardTypeList; // +0x68
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)dealloc;
- (void)setCardTypeList:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)becomeFirstResponder;
- (id)cardTypeString;
- (void)setSelectBankItem:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (id)getValue;
- (id)m_selectCardTypeInfo;
- (void)setM_selectCardTypeInfo:(id)arg1;
- (id)m_allCardTypeList;
- (void)setM_allCardTypeList:(id)arg1;
- (id)m_selectCardTypeList;
- (void)setM_selectCardTypeList:(id)arg1;
- (void).cxx_destruct;
@end
