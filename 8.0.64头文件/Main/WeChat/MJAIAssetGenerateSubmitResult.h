@interface MJAIAssetGenerateSubmitResult : NSObject
{
    unsigned int _nextQueryInterval; // +0x8
    unsigned int _maxRetryTimes; // +0xc
    NSString * _taskID; // +0x10
}
- (id)initWithTaskID:(id)arg1 nextQueryInterval:(unsigned int)arg2 maxRetryTimes:(unsigned int)arg3;
- (id)description;
- (id)taskID;
- (unsigned int)nextQueryInterval;
- (unsigned int)maxRetryTimes;
- (void).cxx_destruct;
@end
