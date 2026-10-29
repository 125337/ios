@interface EmoticonSearchKeywordRecordList : MMObject <PBCoding>
{
    NSMutableArray * _keywordList; // +0x8
}
+ (void)PBArrayAdd_keywordList;
+ (void)initialize;
+ (id)getRecentSearchKeywordRecordList;
+ (id)legacyRecentSearchKeywordRecordListPath;
- (id)getPBPropertyTable;
- (id)init;
- (void)addKeyword:(id)arg1;
- (void)clearAllKeywords;
- (id)allRecentKeywordsInOrder;
- (void)saveToFile;
- (id)keywordList;
- (void)setKeywordList:(id)arg1;
- (void).cxx_destruct;
@end
