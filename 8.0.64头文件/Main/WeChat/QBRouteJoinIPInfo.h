@interface QBRouteJoinIPInfo : QBJceObjectV2
{
    int jcev2_p_2_o_iTotalPollNum; // +0x8
    int jcev2_p_3_o_iLifePeriod; // +0xc
    long long jcev2_p_0_o_eIPType; // +0x10
    NSArray * jcev2_p_1_o_vIPList__b0x9i_VONSString; // +0x18
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (long long)eIPType;
- (void)setEIPType:(long long)arg1;
- (id)vIPList;
- (void)setVIPList:(id)arg1;
- (int)iTotalPollNum;
- (void)setITotalPollNum:(int)arg1;
- (int)iLifePeriod;
- (void)setILifePeriod:(int)arg1;
@end
