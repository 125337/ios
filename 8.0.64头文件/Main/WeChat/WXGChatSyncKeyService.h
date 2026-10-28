@interface WXGChatSyncKeyService : MMRootService <MMServiceProtocol>
{
    NSString * _publicKey; // +0x8
    NSString * _privateKey; // +0x10
}
- (void)onServiceInit;
- (id)getSyncPublicKey;
- (id)getPublicKeyString;
- (id)getPrivateKeyString;
- (void)genRsaKeyPair;
- (id)publicKey;
- (void)setPublicKey:(id)arg1;
- (id)privateKey;
- (void)setPrivateKey:(id)arg1;
- (void).cxx_destruct;
@end
