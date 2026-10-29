@interface SWMidasIndependentDeploymentInfo : NSObject
{
    void * url; // +0x8
    void * keyID; // +0x18
    void * publicKey; // +0x28
    void * merchantID; // +0x38
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
