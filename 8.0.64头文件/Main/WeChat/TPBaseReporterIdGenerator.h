@interface TPBaseReporterIdGenerator : NSObject
{
    int _instanceID; // +0x8
    TPRecursiveLock * _lock; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (int)reporterInstanceBaseID;
- (id)lock;
- (void)setLock:(id)arg1;
- (int)instanceID;
- (void)setInstanceID:(int)arg1;
- (void).cxx_destruct;
@end
