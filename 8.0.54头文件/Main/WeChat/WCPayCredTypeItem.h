@interface WCPayCredTypeItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel * m_textLabel; // +0x50
    NSMutableArray * m_arrSection; // +0x58
    WCPayCredInfo * m_selectType; // +0x60
    long long m_iCurrentSectoin; // +0x68
    double _contentMaxWidth; // +0x70
    MMPanelView * _panelView; // +0x78
    UIPickerView * _pickerView; // +0x80
}
- (void)dealloc;
- (void)updateContentMaxWidth:(double)arg1;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (void)beforeShowPicker;
- (id)getStringFrom:(id)arg1;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)getValue;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setSelectCredType:(id)arg1;
- (void)setCredTypeList:(id)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)setTitleFont:(id)arg1;
- (void)updateTitleColor:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)currentAccessibilityDesc;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (void).cxx_destruct;
@end

