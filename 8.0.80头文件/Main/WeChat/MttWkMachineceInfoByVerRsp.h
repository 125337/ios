@interface MttWkMachineceInfoByVerRsp : QBJceObjectV2
{
    int jcev2_p_0_o_iRetCode; // +0x8
    NSArray * jcev2_p_1_o_vWkMachinceInfo__b0x9i_VOMttWkMachinceInfo; // +0x10
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (int)iRetCode;
- (void)setIRetCode:(int)arg1;
- (id)vWkMachinceInfo;
- (void)setVWkMachinceInfo:(id)arg1;
@end
