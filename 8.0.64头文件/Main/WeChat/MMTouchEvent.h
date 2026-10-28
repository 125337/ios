@interface MMTouchEvent : NSObject
{
    float _x; // +0x8
    float _y; // +0xc
    long long _event; // +0x10
}
+ (id)TouchEventWithX:(float)arg1 y:(float)arg2 event:(long long)arg3;
- (id)initWithX:(float)arg1 y:(float)arg2 event:(long long)arg3;
- (id)description;
- (float)x;
- (float)y;
- (long long)event;
@end
