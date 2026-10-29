@interface QBPreferencesRsp : QBJceObjectV2
{
    int jcev2_p_0_r_iRspTime; // +0x8
    NSArray * jcev2_p_1_o_vPreferencesKeyValue__b0x9i_VOQBPreferencesKeyValue; // +0x10
    NSString * jcev2_p_2_o_sContentMd5; // +0x18
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (int)iRspTime;
- (void)setIRspTime:(int)arg1;
- (id)vPreferencesKeyValue;
- (void)setVPreferencesKeyValue:(id)arg1;
- (id)sContentMd5;
- (void)setSContentMd5:(id)arg1;
@end

