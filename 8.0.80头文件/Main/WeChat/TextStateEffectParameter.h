@interface TextStateEffectParameter : NSObject
{
    NSString * _cacheKey; // +0x8
    long long _type; // +0x10
}
+ (id)defaultParameter;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (void).cxx_destruct;
@end
