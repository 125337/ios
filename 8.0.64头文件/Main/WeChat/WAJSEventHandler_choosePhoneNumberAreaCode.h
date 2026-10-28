@interface WAJSEventHandler_choosePhoneNumberAreaCode : WAJSEventHandler_BaseEvent <CountryCodePickerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)CountryCodePickerQuitWithoutPick;
@end
