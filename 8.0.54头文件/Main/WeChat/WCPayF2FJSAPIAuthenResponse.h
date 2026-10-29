@interface WCPayF2FJSAPIAuthenResponse : NSObject
{
    long long _retCode; // +0x8
    NSString * _retMsg; // +0x10
}
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (void).cxx_destruct;
@end

