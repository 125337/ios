@interface NSENewSyncResult : NSObject <PBCoding>
{
    NSData * _encryptedNewSyncResp; // +0x8
    NSData * _cliPubKey; // +0x10
    NSData * _svrPubKey; // +0x18
    NSData * _svrPubKeySignature; // +0x20
    NSString * _cliPubKeyMD5; // +0x28
}
+ (void)PBArrayAdd_encryptedNewSyncResp;
+ (void)PBArrayAdd_cliPubKey;
+ (void)PBArrayAdd_svrPubKey;
+ (void)PBArrayAdd_svrPubKeySignature;
+ (void)PBArrayAdd_cliPubKeyMD5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)encryptedNewSyncResp;
- (void)setEncryptedNewSyncResp:(id)arg1;
- (id)cliPubKey;
- (void)setCliPubKey:(id)arg1;
- (id)svrPubKey;
- (void)setSvrPubKey:(id)arg1;
- (id)svrPubKeySignature;
- (void)setSvrPubKeySignature:(id)arg1;
- (id)cliPubKeyMD5;
- (void)setCliPubKeyMD5:(id)arg1;
- (void).cxx_destruct;
@end
