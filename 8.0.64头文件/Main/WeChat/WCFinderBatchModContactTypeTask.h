@interface WCFinderBatchModContactTypeTask : NSObject
{
    BOOL _stopWhenFailed; // +0x8
    BOOL _allSuccess; // +0x9
    int _type; // +0xc
    long long _concurrentCount; // +0x10
    id <WCFinderBatchModContactTypeTaskDelegate> _delegate; // +0x18
    id _context; // +0x20
    NSMutableDictionary * _penddings; // +0x28
    NSMutableDictionary * _settings; // +0x30
    NSMutableArray * _success; // +0x38
    NSMutableArray * _faileds; // +0x40
}
+ (id)taskWithAddContactNames:(id)arg1 deleteContactNames:(id)arg2;
+ (void)appendTaskItem:(id)arg1 type:(int)arg2 toDictionary:(id)arg3;
- (id)init;
- (void)start;
- (void)tryNextBatch;
- (void)handleModContactSuccess:(id)arg1;
- (void)handleModContactFailed:(id)arg1;
- (void)onTaskFinish;
- (long long)concurrentCount;
- (void)setConcurrentCount:(long long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)stopWhenFailed;
- (void)setStopWhenFailed:(BOOL)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)penddings;
- (void)setPenddings:(id)arg1;
- (id)settings;
- (void)setSettings:(id)arg1;
- (id)success;
- (void)setSuccess:(id)arg1;
- (id)faileds;
- (void)setFaileds:(id)arg1;
- (BOOL)allSuccess;
- (void)setAllSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
