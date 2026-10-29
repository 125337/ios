@interface SWMidasObjCQueryAppleProductErrorResp : NSObject
{
    long long errorCode; // +0x8
    NSError * appleInternalError; // +0x10
}
- (long long)errorCode;
- (id)appleInternalError;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
