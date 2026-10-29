@interface MemAppidSig : NSObject <NSCoding>
{
    unsigned int dwAppid; // +0x8
    unsigned int dwPriority; // +0xc
    unsigned int dwTime; // +0x10
    unsigned int dwExpTime; // +0x14
    MemSigManager * memSigManager; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)addAppidSig:(id)arg1;
- (id)appidSigByName:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)printAppidSig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)dwAppid;
- (void)setDwAppid:(unsigned int)arg1;
- (unsigned int)dwPriority;
- (void)setDwPriority:(unsigned int)arg1;
- (unsigned int)dwTime;
- (void)setDwTime:(unsigned int)arg1;
- (unsigned int)dwExpTime;
- (void)setDwExpTime:(unsigned int)arg1;
@end

