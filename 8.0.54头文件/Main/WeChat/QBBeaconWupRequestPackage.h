@interface QBBeaconWupRequestPackage : QBJceObjectV2
{
    char _jcev2_p_0_r_platformId; // +0x8
    char _jcev2_p_7_r_encryType; // +0x9
    char _jcev2_p_8_r_zipType; // +0xa
    int _jcev2_p_5_r_cmd; // +0xc
    NSString * _jcev2_p_1_o_appkey; // +0x10
    NSString * _jcev2_p_2_o_appVersion; // +0x18
    NSString * _jcev2_p_3_o_sdkId; // +0x20
    NSString * _jcev2_p_4_o_sdkVersion; // +0x28
    NSData * _jcev2_p_6_o_sBuffer; // +0x30
    NSString * _jcev2_p_9_o_model; // +0x38
    NSString * _jcev2_p_10_o_osVersion; // +0x40
    NSString * _jcev2_p_11_o_reserved; // +0x48
}
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (char)platformId;
- (void)setPlatformId:(char)arg1;
- (id)appkey;
- (void)setAppkey:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)sdkId;
- (void)setSdkId:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (int)cmd;
- (void)setCmd:(int)arg1;
- (id)sBuffer;
- (void)setSBuffer:(id)arg1;
- (char)encryType;
- (void)setEncryType:(char)arg1;
- (char)zipType;
- (void)setZipType:(char)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)osVersion;
- (void)setOsVersion:(id)arg1;
- (id)reserved;
- (void)setReserved:(id)arg1;
@end

