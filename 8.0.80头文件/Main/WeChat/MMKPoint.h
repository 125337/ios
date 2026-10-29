@interface MMKPoint : NSObject
{
    float _x; // +0x8
    float _y; // +0xc
}
+ (id)KPointWithX:(float)arg1 y:(float)arg2;
- (id)initWithX:(float)arg1 y:(float)arg2;
- (id)description;
- (float)x;
- (float)y;
@end
