@interface MJTimelineView : UICollectionView <MJTimelineVisibleRectDataSource>
{
    BOOL _isBatchUpdating; // +0x8
    BOOL _hasQueuedUpdates; // +0x9
    id <MJTimelineViewDelegate> _layoutDelegate; // +0x10
    UITapGestureRecognizer * _backgroundTapGR; // +0x18
    NSMutableArray * _completionBlocks; // +0x20
    CGSize _lastLayoutContentSize; // +0x28
    CGRect _lastLayoutBounds; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)commonInit;
- (void)layoutSubviews;
- (CGRect)timelineViewVisibleRect;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)performBatchUpdateWithMutationInfo:(id)arg1;
- (void)updateWithMutationInfo:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)isValidMutationInfo:(id)arg1;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (id)backgroundTapGR;
- (BOOL)isBatchUpdating;
- (void)setIsBatchUpdating:(BOOL)arg1;
- (BOOL)hasQueuedUpdates;
- (void)setHasQueuedUpdates:(BOOL)arg1;
- (id)completionBlocks;
- (void)setCompletionBlocks:(id)arg1;
- (CGRect)lastLayoutBounds;
- (void)setLastLayoutBounds:(CGRect)arg1;
- (CGSize)lastLayoutContentSize;
- (void)setLastLayoutContentSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

