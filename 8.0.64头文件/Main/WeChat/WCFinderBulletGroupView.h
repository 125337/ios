@interface WCFinderBulletGroupView : UIView <CAAnimationDelegate>
{
    WCFinderBulletItem * _lastTapItem; // +0x8
    id <WCFinderBulletGroupViewDelegate> _delegate; // +0x10
    WCFinderBulletGroupViewModel * _viewModel; // +0x18
    NSMutableArray * _reusePool; // +0x20
    double _preWidth; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setConfig:(id)arg1 contentVM:(id)arg2;
- (void)setVideoDuration:(double)arg1;
- (void)setPlayRate:(double)arg1;
- (void)addItems:(id)arg1;
- (void)insertItemImmediately:(id)arg1;
- (void)insertItemToWaitingArray:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)stop;
- (void)clearAllShowingItems;
- (void)clearAllAnimations;
- (id)getCache;
- (void)useCache:(id)arg1;
- (void)updateInPoint:(double)arg1;
- (void)fetchDataWithTimestamp:(double)arg1 commentScene:(int)arg2 needCommentIds:(id)arg3;
- (void)_displayView:(id)arg1 inLine:(long long)arg2 point:(double)arg3;
- (void)updateExistingItemLikeCount:(id)arg1;
- (void)_addAnimationForView:(id)arg1 inPosition:(double)arg2;
- (void)onTap:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)getTapBulletTextViewWithPoint:(CGPoint)arg1;
- (void)onLongPress:(id)arg1;
- (void)unSelectLastTapItem;
- (BOOL)isBulletAnimating;
- (id)_viewForItem:(id)arg1;
- (id)_dequeueReusableTextView;
- (void)_enqueueReusableTextView:(id)arg1;
- (void)enumerateBulletViewUsingBlock:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)lastTapItem;
- (void)setLastTapItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)reusePool;
- (void)setReusePool:(id)arg1;
- (double)preWidth;
- (void)setPreWidth:(double)arg1;
- (void).cxx_destruct;
@end
