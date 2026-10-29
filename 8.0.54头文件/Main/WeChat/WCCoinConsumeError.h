@interface WCCoinConsumeError : MMObject
{
    int _errorCode; // +0x8
    unsigned long long _errorType; // +0x10
    NSString * _errorMessage; // +0x18
    PrepareWecoinConsumeResponse * _prepareConsumeResponse; // +0x20
    ConsumeWecoinResponse * _consumeResponse; // +0x28
}
- (id)init;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)prepareConsumeResponse;
- (void)setPrepareConsumeResponse:(id)arg1;
- (id)consumeResponse;
- (void)setConsumeResponse:(id)arg1;
- (void).cxx_destruct;
@end

