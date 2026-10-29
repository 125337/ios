@interface MMFinderLiveGameCategoryInfo : NSObject
{
    BOOL _hasNext; // +0x8
    unsigned int _categoryId; // +0xc
    unsigned int _tabId; // +0x10
    NSString * _categoryName; // +0x18
    NSArray * _gameAppInfoList; // +0x20
    NSString * _queryBuffer; // +0x28
    NSString * _tabName; // +0x30
}
+ (id)changeArrayWithGameCategoryInfoList:(id)arg1;
- (id)initWithPBItem:(id)arg1;
- (void)updateWithLiveGameCategoryInfo:(id)arg1 fetchMore:(BOOL)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)copyFromPBItem:(id)arg1;
- (unsigned int)categoryId;
- (void)setCategoryId:(unsigned int)arg1;
- (id)categoryName;
- (void)setCategoryName:(id)arg1;
- (id)gameAppInfoList;
- (void)setGameAppInfoList:(id)arg1;
- (BOOL)hasNext;
- (void)setHasNext:(BOOL)arg1;
- (id)queryBuffer;
- (void)setQueryBuffer:(id)arg1;
- (unsigned int)tabId;
- (void)setTabId:(unsigned int)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (void).cxx_destruct;
@end
