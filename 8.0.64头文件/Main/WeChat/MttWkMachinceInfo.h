@interface MttWkMachinceInfo : QBJceObjectV2
{
    BOOL jcev2_p_1_o_is64os; // +0x8
    NSString * jcev2_p_0_r_phoneID; // +0x10
    NSString * jcev2_p_2_o_segName; // +0x18
    NSString * jcev2_p_3_o_sectionName; // +0x20
    long long jcev2_p_4_o_offset; // +0x28
    NSString * jcev2_p_5_o_rootMemory; // +0x30
    long long jcev2_p_6_o_checkOffset; // +0x38
    NSString * jcev2_p_7_o_checkClass; // +0x40
    NSString * jcev2_p_8_o_checkMethod; // +0x48
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)phoneID;
- (void)setPhoneID:(id)arg1;
- (BOOL)is64os;
- (void)setIs64os:(BOOL)arg1;
- (id)segName;
- (void)setSegName:(id)arg1;
- (id)sectionName;
- (void)setSectionName:(id)arg1;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (id)rootMemory;
- (void)setRootMemory:(id)arg1;
- (long long)checkOffset;
- (void)setCheckOffset:(long long)arg1;
- (id)checkClass;
- (void)setCheckClass:(id)arg1;
- (id)checkMethod;
- (void)setCheckMethod:(id)arg1;
@end
