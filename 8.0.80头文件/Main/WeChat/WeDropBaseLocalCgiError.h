@interface WeDropBaseLocalCgiError : MMObject
{
    int _errorCode; // +0x8
    NSString * _errorDesc; // +0x10
}
- (id)init;
- (id)description;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorDesc;
- (void)setErrorDesc:(id)arg1;
- (void).cxx_destruct;
@end
