@interface SWMidasObjCPaymentErrorResp : NSObject
{
     errCode; // +0x8
     step; // +0x10
     innerCode; // +0x18
     innerMsg; // +0x28
     innerError; // +0x38
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

