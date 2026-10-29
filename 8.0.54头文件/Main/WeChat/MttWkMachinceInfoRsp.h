@interface MttWkMachinceInfoRsp : QBJceObjectV2
{
    int jcev2_p_0_o_rspCode; // +0x8
    MttWkMachinceInfo * jcev2_p_1_o_stWkMachinceInfo; // +0x10
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (int)rspCode;
- (void)setRspCode:(int)arg1;
- (id)stWkMachinceInfo;
- (void)setStWkMachinceInfo:(id)arg1;
@end

