@interface WCPayBindedCardPikerItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel * m_textLabel; // +0x50
    WCBizPickerView * m_pickerView; // +0x58
    WCPayBindCardInfo * m_selectCard; // +0x60
    NSMutableDictionary * m_dicAll; // +0x68
    NSArray * m_arrRows; // +0x70
    id <WCPayBindedCardPikerItemDelegate> m_cardDelegate; // +0x78
    NSArray * m_arrOrderAvailableCards; // +0x80
}
- (void)initView:(CGRect)arg1;
- (void)dealloc;
- (id)getValue;
- (unsigned int)findIndexFromInfo:(id)arg1;
- (void)becomeFirstResponder;
- (void)setSelectBindCard:(id)arg1;
- (void)setText:(id)arg1;
- (void)setBindCardList:(id)arg1;
- (void)setOrderAvailableCardList:(id)arg1;
- (BOOL)isOrderAvailableCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)checkCardAvailable:(id)arg1;
- (BOOL)checkOrderCardAvailable:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void).cxx_destruct;
@end

