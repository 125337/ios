@interface TBOrderedSafeDictionary : NSObject
{
    NSMutableArray * _pairs; // +0x8
}
- (id)constructPairWithKey:(id)arg1 value:(id)arg2;
- (id)pairForKey:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (BOOL)containsKey:(id)arg1;
- (id)init;
- (id)pairs;
- (void)setPairs:(id)arg1;
- (void).cxx_destruct;
@end
