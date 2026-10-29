@interface QBDomainWhiteListRsp : QBJceObjectV2
{
    int jcev2_p_0_r_iDomainTime; // +0x8
    NSDictionary * jcev2_p_1_o_mTypeDomain__b0x9i_M09ONSNumberVONSString; // +0x10
    NSString * jcev2_p_2_o_sContentMd5; // +0x18
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (int)iDomainTime;
- (void)setIDomainTime:(int)arg1;
- (id)mTypeDomain;
- (void)setMTypeDomain:(id)arg1;
- (id)sContentMd5;
- (void)setSContentMd5:(id)arg1;
@end
