@interface PwdNewSetValidatorResult : NSObject
{
    long long _errorType; // +0x8
    NSString * _errorMessage; // +0x10
}
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (void).cxx_destruct;
@end
