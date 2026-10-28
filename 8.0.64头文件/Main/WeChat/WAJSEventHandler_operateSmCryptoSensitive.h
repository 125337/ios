@interface WAJSEventHandler_operateSmCryptoSensitive : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)sm2GenKeyPair;
- (void)sm2GenPublicKey:(id)arg1;
- (void)sm2Decrypt:(id)arg1;
- (void)sm2Sign:(id)arg1;
- (void)sm3Hmac:(id)arg1;
- (void)sm4EncryptCBC:(id)arg1;
- (void)sm4DecryptCBC:(id)arg1;
- (void)sm4EncryptGCM:(id)arg1;
- (void)sm4DecryptGCM:(id)arg1;
- (void)sm4EncryptCTR:(id)arg1;
- (void)sm4DecryptCTR:(id)arg1;
@end
