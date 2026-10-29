@interface BrandLemmaTable : NSObject
{
    NSRecursiveLock * _accessLock; // +0x8
    NSArray * _entries; // +0x10
    NSMutableDictionary * _keyToEntry; // +0x18
}
- (id)initWithPath:(id)arg1;
- (void)constructMapping;
- (id)getLemmaForKey:(id)arg1 type:(long long)arg2;
- (id)accessLock;
- (void)setAccessLock:(id)arg1;
- (id)entries;
- (void)setEntries:(id)arg1;
- (id)keyToEntry;
- (void)setKeyToEntry:(id)arg1;
- (void).cxx_destruct;
@end

