@interface SWMidasObjCPaymentErrorResp : NSObject
{
    long long errCode; // +0x8
    long long step; // +0x10
    void * innerCode; // +0x18
    void * innerMsg; // +0x28
    void * innerError; // +0x38
}
- (long long)errCode;
- (long long)step;
- (id)innerCode;
- (id)innerMsg;
- (id)innerError;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
