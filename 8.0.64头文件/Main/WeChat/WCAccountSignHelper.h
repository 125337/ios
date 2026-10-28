@interface WCAccountSignHelper : NSObject
{
    NSRecursiveLock * _signKeyLock; // +0x8
    PubKeyInfo * _pubKeyInfoForECDSA; // +0x10
    unsigned long long _pubkeyLastUpdateTime; // +0x18
    NSString * _lastUploadPubKeyCgiName; // +0x20
    basic_string<char, std::char_traits<char>, std::allocator<char>> _privateKeyForECDSA; // +0x28
}
- (id)init;
- (id)logInfos;
- (void)updateUploadPubKeyCgiName:(id)arg1;
- (id)ecdsaSignWithData:(id)arg1;
- (void)makeSureOkAfterLogin;
- (id)pubKeyInfoForECDSAUpdateIfNeeded;
- (id)pubKeyInfoWithoutUpdate;
- (void)createEcdsaKeyPairIfNeededWithNeedTryUpdate:(BOOL)arg1;
- (BOOL)createPubkey;
- (id)signKeyLock;
- (void)setSignKeyLock:(id)arg1;
- (id)pubKeyInfoForECDSA;
- (void)setPubKeyInfoForECDSA:(id)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)privateKeyForECDSA;
- (void)setPrivateKeyForECDSA:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (unsigned long long)pubkeyLastUpdateTime;
- (void)setPubkeyLastUpdateTime:(unsigned long long)arg1;
- (id)lastUploadPubKeyCgiName;
- (void)setLastUploadPubKeyCgiName:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
