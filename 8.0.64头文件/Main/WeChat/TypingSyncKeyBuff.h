@interface TypingSyncKeyBuff : NSObject <PBCoding>
{
    unsigned long long _syncKey; // +0x8
}
+ (void)PBArrayAdd_syncKey;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)syncKey;
- (void)setSyncKey:(unsigned long long)arg1;
@end
