@interface MemSig : NSObject <NSCoding>
{
    NSString * sigName; // +0x8
    unsigned int dwAppid; // +0x10
    NSData * sig; // +0x18
    NSData * sigKey; // +0x20
}
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sig;
- (void)setSig:(id)arg1;
- (id)sigKey;
- (void)setSigKey:(id)arg1;
- (id)sigName;
- (void)setSigName:(id)arg1;
- (unsigned int)dwAppid;
- (void)setDwAppid:(unsigned int)arg1;
@end
