@interface MMLiveResourceFetcherTaskStatusInfo : NSObject
{
    atomic<unsigned long long> _status; // +0x8
    atomic<unsigned long long> _faultEventId; // +0x10
    atomic<bool> _cacheMiss; // +0x18
    NSRecursiveLock * _lock; // +0x20
    struct _fetchingMetadataStorage; // +0x28
}
- (id)init;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)faultEventId;
- (void)setFaultEventId:(unsigned long long)arg1;
- (BOOL)cacheMiss;
- (void)setCacheMiss:(BOOL)arg1;
- (unsigned long long)faultingFlowAction;
- (struct)fetchingMetadata;
- (void)acceptTask;
- (void)startFetchingWithSpearheadTaskId:(id)arg1 asPrimaryTask:(BOOL)arg2;
- (void)completeFetchingWithCdnStatusCode:(int)arg1;
- (void)completeTask;
- (void)faultTaskWithEventId:(unsigned long long)arg1;
- (void)cancelTask;
- (struct)fetchingMetadataStorage;
- (void)setFetchingMetadataStorage:(struct)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
