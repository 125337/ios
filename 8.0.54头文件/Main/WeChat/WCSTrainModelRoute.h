@interface WCSTrainModelRoute : NSObject
{
    BOOL _isLeaf; // +0x8
    BOOL _isExtBooster; // +0x9
    NSString * _key; // +0x10
    unsigned long long _eCond; // +0x18
    NSString * _nsCondSuffix; // +0x20
    unsigned long long _oper; // +0x28
    double _value; // +0x30
    NSString * _trueKey; // +0x38
    NSString * _falseKey; // +0x40
}
- (BOOL)parseCondByCond1:(id)arg1 cond2:(id)arg2;
- (int)binaryValueIfMatchCondSuffix:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (BOOL)isLeaf;
- (void)setIsLeaf:(BOOL)arg1;
- (unsigned long long)eCond;
- (void)setECond:(unsigned long long)arg1;
- (id)nsCondSuffix;
- (void)setNsCondSuffix:(id)arg1;
- (unsigned long long)oper;
- (void)setOper:(unsigned long long)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (id)trueKey;
- (void)setTrueKey:(id)arg1;
- (id)falseKey;
- (void)setFalseKey:(id)arg1;
- (BOOL)isExtBooster;
- (void)setIsExtBooster:(BOOL)arg1;
- (void).cxx_destruct;
@end

