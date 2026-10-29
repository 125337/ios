@interface MMWebOptimizationDomainControlData : MMObject <PBCoding>
{
    unsigned int _controlExpiredTime; // +0x8
    unsigned int _controlBits; // +0xc
    NSString * _domain; // +0x10
}
+ (void)PBArrayAdd_controlExpiredTime;
+ (void)PBArrayAdd_controlBits;
+ (void)PBArrayAdd_domain;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isInA8keyLiteReqBlockingControl;
- (unsigned int)controlExpiredTime;
- (void)setControlExpiredTime:(unsigned int)arg1;
- (unsigned int)controlBits;
- (void)setControlBits:(unsigned int)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (void).cxx_destruct;
@end

