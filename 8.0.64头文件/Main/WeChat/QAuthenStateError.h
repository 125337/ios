@interface QAuthenStateError : NSObject
{
    TBMapCommonCounter * _retryCounter; // +0x8
    NSMutableDictionary * _errorInfo; // +0x10
}
- (id)init;
- (id)toDictionary;
- (id)retryCounter;
- (void)setRetryCounter:(id)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (void).cxx_destruct;
@end
