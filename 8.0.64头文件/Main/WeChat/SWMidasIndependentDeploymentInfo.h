@interface SWMidasIndependentDeploymentInfo : NSObject
{
     url; // +0x8
     keyID; // +0x18
     publicKey; // +0x28
     merchantID; // +0x38
}
- (id)url;
- (id)keyID;
- (id)publicKey;
- (id)merchantID;
- (id)initWithUrl:(id)arg1 keyID:(id)arg2 publicKey:(id)arg3 merchantID:(id)arg4;
- (BOOL)validate;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
