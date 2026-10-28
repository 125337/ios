@interface MMLimitedModeDataPB : MMObject <PBCoding>
{
    NSMutableDictionary * _agreenAuthorizationDic; // +0x8
    NSMutableDictionary * _becomeGuardianDic; // +0x10
}
+ (void)PBArrayAdd_agreenAuthorizationDic;
+ (void)PBArrayAdd_becomeGuardianDic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)agreenAuthorizationDic;
- (void)setAgreenAuthorizationDic:(id)arg1;
- (id)becomeGuardianDic;
- (void)setBecomeGuardianDic:(id)arg1;
- (void).cxx_destruct;
@end
