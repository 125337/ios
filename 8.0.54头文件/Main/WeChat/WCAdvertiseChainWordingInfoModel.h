@interface WCAdvertiseChainWordingInfoModel : NSObject
{
    int _wordingType; // +0x8
    unsigned int _wordingComplexExchangeValue; // +0xc
    NSString * _wording; // +0x10
    NSString * _wordingRepIOS; // +0x18
    NSString * _wordingRepAndroid; // +0x20
    NSString * _wordingLink; // +0x28
    NSArray * _userNameList; // +0x30
    NSString * _wordingComplexString; // +0x38
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)isValid;
- (int)wordingType;
- (void)setWordingType:(int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)wordingRepIOS;
- (void)setWordingRepIOS:(id)arg1;
- (id)wordingRepAndroid;
- (void)setWordingRepAndroid:(id)arg1;
- (id)wordingLink;
- (void)setWordingLink:(id)arg1;
- (id)userNameList;
- (void)setUserNameList:(id)arg1;
- (id)wordingComplexString;
- (void)setWordingComplexString:(id)arg1;
- (unsigned int)wordingComplexExchangeValue;
- (void)setWordingComplexExchangeValue:(unsigned int)arg1;
- (void).cxx_destruct;
@end

