@interface WAInputEncrypter : NSObject
{
    NSString * _certPem; // +0x8
    NSString * _encryptExtra; // +0x10
}
- (void)sendError:(id *)arg1 err:(id)arg2;
- (id)encryptPlainString:(id)arg1 encryptError:(id *)arg2;
- (id)certPem;
- (void)setCertPem:(id)arg1;
- (id)encryptExtra;
- (void)setEncryptExtra:(id)arg1;
- (void).cxx_destruct;
@end

