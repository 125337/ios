@interface WCPayCountryCodeItem : WCBaseInfoItem <CountryCodePickerDelegate>
{
    BOOL _hideCode; // +0x40
    id <WCPayCountryCodeItemDelegate> _delegate; // +0x48
    NSArray * _bannedCountryCodes; // +0x50
    NSString * _noCountryCodeTip; // +0x58
    UILabel * _countryLabel; // +0x60
    CountryCodeWrap * _currentCountryCode; // +0x68
}
- (void)setCountryCode:(id)arg1;
- (void)setISOCountryCode:(id)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3 getDefaultCode:(BOOL)arg4;
- (void)initView:(CGRect)arg1;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)reloadCountryLabel;
- (id)countryLabel;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (id)currentAccessibilityDesc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideCode;
- (void)setHideCode:(BOOL)arg1;
- (id)bannedCountryCodes;
- (void)setBannedCountryCodes:(id)arg1;
- (id)noCountryCodeTip;
- (void)setNoCountryCodeTip:(id)arg1;
- (void)setCountryLabel:(id)arg1;
- (id)currentCountryCode;
- (void)setCurrentCountryCode:(id)arg1;
- (void).cxx_destruct;
@end
