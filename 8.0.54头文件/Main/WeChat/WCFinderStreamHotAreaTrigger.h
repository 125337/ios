@interface WCFinderStreamHotAreaTrigger : NSObject <UIScrollViewDelegate, UITableViewDelegate, UICollectionViewDelegate>
{
    BOOL _isScrolling; // +0x8
    id <WCFinderStreamHotAreaTriggerDelegate> _delegate; // +0x10
    double _guideLine; // +0x18
    NSObject * _lastPlayIdentifier; // +0x20
    UIViewController * _vc; // +0x28
    id <WCFinderStreamHotAreaAdapter> _adapter; // +0x30
    UITableViewCell * _lastPlayCell; // +0x38
    NSMutableArray * _pendingRelease; // +0x40
}
- (id)initWithTableView:(id)arg1;
- (void)hookScrollViewDelegate:(id)arg1 fromHook:(BOOL)arg2;
- (void)hookDelegate:(id)arg1 selector:(SEL)arg2 empty:(SEL)arg3 block:(id)arg4;
- (void)beforeScrollViewSetDelegate:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)trigger;
- (void)throttleTrigger;
- (void)_doTrigger:(double)arg1 forDrag:(BOOL)arg2;
- (void)_dropFocusForLast:(id)arg1;
- (void)_pushReleaseBlock:(id /* block */)arg1;
- (void)cleanPendingReleasePlayer;
- (void)emptyScrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)emptyScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)emptyScrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)emptyTableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)emptyCollectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)guideLine;
- (void)setGuideLine:(double)arg1;
- (id)lastPlayIdentifier;
- (void)setLastPlayIdentifier:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)lastPlayCell;
- (void)setLastPlayCell:(id)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (id)pendingRelease;
- (void)setPendingRelease:(id)arg1;
- (void).cxx_destruct;
@end

