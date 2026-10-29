@interface QBBeaconWupCommonStrategy : QBJceObjectV2
{
    int _jcev2_p_1_r_queryInterval; // +0x8
    NSArray * _jcev2_p_0_o_moduleList__b0x9i_VOQBBeaconWupModuleStrategy; // +0x10
    NSString * _jcev2_p_2_o_url; // +0x18
    NSDictionary * _jcev2_p_3_o_cloudParas__b0x9i_M09ONSStringONSString; // +0x20
}
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)moduleList;
- (void)setModuleList:(id)arg1;
- (int)queryInterval;
- (void)setQueryInterval:(int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)cloudParas;
- (void)setCloudParas:(id)arg1;
@end

