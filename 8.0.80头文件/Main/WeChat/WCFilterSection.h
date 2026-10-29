@interface WCFilterSection : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _canMultiSelect; // +0x9
    NSString * _title; // +0x10
    NSArray * _filterItems; // +0x18
    NSString * _cleanBtnTitle; // +0x20
    NSString * _loadingTitle; // +0x28
    NSString * _emptyTitle; // +0x30
    unsigned long long _displayType; // +0x38
    unsigned long long _defaultSelectIndex; // +0x40
}
+ (id)convertToFilterItems:(id)arg1;
- (id)init;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)filterItems;
- (void)setFilterItems:(id)arg1;
- (id)cleanBtnTitle;
- (void)setCleanBtnTitle:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)loadingTitle;
- (void)setLoadingTitle:(id)arg1;
- (id)emptyTitle;
- (void)setEmptyTitle:(id)arg1;
- (BOOL)canMultiSelect;
- (void)setCanMultiSelect:(BOOL)arg1;
- (unsigned long long)displayType;
- (void)setDisplayType:(unsigned long long)arg1;
- (unsigned long long)defaultSelectIndex;
- (void)setDefaultSelectIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
