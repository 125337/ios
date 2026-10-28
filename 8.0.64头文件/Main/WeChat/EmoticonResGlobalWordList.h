@interface EmoticonResGlobalWordList : NSObject
{
    NSMutableSet * _words; // +0x8
    EmoticonWordListMeta * _meta; // +0x10
}
+ (id)getCachedWordList;
+ (id)pathRelativeToDir:(id)arg1;
+ (void)clearAll;
- (id)init;
- (id)words;
- (void)setWords:(id)arg1;
- (id)meta;
- (void)setMeta:(id)arg1;
- (void).cxx_destruct;
@end
