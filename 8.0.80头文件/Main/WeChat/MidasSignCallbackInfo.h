@interface MidasSignCallbackInfo : NSObject
{
     resultCode; // +0x8
     signType; // +0x10
     innerResultCode; // +0x18
     innerResultMsg; // +0x28
}
- (long long)resultCode;
- (long long)signType;
- (id)innerResultCode;
- (id)innerResultMsg;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
