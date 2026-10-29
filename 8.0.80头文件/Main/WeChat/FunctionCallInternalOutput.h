@interface FunctionCallInternalOutput : NSObject
{
    BOOL _success; // +0x8
    NSDictionary * _returnValue; // +0x10
    NSString * _errorMessage; // +0x18
    NSString * _errorCode; // +0x20
    NSString * _callId; // +0x28
}
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)returnValue;
- (void)setReturnValue:(id)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (id)callId;
- (void)setCallId:(id)arg1;
- (void).cxx_destruct;
@end
