@interface QBRouteIpListRsp : QBJceObjectV2
{
    char jcev2_p_2_o_bProxy; // +0x8
    int jcev2_p_4_o_iSubType; // +0xc
    NSArray * jcev2_p_0_r_vIPInfos__b0x9i_VOQBRouteJoinIPInfo; // +0x10
    NSString * jcev2_p_1_o_sApn; // +0x18
    NSString * jcev2_p_3_o_sTypeName; // +0x20
    NSString * jcev2_p_5_o_sExtraInfo; // +0x28
    NSString * jcev2_p_6_o_sMCCMNC; // +0x30
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)vIPInfos;
- (void)setVIPInfos:(id)arg1;
- (id)sApn;
- (void)setSApn:(id)arg1;
- (char)bProxy;
- (void)setBProxy:(char)arg1;
- (id)sTypeName;
- (void)setSTypeName:(id)arg1;
- (int)iSubType;
- (void)setISubType:(int)arg1;
- (id)sExtraInfo;
- (void)setSExtraInfo:(id)arg1;
- (id)sMCCMNC;
- (void)setSMCCMNC:(id)arg1;
@end

