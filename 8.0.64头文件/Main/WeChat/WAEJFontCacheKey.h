@interface WAEJFontCacheKey : NSObject <NSCopying>
{
    WAEJFontDescriptor * descriptor; // +0x8
    float lineWidth; // +0x10
    int normalizedContentScale; // +0x14
    unsigned long long hash; // +0x18
}
+ (id)keyWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3 isWgfxMode:(BOOL)arg4;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)normalizedContentScale;
@end
