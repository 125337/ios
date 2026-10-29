@interface WCPayAreaItem : WCBaseTextFieldItem <WCPayRegionPickerViewControllerDelegate, MMRegionPickerViewControllerDelegate>
{
    MMUIViewController * m_currentViewController; // +0x50
    NSString * m_country; // +0x58
    NSString * m_province; // +0x60
    NSString * m_city; // +0x68
    BOOL _disableLocation; // +0x70
    BOOL _chinaFirst; // +0x71
    BOOL _openSearch; // +0x72
    id <WCPayAreaItemDelegate> m_payAreaItemDelegate; // +0x78
    NSArray * _bannedCountryCodes; // +0x80
}
- (void)setCurrentViewController:(id)arg1;
- (BOOL)isUSorCA;
- (id)getCountry;
- (id)getProvince;
- (id)getCity;
- (id)allCountrys;
- (BOOL)bannedCode:(id)arg1;
- (void)becomeFirstResponder;
- (void)setCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)picker:(id)arg1 didPick:(id)arg2;
- (id)currentAccessibilityDesc;
- (id)m_payAreaItemDelegate;
- (void)setM_payAreaItemDelegate:(id)arg1;
- (BOOL)disableLocation;
- (void)setDisableLocation:(BOOL)arg1;
- (BOOL)chinaFirst;
- (void)setChinaFirst:(BOOL)arg1;
- (BOOL)openSearch;
- (void)setOpenSearch:(BOOL)arg1;
- (id)bannedCountryCodes;
- (void)setBannedCountryCodes:(id)arg1;
- (void).cxx_destruct;
@end

