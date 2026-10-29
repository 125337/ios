@interface WeVisModelConfig : NSObject <YYModel, NSCopying>
{
    BOOL _isValid; // +0x8
    BOOL _isNeedUpdate; // +0x9
    NSString * _key; // +0x10
    long long _subType; // +0x18
    long long _compatVersion; // +0x20
    NSString * _name; // +0x28
    NSString * _sha1; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)defaultModelArray;
+ (id)bundleModelArray;
+ (long long)sdkVersion;
- (id)init;
- (id)configFileName;
- (void)copyToOther:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (long long)compatVersion;
- (void)setCompatVersion:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)sha1;
- (void)setSha1:(id)arg1;
- (BOOL)isValid;
- (BOOL)isNeedUpdate;
- (void).cxx_destruct;
@end

