@interface QBTBSLogResponse : QBJceObjectV2
{
    long long jcev2_p_0_r_eRet; // +0x8
    NSString * jcev2_p_1_o_sMsg; // +0x10
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (long long)eRet;
- (void)setERet:(long long)arg1;
- (id)sMsg;
- (void)setSMsg:(id)arg1;
@end
