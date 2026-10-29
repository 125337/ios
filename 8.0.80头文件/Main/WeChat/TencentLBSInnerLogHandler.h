@interface TencentLBSInnerLogHandler : NSObject
{
    BOOL _isSetLogBlock; // +0x8
    id /* block */ _logPrintBlock; // +0x10
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)tencentSetLogBlock:(id /* block */)arg1;
- (void)tencentReSetLogBlock;
- (void)tencentLbsPrintLogWith:(id)arg1 withString:(id)arg2;
- (id /* block */)logPrintBlock;
- (void)setLogPrintBlock:(id /* block */)arg1;
- (BOOL)isSetLogBlock;
- (void)setIsSetLogBlock:(BOOL)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
