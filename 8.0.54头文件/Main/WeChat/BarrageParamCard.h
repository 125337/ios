@interface BarrageParamCard : NSObject
{
    BOOL _isSelect; // +0x8
    unsigned long long _cardType; // +0x10
    NSString * _cardTitle; // +0x18
    double _paramValue; // +0x20
}
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (double)paramValue;
- (void)setParamValue:(double)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

