@interface QBWupEncrypt : NSObject
+ (id)sharedInstance;
- (id)generateEncryptKey:(BOOL)arg1;
- (id)keyAppendToWupRequestUrl:(id)arg1;
- (void)saveWupToken:(id)arg1;
- (id)getWupTokenInfo;
- (void)removeWupTokenInfo;
- (id)generateAESKey;
- (id)encryptAESKeyWithRSA1024:(id)arg1;
@end
