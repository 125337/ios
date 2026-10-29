@interface MidasPayCallbackInfo : NSObject
{
     resultCode; // +0x8
     user; // +0x10
     content; // +0x18
     channel; // +0x20
     innerResultCode; // +0x28
     innerResultMsg; // +0x38
}
- (long long)resultCode;
- (id)user;
- (id)content;
- (long long)channel;
- (id)innerResultCode;
- (id)innerResultMsg;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
