@interface AccountAppleIDError : NSObject
{
    long long _returnCode; // +0x8
    AccountErrorInfo * _errorInfo; // +0x10
}
- (long long)returnCode;
- (void)setReturnCode:(long long)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (void).cxx_destruct;
@end
