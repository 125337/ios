@interface BSBusinessContent : NSObject
{
    unsigned int _continueFlag; // +0x8
    unsigned int _totalCount; // +0xc
    unsigned int _offset; // +0x10
    unsigned long long _businessType; // +0x18
    NSString * _title; // +0x20
    NSMutableArray * _keyWordList; // +0x28
    NSMutableArray * _itemList; // +0x30
    NSString * _searchId; // +0x38
}
+ (id)fromServerObj:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (unsigned int)continueFlag;
- (void)setContinueFlag:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)keyWordList;
- (void)setKeyWordList:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (unsigned int)totalCount;
- (void)setTotalCount:(unsigned int)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (void).cxx_destruct;
@end
