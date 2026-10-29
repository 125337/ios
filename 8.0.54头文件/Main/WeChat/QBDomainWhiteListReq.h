@interface QBDomainWhiteListReq : QBJceObjectV2
{
    int jcev2_p_0_r_iDomainTime; // +0x8
    NSString * jcev2_p_1_r_sQUA; // +0x10
    NSString * jcev2_p_2_r_sGUID; // +0x18
    NSString * jcev2_p_3_o_sQua2ExInfo; // +0x20
    NSString * jcev2_p_4_o_sContentMd5; // +0x28
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (int)iDomainTime;
- (void)setIDomainTime:(int)arg1;
- (id)sQUA;
- (void)setSQUA:(id)arg1;
- (id)sGUID;
- (void)setSGUID:(id)arg1;
- (id)sQua2ExInfo;
- (void)setSQua2ExInfo:(id)arg1;
- (id)sContentMd5;
- (void)setSContentMd5:(id)arg1;
@end

