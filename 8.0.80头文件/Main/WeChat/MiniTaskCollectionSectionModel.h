@interface MiniTaskCollectionSectionModel : NSObject
{
    BOOL _hideHeader; // +0x8
    BOOL _allowEdit; // +0x9
    BOOL _allowClearAll; // +0xa
    BOOL _isEditing; // +0xb
    BOOL _canLoadMore; // +0xc
    long long _sectionType; // +0x10
    NSString * _title; // +0x18
    NSMutableArray * _cellModels; // +0x20
    NSMutableSet * _cellSet; // +0x28
}
+ (id)sectionWithType:(long long)arg1 title:(id)arg2 cellModels:(id)arg3;
- (id)init;
- (long long)count;
- (id)lastObject;
- (void)appendCellModels:(id)arg1;
- (long long)insertOrderedCellModel:(id)arg1;
- (BOOL)removeObjectAtIndex:(long long)arg1;
- (void)removeAllCellModels;
- (void)replaceObjectAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (long long)sectionType;
- (void)setSectionType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)hideHeader;
- (void)setHideHeader:(BOOL)arg1;
- (BOOL)allowEdit;
- (void)setAllowEdit:(BOOL)arg1;
- (BOOL)allowClearAll;
- (void)setAllowClearAll:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)canLoadMore;
- (void)setCanLoadMore:(BOOL)arg1;
- (id)cellModels;
- (void)setCellModels:(id)arg1;
- (id)cellSet;
- (void)setCellSet:(id)arg1;
- (void).cxx_destruct;
@end
