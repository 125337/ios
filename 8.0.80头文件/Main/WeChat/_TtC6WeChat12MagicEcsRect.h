@interface _TtC6WeChat12MagicEcsRect : NSObject
{
    float left; // +0x8
    float top; // +0xc
    float right; // +0x10
    float bottom; // +0x14
}
+ (id)fromJson:(id)arg1;
- (float)left;
- (float)top;
- (float)right;
- (float)bottom;
- (float)width;
- (float)height;
- (BOOL)isValid;
- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;
- (id)toJson;
- (BOOL)isEqual:(id)arg1;
- (long long)hash;
- (id)init;
@end
