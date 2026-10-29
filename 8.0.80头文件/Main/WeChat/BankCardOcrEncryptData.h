@interface BankCardOcrEncryptData : NSObject
{
    NSData * _cipher_text; // +0x8
    NSData * _tag; // +0x10
    NSData * _iv; // +0x18
    NSData * _aad; // +0x20
    NSNumber * _key_seq; // +0x28
}
- (id)cipher_text;
- (void)setCipher_text:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)iv;
- (void)setIv:(id)arg1;
- (id)aad;
- (void)setAad:(id)arg1;
- (id)key_seq;
- (void)setKey_seq:(id)arg1;
- (void).cxx_destruct;
@end
