@interface QBBeaconWupEventRecord : QBJceObjectV2
{
    BOOL _jcev2_p_3_r_eventResult; // +0x8
    int _jcev2_p_8_r_eventType; // +0xc
    NSString * _jcev2_p_0_o_apn; // +0x10
    NSString * _jcev2_p_1_o_srcIp; // +0x18
    NSString * _jcev2_p_2_o_eventName; // +0x20
    long long _jcev2_p_4_r_packageSize; // +0x28
    long long _jcev2_p_5_r_cosumeTime; // +0x30
    NSString * _jcev2_p_6_o_eventValue; // +0x38
    long long _jcev2_p_7_r_eventTime; // +0x40
}
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)apn;
- (void)setApn:(id)arg1;
- (id)srcIp;
- (void)setSrcIp:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (BOOL)eventResult;
- (void)setEventResult:(BOOL)arg1;
- (long long)packageSize;
- (void)setPackageSize:(long long)arg1;
- (long long)cosumeTime;
- (void)setCosumeTime:(long long)arg1;
- (id)eventValue;
- (void)setEventValue:(id)arg1;
- (long long)eventTime;
- (void)setEventTime:(long long)arg1;
- (int)eventType;
- (void)setEventType:(int)arg1;
@end
