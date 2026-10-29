@interface MMFinderLiveFeedStreamBarrageCommentView : UIView <MMFinderLiveFeedStreamBarrageViewModelDelegate>
{
    BOOL _plusOnePressing; // +0x8
    MMFinderLiveFeedStreamBarrageItem * _lastTapItem; // +0x10
    id <MMFinderLiveFeedStreamBarrageCommentViewDelegate> _delegate; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMFinderLiveFeedStreamBarrageViewModel * _viewModel; // +0x28
    MMFinderLiveFeedStreamBarrageConfig * _config; // +0x30
    NSMutableArray * _lines; // +0x38
    double _lastWidth; // +0x40
    UIView<MMFinderLiveFeedStreamBarrageHotWordViewProtocol> * _hotWordView; // +0x48
    MMFinderLiveFeedStreamBarrageSelfLaneView * _selfLaneView; // +0x50
    double _hotWordViewStayStartTime; // +0x58
}
- (id)initWithConfig:(id)arg1;
- (void)reset;
- (void)setupSelfLaneView;
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
- (void)addItemView:(id)arg1 withLineIndex:(long long)arg2;
- (void)addAnimationForItem:(id)arg1 duration:(double)arg2;
- (void)stopAnimationForItem:(id)arg1;
- (void)recoverAnimationForItem:(id)arg1;
- (id)getTapBarrageItemViewWithPoint:(CGPoint)arg1;
- (void)selectTapItem:(id)arg1;
- (BOOL)enableTouchAction;
- (void)prepareDisplayHotWordView:(id)arg1;
- (void)tryStartDisplayHotWordView;
- (void)refreshHotWordViewDuration;
- (void)extendHotWordViewDurationAfterPlusOnePress;
- (void)asyncEndDisplayHotWordViewAnimated;
- (void)endDisplayHotWordViewWithAnimated:(BOOL)arg1;
- (void)onTap:(id)arg1;
- (void)onPlusOneTouchDown;
- (void)onPlusOneTouchUp;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInsideHotwordView:(CGPoint)arg1;
- (BOOL)pointInsidePlusOneButton:(CGPoint)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (double)perferHeight;
- (id)feedStreamTask;
- (id)barrageCommentViewContainer;
- (BOOL)tryDisplayItem:(id)arg1;
- (BOOL)tryDisplayHotWordInfo:(id)arg1;
- (void)onLiveFeedStreamCloseBarrageAction;
- (void)onLiveFeedStreamPlusOneConfirmedSend;
- (void)onLiveFeedStreamRequestReJoinLiveWithCompletion:(id /* block */)arg1;
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
- (id)hotWordView;
- (void)setHotWordView:(id)arg1;
- (id)selfLaneView;
- (void)setSelfLaneView:(id)arg1;
- (BOOL)plusOnePressing;
- (void)setPlusOnePressing:(BOOL)arg1;
- (double)hotWordViewStayStartTime;
- (void)setHotWordViewStayStartTime:(double)arg1;
- (void).cxx_destruct;
@end
