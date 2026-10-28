@interface QBBeaconWupModuleStrategy : QBJceObjectV2
{
    char _jcev2_p_0_r_mId; // +0x8
    char _jcev2_p_1_r_onOff; // +0x9
    NSString * _jcev2_p_2_o_url; // +0x10
    NSDictionary * _jcev2_p_3_o_detail__b0x9i_M09ONSStringONSString; // +0x18
    NSArray * _jcev2_p_4_o_preventEventCode__b0x9i_VONSString; // +0x20
    NSArray * _jcev2_p_6_o_sampleEvent__b0x9i_VONSString; // +0x28
}
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (char)mId;
- (void)setMId:(char)arg1;
- (char)onOff;
- (void)setOnOff:(char)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)preventEventCode;
- (void)setPreventEventCode:(id)arg1;
- (id)sampleEvent;
- (void)setSampleEvent:(id)arg1;
@end
