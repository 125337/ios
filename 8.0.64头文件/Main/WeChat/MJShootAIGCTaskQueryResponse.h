@interface MJShootAIGCTaskQueryResponse : NSObject
{
    BOOL _isFailed; // +0x8
    unsigned int _estimatedAigcWaitTime; // +0xc
    unsigned int _completionPercentage; // +0x10
    OMJAIGCQueryResponse * _queryResponse; // +0x18
}
- (id)queryResponse;
- (void)setQueryResponse:(id)arg1;
- (unsigned int)estimatedAigcWaitTime;
- (void)setEstimatedAigcWaitTime:(unsigned int)arg1;
- (unsigned int)completionPercentage;
- (void)setCompletionPercentage:(unsigned int)arg1;
- (BOOL)isFailed;
- (void)setIsFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
