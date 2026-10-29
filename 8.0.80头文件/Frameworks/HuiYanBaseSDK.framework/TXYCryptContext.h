@interface TXYCryptContext : NSObject
{
    NSData * _data; // +0x8
    NSData * _key; // +0x10
    NSData * _iv; // +0x18
    NSError * _error; // +0x20
}
- (id)data;
- (void)setData:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)iv;
- (void)setIv:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end
