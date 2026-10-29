@interface PSTNCheckNumberRespInfo : NSObject
{
    unsigned int _result; // +0x8
    NSString * _PureNumber; // +0x10
    NSString * _CountryCode; // +0x18
}
- (id)PureNumber;
- (void)setPureNumber:(id)arg1;
- (id)CountryCode;
- (void)setCountryCode:(id)arg1;
- (unsigned int)result;
- (void)setResult:(unsigned int)arg1;
- (void).cxx_destruct;
@end

