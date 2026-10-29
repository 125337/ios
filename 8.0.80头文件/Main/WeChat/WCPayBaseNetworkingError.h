@interface WCPayBaseNetworkingError : MMObject
{
    int _errorCode; // +0x8
    NSString * _errorDesc; // +0x10
}
+ (id)errorWithErrorDesc:(id)arg1;
+ (id)errorWithErrorDesc:(id)arg1 errorCode:(int)arg2;
- (id)init;
- (id)errorDesc;
- (void)setErrorDesc:(id)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (void).cxx_destruct;
@end
