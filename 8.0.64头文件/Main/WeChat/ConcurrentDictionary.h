@interface ConcurrentDictionary : NSObject
{
    NSMutableDictionary * _dictionary; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (id)init;
- (void)put:(id)arg1 forValue:(id)arg2;
- (id)get:(id)arg1;
- (void)remove:(id)arg1;
- (BOOL)has:(id)arg1;
- (id)take:(id)arg1;
- (void).cxx_destruct;
@end
