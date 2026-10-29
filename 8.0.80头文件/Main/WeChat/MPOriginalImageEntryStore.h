@interface MPOriginalImageEntryStore : NSObject
{
    NSObject<OS_dispatch_queue> * _serviceQueue; // +0x8
    NSObject<OS_dispatch_queue> * _ioQueue; // +0x10
    MPOriginalImageTileCache * _tileCache; // +0x18
    MPOriginalImageDecoder * _decoder; // +0x20
    NSMutableDictionary * _entries; // +0x28
}
- (id)initWithTileCache:(id)arg1 decoder:(id)arg2;
- (id)entryForKey:(id)arg1;
- (void)setEntry:(id)arg1 forKey:(id)arg2;
- (void)removeEntryForKey:(id)arg1;
- (void)applySource:(id)arg1 toEntry:(id)arg2;
- (void)markEntryReady:(id)arg1;
- (id)makeReadyEntryWithSource:(id)arg1 key:(id)arg2 url:(id)arg3;
- (void)failEntry:(id)arg1 code:(long long)arg2 msg:(id)arg3;
- (id)probeSourceForKey:(id)arg1;
- (id)resolveEntryByProbingDiskForKey:(id)arg1 rebuildURL:(id)arg2 probeDiskOnFailed:(BOOL)arg3;
- (id)serviceQueue;
- (void)setServiceQueue:(id)arg1;
- (id)ioQueue;
- (void)setIoQueue:(id)arg1;
- (id)tileCache;
- (void)setTileCache:(id)arg1;
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (id)entries;
- (void)setEntries:(id)arg1;
- (void).cxx_destruct;
@end
