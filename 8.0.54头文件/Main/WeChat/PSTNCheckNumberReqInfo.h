@interface PSTNCheckNumberReqInfo : NSObject
{
    unsigned int _DialScene; // +0x8
    NSString * _PureNumber; // +0x10
    NSString * _ClientCountry; // +0x18
    NSString * _LastCountry; // +0x20
    NSString * _SimCountry; // +0x28
    NSString * _OsCountry; // +0x30
}
- (id)PureNumber;
- (void)setPureNumber:(id)arg1;
- (id)ClientCountry;
- (void)setClientCountry:(id)arg1;
- (id)LastCountry;
- (void)setLastCountry:(id)arg1;
- (id)SimCountry;
- (void)setSimCountry:(id)arg1;
- (id)OsCountry;
- (void)setOsCountry:(id)arg1;
- (unsigned int)DialScene;
- (void)setDialScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

