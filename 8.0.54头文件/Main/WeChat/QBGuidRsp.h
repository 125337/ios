@interface QBGuidRsp : QBJceObjectV2
{
    NSData * jcev2_p_0_o_vGuid; // +0x8
    NSData * jcev2_p_1_o_vValidation; // +0x10
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)vGuid;
- (void)setVGuid:(id)arg1;
- (id)vValidation;
- (void)setVValidation:(id)arg1;
@end

