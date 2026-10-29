@interface QBWupEncryptKey : NSObject
{
    NSString * _aesKey; // +0x8
    NSString * _qbKey; // +0x10
    NSString * _token; // +0x18
}
- (id)init;
- (void).cxx_destruct;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)qbKey;
- (void)setQbKey:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
@end

