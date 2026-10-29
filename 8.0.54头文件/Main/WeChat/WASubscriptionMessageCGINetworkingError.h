@interface WASubscriptionMessageCGINetworkingError : NSObject
{
    int _errorCode; // +0x8
    unsigned int _uiMessage; // +0xc
    NSString * _errorMessage; // +0x10
}
+ (id)errorWithErrorCode:(int)arg1 errorMessage:(id)arg2 uiMessage:(int)arg3;
- (id)init;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (unsigned int)uiMessage;
- (void)setUiMessage:(unsigned int)arg1;
- (void).cxx_destruct;
@end

