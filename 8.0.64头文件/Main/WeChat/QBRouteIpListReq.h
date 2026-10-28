@interface QBRouteIpListReq : QBJceObjectV2
{
    int jcev2_p_3_o_iSubType; // +0x8
    QBWupUserBase * jcev2_p_0_r_stUB; // +0x10
    NSArray * jcev2_p_1_r_vIPType__b0x9i_VONSNumber; // +0x18
    NSString * jcev2_p_2_o_sTypeName; // +0x20
    NSString * jcev2_p_4_o_sExtraInfo; // +0x28
    NSString * jcev2_p_5_o_sMCCMNC; // +0x30
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)stUB;
- (void)setStUB:(id)arg1;
- (id)vIPType;
- (void)setVIPType:(id)arg1;
- (id)sTypeName;
- (void)setSTypeName:(id)arg1;
- (int)iSubType;
- (void)setISubType:(int)arg1;
- (id)sExtraInfo;
- (void)setSExtraInfo:(id)arg1;
- (id)sMCCMNC;
- (void)setSMCCMNC:(id)arg1;
@end
