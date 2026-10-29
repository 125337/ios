@interface WCPOIAddressPickerItem : WCBaseTextFieldItem <MMCommonActionSheetPickerDelegate, WCBizPickerViewDelegate>
{
    NSArray * m_arrStage; // +0x50
    WCAddressStageDataStruct * m_selectProvince; // +0x58
    WCAddressStageDataStruct * m_selectCity; // +0x60
    WCAddressStageDataStruct * m_selectDistrict; // +0x68
    long long m_uiCurProvince; // +0x70
    long long m_uiCurCity; // +0x78
    long long m_uiCurDistrict; // +0x80
    MMCommonActionSheetPicker * m_pickerView; // +0x88
    BOOL m_bLockProvince; // +0x90
    BOOL m_bLockCity; // +0x91
    BOOL m_bLockDistrict; // +0x92
    BOOL m_bLockProviceAndCity; // +0x93
}
- (void)setAllAddressStageData:(id)arg1;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3;
- (BOOL)selectCityInDistrict:(id)arg1;
- (id)getSelectProvice;
- (id)getSelectCity;
- (id)getSelectDistrict;
- (void)resetSelectedAddress;
- (void)initView:(CGRect)arg1;
- (void)becomeFirstResponder;
- (void)SetText;
- (void)reloadComponents;
- (id)getAddressDataItems;
- (id)getProvinceDataItems;
- (id)getCityDataItems;
- (id)getDistrictDataItems;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)commonPickerCancel:(id)arg1;
- (void)commonPickerConfirm:(id)arg1;
- (BOOL)lockProviceAndCity;
- (void)setLockProviceAndCity:(BOOL)arg1;
- (void).cxx_destruct;
@end
