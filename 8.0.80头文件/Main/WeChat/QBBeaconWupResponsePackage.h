@interface QBBeaconWupResponsePackage : QBJceObjectV2
{
    char _jcev2_p_0_r_result; // +0x8
    char _jcev2_p_4_r_encryType; // +0x9
    char _jcev2_p_5_r_zipType; // +0xa
    int _jcev2_p_1_r_cmd; // +0xc
    NSData * _jcev2_p_2_o_sBuffer; // +0x10
    NSString * _jcev2_p_3_o_srcGatewayIp; // +0x18
    long long _jcev2_p_6_r_serverTime; // +0x20
    NSString * _jcev2_p_7_o_encryKey; // +0x28
    NSString * _jcev2_p_8_o_encryPublicKey; // +0x30
}
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (char)result;
- (void)setResult:(char)arg1;
- (int)cmd;
- (void)setCmd:(int)arg1;
- (id)sBuffer;
- (void)setSBuffer:(id)arg1;
- (id)srcGatewayIp;
- (void)setSrcGatewayIp:(id)arg1;
- (char)encryType;
- (void)setEncryType:(char)arg1;
- (char)zipType;
- (void)setZipType:(char)arg1;
- (long long)serverTime;
- (void)setServerTime:(long long)arg1;
- (id)encryKey;
- (void)setEncryKey:(id)arg1;
- (id)encryPublicKey;
- (void)setEncryPublicKey:(id)arg1;
@end
