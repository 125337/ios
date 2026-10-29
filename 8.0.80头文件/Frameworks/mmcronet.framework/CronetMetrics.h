@interface CronetMetrics : NSURLSessionTaskMetrics
{
    NSArray * _transactionMetrics; // +0x8
}
- (id)init;
- (id)transactionMetrics;
- (void)setTransactionMetrics:(id)arg1;
- (void).cxx_destruct;
@end
