@interface MJMaterialCacheConfig : NSObject <NSCopying>
{
    NSString * _key; // +0x8
    unsigned long long _scene; // +0x10
    unsigned long long _type; // +0x18
    unsigned long long _capacity; // +0x20
}
+ (id)defaultConfigs;
+ (id)cacheKeyForSegmentType:(unsigned long long)arg1;
- (id)initWithKey:(id)arg1 scene:(unsigned long long)arg2 type:(unsigned long long)arg3 capacity:(unsigned long long)arg4;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)key;
- (unsigned long long)scene;
- (unsigned long long)type;
- (unsigned long long)capacity;
- (void).cxx_destruct;
@end
