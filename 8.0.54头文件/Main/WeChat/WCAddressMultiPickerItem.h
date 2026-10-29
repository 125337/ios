@interface WCAddressMultiPickerItem : WCBaseTextFieldItem
{
    NSArray * m_arrStage; // +0x50
    NSString * m_selectProvince; // +0x58
    NSString * m_selectCity; // +0x60
    NSString * m_selectDistrict; // +0x68
    NSString * m_selectStreet; // +0x70
    NSString * m_nationalCode; // +0x78
    int m_component; // +0x80
    WCAddressHalfScreenPickerView * _pickerView; // +0x88
}
- (void)initView:(CGRect)arg1;
- (void)becomeFirstResponder;
- (void)setScreenViewDelegate:(id)arg1;
- (void)reloadAddress;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4 NationalCode:(id)arg5;
- (void)setAllAddressStageData:(id)arg1;
- (void)setComponentWhenAppear:(int)arg1;
- (id)selectProvice;
- (id)selectCity;
- (id)selectDistrict;
- (id)selectStreet;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (void).cxx_destruct;
@end

