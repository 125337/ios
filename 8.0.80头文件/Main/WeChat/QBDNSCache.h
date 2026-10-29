@interface QBDNSCache : NSObject
{
    NSMutableDictionary * _dictionary; // +0x8
    NSMutableOrderedSet * _set; // +0x10
}
- (id)initWithDictionary:(id)arg1 set:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)clear:(BOOL)arg1;
- (void)store;
- (void).cxx_destruct;
@end
