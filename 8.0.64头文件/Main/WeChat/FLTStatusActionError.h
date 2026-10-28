@interface FLTStatusActionError : NSObject
{
    long long _errorCode; // +0x8
    NSString * _errorDescription; // +0x10
}
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorDescription;
- (void)setErrorDescription:(id)arg1;
- (void).cxx_destruct;
@end
