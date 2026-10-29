@interface MMNexusResourceBinaryStore : NSObject
{
    NSString * _instanceId; // +0x8
    NSMutableDictionary * _entries; // +0x10
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x18
}
- (id)initWithInstanceId:(id)arg1;
- (void)setEntry:(id)arg1 forKey:(id)arg2;
- (id)entryForKey:(id)arg1;
- (id)urlStringForKey:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)entries;
- (void)setEntries:(id)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
