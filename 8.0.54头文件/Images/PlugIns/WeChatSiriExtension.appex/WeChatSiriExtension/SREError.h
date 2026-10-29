@interface SREError : NSObject
{
    BOOL _noticed; // +0x8
    long long _errorCode; // +0x10
    NSString * _errorMessage; // +0x18
    NSDictionary * _userInfo; // +0x20
}
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorFromError:(id)arg1;
+ (id)errorForCancel;
+ (id)parameterError;
+ (id)unknownError;
+ (id)unknownErrorWithCode:(long long)arg1;
- (id)description;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)noticed;
- (void)setNoticed:(BOOL)arg1;
- (void).cxx_destruct;
@end

