@interface WCMomentsScrollActionSheet : MMScrollActionSheet
{
    BOOL _isShowLoadingHeader; // +0x8
    NSString * _loadingHeaderTitle; // +0x10
    NSMutableArray * _pendingItemsInRow0; // +0x18
    NSMutableArray * _pendingItemsInRow1; // +0x20
    WCMomentScrollActionSheetHeaderView * _loadingHeaderView; // +0x28
}
+ (CGSize)defaultItemSize;
+ (void)updateOldItem:(id)arg1 newItem:(id)arg2;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)_init;
- (void)_initHeaderView;
- (void)setIsShowLoadingHeader:(BOOL)arg1;
- (void)addPendingItemInRow0:(id)arg1;
- (void)addPendingItemInRow1:(id)arg1;
- (void)addPendingItemInRow0WithTitle:(id)arg1 image:(id)arg2 isEnabled:(BOOL)arg3;
- (void)addPendingItemInRow1WithTitle:(id)arg1 image:(id)arg2 isEnabled:(BOOL)arg3;
- (void)addPendingItemInRow0WithTitle:(id)arg1 svgImageName:(id)arg2 svgImageColor:(id)arg3 isEnabled:(BOOL)arg4;
- (void)addPendingItemInRow1WithTitle:(id)arg1 svgImageName:(id)arg2 svgImageColor:(id)arg3 isEnabled:(BOOL)arg4;
- (void)commitPendingItems;
- (BOOL)containsItemWithTitle:(id)arg1;
- (BOOL)containsItemInRow0WithTitle:(id)arg1;
- (BOOL)containsItemInRow1WithTitle:(id)arg1;
- (BOOL)isItemValidWithTitle:(id)arg1;
- (id)ItemInRow0WithTitle:(id)arg1;
- (id)ItemInRow1WithTitle:(id)arg1;
- (id)createItemWithTitle:(id)arg1 image:(id)arg2;
- (BOOL)isShowLoadingHeader;
- (id)loadingHeaderTitle;
- (void)setLoadingHeaderTitle:(id)arg1;
- (id)pendingItemsInRow0;
- (void)setPendingItemsInRow0:(id)arg1;
- (id)pendingItemsInRow1;
- (void)setPendingItemsInRow1:(id)arg1;
- (id)loadingHeaderView;
- (void)setLoadingHeaderView:(id)arg1;
- (void).cxx_destruct;
@end

