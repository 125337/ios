@interface QBDNSExecutor : NSObject
{
    NSCondition * _condition; // +0x8
}
+ (id)registerExecutorName:(id)arg1;
- (id)init;
- (id)executeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
