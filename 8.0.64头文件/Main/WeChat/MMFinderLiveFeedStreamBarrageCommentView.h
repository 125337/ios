@interface MMFinderLiveFeedStreamBarrageCommentView : UIView <MMFinderLiveFeedStreamBarrageViewModelDelegate>
{
    MMFinderLiveFeedStreamBarrageItem * _lastTapItem; // +0x8
    id <MMFinderLiveFeedStreamBarrageCommentViewDelegate> _delegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    MMFinderLiveFeedStreamBarrageViewModel * _viewModel; // +0x20
    MMFinderLiveFeedStreamBarrageConfig * _config; // +0x28
    NSMutableArray * _lines; // +0x30
    double _lastWidth; // +0x38
}
- (id)initWithConfig:(id)arg1;
- (void)reset;
- (void)layoutSubviews;
- (void)setConfig:(id)arg1;
- (void)prepareForReuse;
- (void)updateFeedStreamTaskId:(id)arg1;
- (void)resetFeedStreamTaskId;
- (void)start;
- (void)stop;
- (void)unSelectLastTapItem;
- (void)calcItemInfo:(id)arg1;
- (void)clearAllItems;
- (void)deleteItem:(id)arg1;
- (void)clearAllShowingItems;
- (void)clearAllAnimations;
- (void)addItemView:(id)arg1 withLineIndex:(long long)arg2;
- (void)addAnimationForItem:(id)arg1 duration:(double)arg2;
- (void)stopAnimationForItem:(id)arg1;
- (void)recoverAnimationForItem:(id)arg1;
- (id)getTapBarrageTextViewWithPoint:(CGPoint)arg1;
- (void)selectTapItem:(id)arg1;
- (BOOL)enableTouchAction;
- (void)onTap:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (double)perferHeight;
- (id)barrageCommentViewContainer;
- (BOOL)tryDisplayItem:(id)arg1;
- (void)onLiveFeedStreamCloseBarrageAction;
- (id)lastTapItem;
- (void)setLastTapItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)config;
- (id)lines;
- (void)setLines:(id)arg1;
- (double)lastWidth;
- (void)setLastWidth:(double)arg1;
- (void).cxx_destruct;
@end
