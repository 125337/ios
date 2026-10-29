@interface MMNexusResourceBinaryRegistry : NSObject
{
    NSMutableDictionary * _stores; // +0x8
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)registerStore:(id)arg1;
- (void)unregisterInstanceId:(id)arg1;
- (id)storeForInstanceId:(id)arg1;
- (id)stores;
- (void)setStores:(id)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
