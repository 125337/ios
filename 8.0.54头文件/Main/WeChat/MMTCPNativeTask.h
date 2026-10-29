@interface MMTCPNativeTask : NSObject
{
    IMBNativeInterface * _interface; // +0x8
    NSThread * _thread; // +0x10
}
- (void)run:(long long)arg1;
- (void)update:(id)arg1;
- (IMBNativeInterface *)interface;
- (void)setInterface:(IMBNativeInterface *)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (void).cxx_destruct;
@end

