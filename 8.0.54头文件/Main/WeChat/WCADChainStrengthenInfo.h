@interface WCADChainStrengthenInfo : NSObject
{
    int wordingType; // +0x8
    NSString * directWording; // +0x10
    NSString * replaceWording; // +0x18
    NSString * wordingLink; // +0x20
    NSMutableArray * arrUserName; // +0x28
    NSString * wordingComplexString; // +0x30
    unsigned int wordingComplexExchangeValue; // +0x38
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isNormalWordingValid;
- (BOOL)isComplexWordingValid;
- (int)wordingType;
- (void)setWordingType:(int)arg1;
- (id)directWording;
- (void)setDirectWording:(id)arg1;
- (id)replaceWording;
- (void)setReplaceWording:(id)arg1;
- (id)wordingLink;
- (void)setWordingLink:(id)arg1;
- (id)arrUserName;
- (void)setArrUserName:(id)arg1;
- (id)wordingComplexString;
- (void)setWordingComplexString:(id)arg1;
- (unsigned int)wordingComplexExchangeValue;
- (void)setWordingComplexExchangeValue:(unsigned int)arg1;
- (void).cxx_destruct;
@end

