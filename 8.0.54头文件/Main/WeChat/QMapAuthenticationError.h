@interface QMapAuthenticationError : NSObject
{
    unsigned long long _errorOp; // +0x8
    unsigned long long _errorType; // +0x10
    long long _retCode; // +0x18
}
- (unsigned long long)errorOp;
- (void)setErrorOp:(unsigned long long)arg1;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg1;
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
@end

