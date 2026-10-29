@interface WCFullPhoneNumInputHelper : NSObject <WCBaseInfoItemDelegate, CountryCodePickerDelegate>
{
    PhoneNumberFormatLogic * _phoneNumberFormatLogic; // +0x8
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x10
    id <WCBaseInfoItemDelegate> _itemDelegate; // +0x18
    WCRedesignButtonItem * _regionButtonItem; // +0x20
    WCRedesignTextItem * _phoneNumberTextItem; // +0x28
    CountryCodeWrap * _countryCodeWrap; // +0x30
    id /* block */ _onSetNeedsLayout; // +0x38
    id /* block */ _onCountryCodeChanged; // +0x40
}
- (id)init;
- (void)config;
- (void)configItemsMaxTitleWidth;
- (id)phoneNumberFormatLogic;
- (void)setCountryISOCode:(id)arg1;
- (id)countryISOCode;
- (void)setCountryCodeWrap:(id)arg1;
- (void)formatPhoneNumber;
- (id)phoneNumText;
- (id)purePhoneNum;
- (id)countryCode;
- (id)formatedFullPhoneNum;
- (void)callSetNeedsLayout;
- (void)showCountryCodePicker;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (BOOL)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id)itemDelegate;
- (void)setItemDelegate:(id)arg1;
- (id)regionButtonItem;
- (void)setRegionButtonItem:(id)arg1;
- (id)phoneNumberTextItem;
- (void)setPhoneNumberTextItem:(id)arg1;
- (id)countryCodeWrap;
- (id /* block */)onSetNeedsLayout;
- (void)setOnSetNeedsLayout:(id /* block */)arg1;
- (id /* block */)onCountryCodeChanged;
- (void)setOnCountryCodeChanged:(id /* block */)arg1;
- (void).cxx_destruct;
@end

