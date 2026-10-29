@interface EJExternalTouchEvent : NSObject
{
    unsigned char _length; // +0x8
    unsigned char _changed; // +0x9
    unsigned long long _timestamp; // +0x10
    NSArray * _touches; // +0x18
    long long _action; // +0x20
}
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)touches;
- (void)setTouches:(id)arg1;
- (unsigned char)length;
- (void)setLength:(unsigned char)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (unsigned char)changed;
- (void)setChanged:(unsigned char)arg1;
@end

