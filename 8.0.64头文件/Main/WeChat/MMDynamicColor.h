@interface MMDynamicColor : NSObject
{
    long long _normalColor; // +0x8
    long long _darkmodeColor; // +0x10
}
+ (long long)hexFromColor:(id)arg1;
+ (id)fromWCColor:(id)arg1;
+ (id)colorFromARGBString:(id)arg1;
+ (id)DynamicColorWithNormalColor:(long long)arg1 darkmodeColor:(long long)arg2;
- (id)toColor;
- (id)initWithNormalColor:(long long)arg1 darkmodeColor:(long long)arg2;
- (id)description;
- (long long)normalColor;
- (long long)darkmodeColor;
@end
