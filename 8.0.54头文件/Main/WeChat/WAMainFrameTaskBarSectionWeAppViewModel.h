@interface WAMainFrameTaskBarSectionWeAppViewModel : NSObject
{
    NSMutableArray * _appItems; // +0x8
    NSMutableArray * _arrMyWeAppItemWhenShowCommonUse; // +0x10
    BOOL _isMyWeApp; // +0x18
    BOOL _isCommonUseWeApp; // +0x19
    BOOL _showMore; // +0x1a
    BOOL _isImmediatelyRefreshData; // +0x1b
    NSString * _session; // +0x20
    long long _maxShowCount; // +0x28
}
- (id)init:(BOOL)arg1;
- (void)fillWeAppItems:(id)arg1 arrMyWeAppItemWhenShowCommonUse:(id)arg2;
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
- (void)reportItemMove:(id)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
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
- (BOOL)isImmediatelyRefreshData;
- (void)setIsImmediatelyRefreshData:(BOOL)arg1;
- (void)setMaxShowCount:(long long)arg1;
- (void).cxx_destruct;
@end

