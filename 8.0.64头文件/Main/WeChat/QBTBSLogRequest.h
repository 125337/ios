@interface QBTBSLogRequest : QBJceObjectV2
{
    NSString * jcev2_p_0_r_sGUID; // +0x8
    NSString * jcev2_p_1_r_sStr; // +0x10
    NSString * jcev2_p_2_o_sRandomKey; // +0x18
    NSString * jcev2_p_3_o_sBusinessID; // +0x20
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)sGUID;
- (void)setSGUID:(id)arg1;
- (id)sStr;
- (void)setSStr:(id)arg1;
- (id)sRandomKey;
- (void)setSRandomKey:(id)arg1;
- (id)sBusinessID;
- (void)setSBusinessID:(id)arg1;
@end
