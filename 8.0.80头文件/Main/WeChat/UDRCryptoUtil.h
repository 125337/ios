@interface UDRCryptoUtil : MMUserService <MMServiceProtocol>
{
    NSString * ACCESS_RES_GROUP; // +0x8
}
- (void)onServiceInit;
- (void)dealloc;
- (id)getAESKeyInKeyChain:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (void)saveAESKeyInKeyChain:(id)arg1 projectId:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (void)deleteAESKeyInKeyChain:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (int)AesGcmDecrypt:(id)arg1 nonce_size:(unsigned long long)arg2 key:(id)arg3 key_size:(unsigned long long)arg4 aad:(id)arg5 aad_size:(unsigned long long)arg6 input:(id)arg7 input_size:(unsigned long long)arg8 tag:(id)arg9 tag_size:(unsigned long long)arg10 output:(void *)arg11;
- (int)AesGcmEncrypt:(id)arg1 nonce_size:(unsigned long long)arg2 key:(id)arg3 key_size:(unsigned long long)arg4 aad:(id)arg5 aad_size:(unsigned long long)arg6 input:(id)arg7 input_size:(unsigned long long)arg8 output:(void *)arg9 outtag:(void *)arg10;
- (void).cxx_destruct;
@end
