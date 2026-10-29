@interface CountryCodePickerDataSource : NSObject
{
    NSArray * m_arrData; // +0x8
    NSMutableDictionary * m_dicKeyToCountryCode; // +0x10
    NSMutableArray * m_arrAllKeys; // +0x18
    NSArray * _bannedCountryCodes; // +0x20
}
- (id)initWithBannedCountryCodes:(id)arg1;
- (id)allKeys;
- (id)countryCodes;
- (id)dicKeyToCountryCode;
- (id)bannedCountryCodes;
- (void)setBannedCountryCodes:(id)arg1;
- (void).cxx_destruct;
@end
