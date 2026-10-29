@interface WCPayCardTypeItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel * m_textLabel; // +0x50
    WCBizPickerView * m_pickerView; // +0x58
    NSMutableArray * m_arrSection; // +0x60
    NSMutableDictionary * m_dicRows; // +0x68
    WCPayCardBinInfo * m_selectType; // +0x70
    long long m_iCurrentSectoin; // +0x78
    NSArray * m_arrOrderAvailableCards; // +0x80
}
- (void)initView:(CGRect)arg1;
- (void)dealloc;
- (id)getStringFrom:(id)arg1;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)setCardTypeList:(id)arg1;
- (void)setOrderAvailableCardList:(id)arg1;
- (BOOL)isOrderAvailableCard:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void).cxx_destruct;
@end
