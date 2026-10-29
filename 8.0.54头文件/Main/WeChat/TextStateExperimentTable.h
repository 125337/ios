@interface TextStateExperimentTable : NSObject <PBCoding>
{
    unsigned long long _key; // +0x8
    NSMutableArray * _entryList; // +0x10
    NSMutableDictionary * _keyToEntryDict; // +0x18
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_entryList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithConfig:(id)arg1;
- (id)keyToEntryDict;
- (id)entryForKey:(id)arg1;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (id)entryList;
- (void)setEntryList:(id)arg1;
- (void)setKeyToEntryDict:(id)arg1;
- (void).cxx_destruct;
@end

