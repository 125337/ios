@interface SafeDictionaryWrap : MMObject
{
    NSRecursiveLock * _lock; // +0x8
    NSDictionary * _dic; // +0x10
}
- (id)init;
- (void)safeSetDictionrary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void).cxx_destruct;
@end

