@interface QBCommonFileReq : QBJceObjectV2
{
    NSString * jcev2_p_0_r_sGUID; // +0x8
    NSString * jcev2_p_1_r_sQUA2; // +0x10
    NSString * jcev2_p_2_o_sModuleName; // +0x18
    NSString * jcev2_p_3_o_sContentMd5; // +0x20
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)sGUID;
- (void)setSGUID:(id)arg1;
- (id)sQUA2;
- (void)setSQUA2:(id)arg1;
- (id)sModuleName;
- (void)setSModuleName:(id)arg1;
- (id)sContentMd5;
- (void)setSContentMd5:(id)arg1;
@end
