@interface WAMainListStarLogic : MMObject <WAAppItemManagerExtension>
{
    NSMutableArray * _starItems; // +0x8
    id <WAMainListStarLogicDelegate> _delegate; // +0x10
    NSMutableSet * _starSet; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)fetchLocalStarData;
- (void)fetchRemoteStarDataWithScene:(unsigned int)arg1;
- (void)saveEditResult;
- (BOOL)isItemStared:(id)arg1;
- (BOOL)isReachStarCountLimit;
- (unsigned int)getStarNumberLimitation;
- (BOOL)hasStarData;
- (id)starItem:(id)arg1 inScene:(unsigned int)arg2;
- (id)starItem:(id)arg1 toPosition:(unsigned long long)arg2 inScene:(unsigned int)arg3;
- (BOOL)unstarItem:(id)arg1 inScene:(unsigned int)arg2;
- (BOOL)deleteStarItem:(id)arg1 inScene:(unsigned int)arg2;
- (BOOL)moveStarItem:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 inScene:(unsigned int)arg4;
- (BOOL)batchMoveStarItemsWithContext:(id)arg1;
- (unsigned long long)removeStarItem:(id)arg1;
- (BOOL)insertStarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertStarItemWithoutCheck:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeStarItemWithoutCheck:(id)arg1;
- (id)sortStarItems:(id)arg1;
- (BOOL)isItemStaredInLocal:(id)arg1;
- (void)onWeAppStaredItemsInfoUpdated:(id)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppItemUnStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppItemStared:(id)arg1;
- (void)onWeAppItemUnStared:(id)arg1;
- (void)onWeAppItemMoved:(id)arg1 toPreItem:(id)arg2 nextItem:(id)arg3;
- (void)setStarItems:(id)arg1;
- (void)reloadStarItemsAndNotify;
- (id)starItems;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)starSet;
- (void)setStarSet:(id)arg1;
- (void).cxx_destruct;
@end
