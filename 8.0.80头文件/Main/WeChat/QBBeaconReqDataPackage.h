@interface QBBeaconReqDataPackage : NSObject
{
    QBBeaconRequestPackage * requestPackage; // +0x8
    NSString * reqKey; // +0x10
    NSString * reqServant; // +0x18
    NSString * reqFunc; // +0x20
    int zipAlg; // +0x28
    int encAlg; // +0x2c
    NSString * encKey; // +0x30
    NSString * aesKeyEncrypt; // +0x38
    NSString * encPubKey; // +0x40
}
+ (id)initWithRequestPkg:(id)arg1;
- (id)init;
- (id)createReqData:(id *)arg1;
- (id)getWithRspData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id)requestPackage;
- (void)setRequestPackage:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (id)reqServant;
- (void)setReqServant:(id)arg1;
- (id)reqFunc;
- (void)setReqFunc:(id)arg1;
- (int)zipAlg;
- (void)setZipAlg:(int)arg1;
- (int)encAlg;
- (void)setEncAlg:(int)arg1;
- (id)encKey;
- (void)setEncKey:(id)arg1;
- (id)aesKeyEncrypt;
- (void)setAesKeyEncrypt:(id)arg1;
- (id)encPubKey;
- (void)setEncPubKey:(id)arg1;
@end
