@interface KindaBankCardTypePickerView : KindaView <MMKBankCardTypePickerView, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate, UITextFieldDelegate>
{
    WCBizPickerView * m_pickerView; // +0xa8
    WCUITextField * m_textField; // +0xb0
    NSArray * m_bankCardTypeArray; // +0xb8
    MMBankCardType * m_selectedBankType; // +0xc0
    MMKBankCardTypePickerViewOnSelectCallback * m_onSelectCallback; // +0xc8
    MMKViewOnClickCallback * m_onClickCallback; // +0xd0
    NSMutableArray * m_arrBankName; // +0xd8
    NSMutableDictionary * m_dicRows; // +0xe0
    long long m_iCurrentSectoin; // +0xe8
}
- (id)init;
- (void)dealloc;
- (void)setBankCardType:(id)arg1;
- (void)setSelectedBankCardType:(id)arg1;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setValue:(id)arg1;
- (id)getValue;
- (void)setOnSelectCallback:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (id)getStringFrom:(id)arg1;
- (id)getView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void).cxx_destruct;
@end

