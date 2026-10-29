@interface FlutterUIPressProxy : NSObject
{
    UIPress * _press; // +0x8
    UIEvent * _event; // +0x10
}
- (id)initWithPress:(id)arg1 withEvent:(id)arg2;
- (long long)phase;
- (id)key;
- (long long)type;
- (double)timestamp;
- (id)press;
- (id)event;
@end

