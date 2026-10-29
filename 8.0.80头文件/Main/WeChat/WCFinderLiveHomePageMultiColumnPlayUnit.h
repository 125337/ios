@interface WCFinderLiveHomePageMultiColumnPlayUnit : WCFinderLiveHomePageDoubleColumnPlayUnit
{
    NSArray * _firstRowIndexPaths; // +0x8
}
- (id)initWithSection:(unsigned long long)arg1 sectionVM:(id)arg2;
- (id)currentPlayingIndexPaths;
- (BOOL)containIndexPath:(id)arg1;
- (void)removePlayingIndexPath:(id)arg1;
- (id)description;
- (id)adjustAndReplenish;
- (id)adjustAndReplenishWithDeleteIndexPath:(id)arg1;
- (id)firstRowIndexPaths;
- (void)setFirstRowIndexPaths:(id)arg1;
- (void).cxx_destruct;
@end
