@interface PhoneNumberFormatInfo : MMObject
{
    NSString * leadingDigitsRegex; // +0x8
    NSString * pattern; // +0x10
    NSString * formatRegex; // +0x18
}
- (id)init;
- (id)leadingDigitsRegex;
- (void)setLeadingDigitsRegex:(id)arg1;
- (id)pattern;
- (void)setPattern:(id)arg1;
- (id)formatRegex;
- (void)setFormatRegex:(id)arg1;
- (void).cxx_destruct;
@end

