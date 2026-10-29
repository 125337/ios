@interface WCPayNetworkError : NSObject
{
    long long _errorCode; // +0x8
    NSString * _errorMessage; // +0x10
    NSDictionary * _userInfo; // +0x18
    NSString * _errorDetailUrl; // +0x20
}
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
- (id)convertToNSError;
- (id)description;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)errorDetailUrl;
- (void)setErrorDetailUrl:(id)arg1;
- (void).cxx_destruct;
@end

