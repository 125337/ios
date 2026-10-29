@interface TSMCryptoSM3 : NSObject
{
    void * _ctx; // +0x8
    int _type; // +0x10
}
+ (id)hash:(id)arg1 error:(id *)arg2;
+ (id)hmac:(id)arg1 key:(id)arg2 error:(id *)arg3;
+ (id)kdf:(id)arg1 keylen:(unsigned int)arg2 error:(id *)arg3;
- (id)init;
- (id)initForHash:(id *)arg1;
- (void)hashUpdate:(id)arg1 error:(id *)arg2;
- (id)hashFinal:(id *)arg1;
- (id)initForHmac:(id)arg1 error:(id *)arg2;
- (void)hmacUpdate:(id)arg1 error:(id *)arg2;
- (id)hmacFinal:(id *)arg1;
@end
