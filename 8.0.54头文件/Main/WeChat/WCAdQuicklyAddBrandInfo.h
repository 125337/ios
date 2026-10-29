@interface WCAdQuicklyAddBrandInfo : NSObject <NSCoding>
{
    BOOL _brandDirectJump; // +0x8
    NSString * _brandUsername; // +0x10
    NSString * _brandName; // +0x18
    NSString * _brandHeadImageUrl; // +0x20
    NSString * _brandDesc; // +0x28
    NSString * _compatibleJumpUrl; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)brandUsername;
- (void)setBrandUsername:(id)arg1;
- (id)brandName;
- (void)setBrandName:(id)arg1;
- (id)brandHeadImageUrl;
- (void)setBrandHeadImageUrl:(id)arg1;
- (id)brandDesc;
- (void)setBrandDesc:(id)arg1;
- (id)compatibleJumpUrl;
- (void)setCompatibleJumpUrl:(id)arg1;
- (BOOL)brandDirectJump;
- (void)setBrandDirectJump:(BOOL)arg1;
- (void).cxx_destruct;
@end

