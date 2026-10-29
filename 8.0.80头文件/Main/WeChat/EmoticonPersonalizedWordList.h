@interface EmoticonPersonalizedWordList : NSObject <PBCoding>
{
    NSMutableSet * _words; // +0x8
    EmoticonWordListMeta * _meta; // +0x10
}
+ (void)PBArrayAdd_words;
+ (void)PBArrayAdd_meta;
+ (void)initialize;
+ (id)path;
+ (unsigned int)transferSvrWordListType:(unsigned int)arg1;
+ (id)getCachedWordList;
+ (void)saveToCache:(id)arg1;
+ (void)clearAll;
+ (void)markUpdated;
+ (BOOL)isExpiredWithConfigInterval:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)debugDescription;
- (id)words;
- (void)setWords:(id)arg1;
- (id)meta;
- (void)setMeta:(id)arg1;
- (void).cxx_destruct;
@end
