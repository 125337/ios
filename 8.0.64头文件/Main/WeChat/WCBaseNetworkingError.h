@interface WCBaseNetworkingError : MMObject
{
    BOOL _isNetworkError; // +0x8
    BOOL _canRetry; // +0x9
    int _errorCode; // +0xc
    int _m_uiMessage; // +0x10
    NSString * _errorDesc; // +0x18
}
+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2;
+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2 isNetworkError:(BOOL)arg3;
+ (id)errorWithBaseResponse:(id)arg1;
- (id)nsError;
- (id)init;
- (id)errorDesc;
- (void)setErrorDesc:(id)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (int)m_uiMessage;
- (void)setM_uiMessage:(int)arg1;
- (BOOL)isNetworkError;
- (void)setIsNetworkError:(BOOL)arg1;
- (BOOL)canRetry;
- (void)setCanRetry:(BOOL)arg1;
- (void).cxx_destruct;
@end
