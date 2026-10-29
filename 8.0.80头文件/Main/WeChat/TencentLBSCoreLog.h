@interface TencentLBSCoreLog : NSObject
{
    id /* block */ _innerCoreLogBlock; // +0x8
    NSDateFormatter * _dateFormtter; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)setInnerCoreLogBlock:(id /* block */)arg1;
- (void)printwithTag:(id)arg1 withDate:(id)arg2 withLog:(id)arg3;
- (id /* block */)innerCoreLogBlock;
- (id)dateFormtter;
- (void)setDateFormtter:(id)arg1;
- (void).cxx_destruct;
@end
