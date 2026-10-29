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
}
+ (id)sectionWithType:(long long)arg1 title:(id)arg2 cellModels:(id)arg3;
- (id)init;
- (long long)cellCount;
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
- (void).cxx_destruct;
@end

