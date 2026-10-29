@interface isaac64_objc : NSObject
{
    unsigned long long[256] randrsl; // +0x8
    unsigned long long randcnt; // +0x808
    unsigned long long[256] mm; // +0x810
    unsigned long long aa; // +0x1010
    unsigned long long bb; // +0x1018
    unsigned long long cc; // +0x1020
}
- (id)init;
- (unsigned long long)isaac64_rand;
- (int)isaac64_init:(unsigned long long *)arg1 seedLen:(unsigned long long)arg2;
- (void)isaac64;
- (void)randinit:(int)arg1;
@end
