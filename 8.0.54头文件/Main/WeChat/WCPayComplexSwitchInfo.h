@interface WCPayComplexSwitchInfo : NSObject <PBCoding>
{
    WCPayBindNewCardSwitch * _bind_newcard_switch; // +0x8
}
+ (void)PBArrayAdd_bind_newcard_switch;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (void)genFromDic:(id)arg1;
- (id)bind_newcard_switch;
- (void)setBind_newcard_switch:(id)arg1;
- (void).cxx_destruct;
@end

