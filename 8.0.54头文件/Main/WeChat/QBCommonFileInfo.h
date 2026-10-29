@interface QBCommonFileInfo : QBJceObjectV2
{
    NSString * jcev2_p_0_r_sFileName; // +0x8
    NSString * jcev2_p_1_r_sFileUrl; // +0x10
    NSString * jcev2_p_2_o_sFileContentMd5; // +0x18
    NSString * jcev2_p_3_o_sSignature; // +0x20
    NSString * jcev2_p_4_o_sEncryptAlgorithm; // +0x28
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)sFileName;
- (void)setSFileName:(id)arg1;
- (id)sFileUrl;
- (void)setSFileUrl:(id)arg1;
- (id)sFileContentMd5;
- (void)setSFileContentMd5:(id)arg1;
- (id)sSignature;
- (void)setSSignature:(id)arg1;
- (id)sEncryptAlgorithm;
- (void)setSEncryptAlgorithm:(id)arg1;
@end

