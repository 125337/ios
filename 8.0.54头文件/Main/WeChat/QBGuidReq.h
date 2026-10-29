@interface QBGuidReq : QBJceObjectV2
{
    NSString * jcev2_p_0_o_sQua; // +0x8
    NSString * jcev2_p_1_o_sImei; // +0x10
    NSString * jcev2_p_2_o_sImsi; // +0x18
    NSString * jcev2_p_3_o_sVenderId; // +0x20
    NSString * jcev2_p_4_o_sAdId; // +0x28
    NSData * jcev2_p_5_o_vValidation; // +0x30
    long long jcev2_p_6_o_eRequestTriggeredType; // +0x38
    NSString * jcev2_p_7_o_sMac; // +0x40
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)sQua;
- (void)setSQua:(id)arg1;
- (id)sImei;
- (void)setSImei:(id)arg1;
- (id)sImsi;
- (void)setSImsi:(id)arg1;
- (id)sVenderId;
- (void)setSVenderId:(id)arg1;
- (id)sAdId;
- (void)setSAdId:(id)arg1;
- (id)vValidation;
- (void)setVValidation:(id)arg1;
- (long long)eRequestTriggeredType;
- (void)setERequestTriggeredType:(long long)arg1;
- (id)sMac;
- (void)setSMac:(id)arg1;
@end

