@interface MJAIAssetGenerateQueryResult : NSObject
{
    unsigned int _nextQueryInterval; // +0x8
    unsigned int _maxRetryTimes; // +0xc
    NSArray * _aiAssetURLs; // +0x10
    NSData * _rspBuffer; // +0x18
}
- (id)initWithAIAssetURLs:(id)arg1 nextQueryInterval:(unsigned int)arg2 maxRetryTimes:(unsigned int)arg3;
- (id)description;
- (id)aiAssetURLs;
- (unsigned int)nextQueryInterval;
- (unsigned int)maxRetryTimes;
- (id)rspBuffer;
- (void)setRspBuffer:(id)arg1;
- (void).cxx_destruct;
@end
