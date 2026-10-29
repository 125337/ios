@interface MttWkMachineceInfoByVerReq : QBJceObjectV2
{
    BOOL jcev2_p_1_o_b64; // +0x8
    NSString * jcev2_p_0_o_sSysVer; // +0x10
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)sSysVer;
- (void)setSSysVer:(id)arg1;
- (BOOL)b64;
- (void)setB64:(BOOL)arg1;
@end
