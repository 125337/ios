@interface WCBackgroundTaskRunner : NSObject
{
    _opaque_pthread_t * _pThread; // +0x8
    NSString * _name; // +0x10
    NSThread * _nsThread; // +0x18
}
- (id)initWithName:(id)arg1;
- (void)start;
- (void)routine;
- (id)name;
- (void)setName:(id)arg1;
- (id)nsThread;
- (void)setNsThread:(id)arg1;
- (void).cxx_destruct;
@end

