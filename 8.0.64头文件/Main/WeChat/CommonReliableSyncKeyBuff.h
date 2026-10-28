@interface CommonReliableSyncKeyBuff : MMObject <PBCoding>
{
    unsigned int _syncKeyVersion; // +0x8
    NSData * _syncKey; // +0x10
}
+ (void)PBArrayAdd_syncKey;
+ (void)PBArrayAdd_syncKeyVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (unsigned int)syncKeyVersion;
- (void)setSyncKeyVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
