@interface QBCommonFileRsp : QBJceObjectV2
{
    NSDictionary * jcev2_p_0_o_mCommonFile__b0x9i_M09ONSStringVOQBCommonFileInfo; // +0x8
    NSString * jcev2_p_1_o_sModuleName; // +0x10
    NSString * jcev2_p_2_o_sContentMd5; // +0x18
}
+ (void)initialize;
+ (id)jceType;
- (id)init;
- (void).cxx_destruct;
- (id)mCommonFile;
- (void)setMCommonFile:(id)arg1;
- (id)sModuleName;
- (void)setSModuleName:(id)arg1;
- (id)sContentMd5;
- (void)setSContentMd5:(id)arg1;
@end
