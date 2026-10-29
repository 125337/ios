@interface MMLiteAppEncryptMetaData : NSObject
{
    unsigned int _algorithm; // +0x8
    NSData * _key; // +0x10
    NSData * _tag; // +0x18
    NSData * _iv; // +0x20
    NSData * _aad; // +0x28
}
- (id)init;
- (unsigned int)algorithm;
- (void)setAlgorithm:(unsigned int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)iv;
- (void)setIv:(id)arg1;
- (id)aad;
- (void)setAad:(id)arg1;
- (void).cxx_destruct;
@end

