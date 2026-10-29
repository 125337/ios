@interface FlutterUIPressProxy : NSObject
{
     press; // +0x8
     event; // +0x10
}
- (id)initWithPress:(id)arg1 event:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)phase;
- (id)key;
- (long long)type;
- (double)timestamp;
- (void).cxx_destruct;
@end
