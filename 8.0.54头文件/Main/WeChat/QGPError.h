@interface QGPError : QGPReturn
{
    long long _errorCode; // +0x8
    NSString * _errorMsg; // +0x10
}
+ (id)errorMsgForCode:(long long)arg1;
+ (id)createErrorCode:(long long)arg1 errorMsg:(id)arg2;
+ (id)jsonParseError:(id)arg1;
+ (id)unsupportFunctionError:(id)arg1;
+ (id)unsupportFunctionErrorWithCommand:(id)arg1;
+ (id)internalError:(id)arg1;
+ (id)invaldParameterError:(id)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (void).cxx_destruct;
@end

