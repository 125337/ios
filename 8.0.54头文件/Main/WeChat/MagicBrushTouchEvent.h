@interface MagicBrushTouchEvent : NSObject
{
    unsigned char _changed; // +0x8
    unsigned long long _timestamp; // +0x10
    NSArray * _touches; // +0x18
    long long _action; // +0x20
}
+ (id)fromUITouch:(id)arg1 withEvent:(id)arg2 andAction:(long long)arg3 inView:(id)arg4;
- (id)description;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)touches;
- (void)setTouches:(id)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (unsigned char)changed;
- (void)setChanged:(unsigned char)arg1;
- (void).cxx_destruct;
@end

