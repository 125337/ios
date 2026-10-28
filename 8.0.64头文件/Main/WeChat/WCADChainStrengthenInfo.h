@interface WCADChainStrengthenInfo : NSObject
{
    int wordingType; // +0x8
    NSString * directWording; // +0x10
    NSString * replaceWording; // +0x18
    NSString * wordingLink; // +0x20
    NSMutableArray * arrUserName; // +0x28
    NSString * wordingComplexString; // +0x30
    unsigned int wordingComplexExchangeValue; // +0x38
    int _topMargin; // +0x3c
    int _bottomMargin; // +0x40
    WCAdColorInfo * _textColor; // +0x48
    NSString * _reportDataStr; // +0x50
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
- (int)topMargin;
- (void)setTopMargin:(int)arg1;
- (int)bottomMargin;
- (void)setBottomMargin:(int)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)reportDataStr;
- (void)setReportDataStr:(id)arg1;
- (void).cxx_destruct;
@end
