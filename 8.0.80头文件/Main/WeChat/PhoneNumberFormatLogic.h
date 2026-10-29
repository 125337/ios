@interface PhoneNumberFormatLogic : MMObject
{
    NSMutableDictionary * m_dicConfig; // +0x8
}
- (void)loadConfig;
- (id)init;
- (BOOL)matchLeadingString:(id)arg1 withRegex:(id)arg2;
- (id)getMatch:(id)arg1 withRegex:(id)arg2;
- (id)getPurePhoneNum:(id)arg1;
- (id)countrFormatConfigForCountryId:(id)arg1;
- (id)formatInfoForPhoneNum:(id)arg1 countryInfo:(id)arg2;
- (id)autoFullLengthNum:(id)arg1 countryInfo:(id)arg2;
- (id)formatedNumForFullNum:(id)arg1 fullNum:(id)arg2;
- (id)formatedNumAfterTrimAutoFillNum:(id)arg1 fullNum:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryInfo:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryIsoCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getPrivacyPhoneNumFromFullPhoneNum:(id)arg1;
- (void).cxx_destruct;
@end
