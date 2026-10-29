@interface WCADAtFriendCompatible : NSObject <NSCoding>
{
    unsigned int _minVersion; // +0x8
    unsigned int _maxVersion; // +0xc
    NSString * _jumpUrl; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isCompatible;
- (unsigned int)minVersion;
- (void)setMinVersion:(unsigned int)arg1;
- (unsigned int)maxVersion;
- (void)setMaxVersion:(unsigned int)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
