@interface WCFinderSectionDiffChange : NSObject
{
    NSMutableArray * _items; // +0x8
}
+ (id)makeIndexPath:(id)arg1 rowIdxSet:(id)arg2;
+ (id)toFinderDiff:(id)arg1 sectionChanges:(id)arg2 changeIndexSet:(id)arg3;
- (void)applyInsertions:(id /* block */)arg1 removals:(id /* block */)arg2 reloads:(id /* block */)arg3;
- (void)applyInsertions:(id /* block */)arg1 removals:(id /* block */)arg2 itemInsertions:(id /* block */)arg3 itemRemovals:(id /* block */)arg4;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
