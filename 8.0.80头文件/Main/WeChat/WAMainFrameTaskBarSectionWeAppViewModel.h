@interface WAMainFrameTaskBarSectionWeAppViewModel : NSObject
{
    NSMutableArray * _appItems; // +0x8
    NSMutableArray * _arrMyWeAppItemWhenShowCommonUse; // +0x10
    BOOL _isMyWeApp; // +0x18
    BOOL _isCommonUseWeApp; // +0x19
    BOOL _showMore; // +0x1a
    NSString * _session; // +0x20
    unsigned long long _isRefresh; // +0x28
    long long _maxShowCount; // +0x30
    NSArray * _insertedIndexPaths; // +0x38
    NSArray * _deletedIndexPaths; // +0x40
    NSArray * _modifiedIndexPaths; // +0x48
}
- (id)init:(BOOL)arg1;
- (void)fillWeAppItems:(id)arg1 arrMyWeAppItemWhenShowCommonUse:(id)arg2;
- (void)fillWeAppItems:(id)arg1 arrMyWeAppItemWhenShowCommonUse:(id)arg2 refreshImmediately:(BOOL)arg3;
- (id)appItemDatas;
- (id)dataForIndex:(long long)arg1;
- (void)updateShowMoreState;
- (long long)count;
- (long long)target;
- (long long)currentWeAppCount;
- (long long)maxShowCount;
- (long long)allCount;
- (id)itemsDescription;
- (id)deleteDataForIndex:(long long)arg1;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onItemMove:(id)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
- (long long)weMyAppCount;
- (long long)commuseWeappCount;
- (BOOL)isMyWeApp;
- (void)setIsMyWeApp:(BOOL)arg1;
- (BOOL)isCommonUseWeApp;
- (void)setIsCommonUseWeApp:(BOOL)arg1;
- (BOOL)showMore;
- (void)setShowMore:(BOOL)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned long long)isRefresh;
- (void)setIsRefresh:(unsigned long long)arg1;
- (void)setMaxShowCount:(long long)arg1;
- (id)insertedIndexPaths;
- (void)setInsertedIndexPaths:(id)arg1;
- (id)deletedIndexPaths;
- (void)setDeletedIndexPaths:(id)arg1;
- (id)modifiedIndexPaths;
- (void)setModifiedIndexPaths:(id)arg1;
- (void).cxx_destruct;
@end
