@interface WCPayAddressItem : WCBaseTextFieldItem <WCPayAddressViewControllerDelegate>
{
    BOOL _disableLocation; // +0x4e
    BOOL _chinaFirst; // +0x4f
    BOOL _openSearch; // +0x50
    NSMutableArray * _bannedCountryCodes; // +0x58
    id <WCPayAddressItemDelegate> _addressDelegate; // +0x60
    NSString * _country; // +0x68
    NSString * _province; // +0x70
    NSString * _city; // +0x78
    NSString * _address; // +0x80
    UILabel * _label; // +0x88
}
- (void)initView:(CGRect)arg1;
- (id)getValue;
- (double)maxContentWidth;
- (void)updateLabel;
- (void)onTapLabel;
- (BOOL)isUSorCA;
- (id)getCountry;
- (id)getProvince;
- (id)getCity;
- (id)getAddress;
- (id)getAdministrationAddress;
- (void)setCountry:(id)arg1 province:(id)arg2 city:(id)arg3 address:(id)arg4;
- (void)updateText;
- (void)becomeFirstResponder;
- (void)onWCPayAddressViewControllerBack;
- (void)onWCPayAddressViewControllerDoneWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 address:(id)arg4;
- (BOOL)onWCPayAddressViewControllerDisableLocation;
- (BOOL)onWCPayAddressViewControllerChinaFirst;
- (BOOL)onWCPayAddressViewControllerOpenSearch;
- (id)onWCPayAddressViewControllerPresetCountry;
- (id)onWCPayAddressViewControllerPresetProvince;
- (id)onWCPayAddressViewControllerPresetCity;
- (id)onWCPayAddressViewControllerPresetAddress;
- (id)onWCPayAddressViewControllerBannedCountryCodes;
- (id)currentAccessibilityDesc;
- (BOOL)disableLocation;
- (void)setDisableLocation:(BOOL)arg1;
- (BOOL)chinaFirst;
- (void)setChinaFirst:(BOOL)arg1;
- (BOOL)openSearch;
- (void)setOpenSearch:(BOOL)arg1;
- (id)bannedCountryCodes;
- (void)setBannedCountryCodes:(id)arg1;
- (id)addressDelegate;
- (void)setAddressDelegate:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
