@interface CountryFormatConfig : MMObject
{
    NSString * nsCountryCode; // +0x8
    NSString * nsISOCode; // +0x10
    NSMutableArray * arrayFormats; // +0x18
    unsigned int uiMinLength; // +0x20
    unsigned int uiMaxLength; // +0x24
    BOOL bHasLeading; // +0x28
}
- (id)init;
- (id)nsCountryCode;
- (void)setNsCountryCode:(id)arg1;
- (id)nsISOCode;
- (void)setNsISOCode:(id)arg1;
- (id)arrayFormats;
- (void)setArrayFormats:(id)arg1;
- (unsigned int)uiMinLength;
- (void)setUiMinLength:(unsigned int)arg1;
- (unsigned int)uiMaxLength;
- (void)setUiMaxLength:(unsigned int)arg1;
- (BOOL)bHasLeading;
- (void)setBHasLeading:(BOOL)arg1;
- (void).cxx_destruct;
@end
