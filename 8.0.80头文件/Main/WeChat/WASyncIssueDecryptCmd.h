@interface WASyncIssueDecryptCmd : WASyncBaseCmd
{
    unsigned int _appVersion; // +0x40
    NSString * _decryptKey; // +0x48
    NSString * _decryptMd5; // +0x50
    unsigned long long _encryptType; // +0x58
}
- (id)description;
- (id)decryptKey;
- (void)setDecryptKey:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)decryptMd5;
- (void)setDecryptMd5:(id)arg1;
- (unsigned long long)encryptType;
- (void)setEncryptType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
