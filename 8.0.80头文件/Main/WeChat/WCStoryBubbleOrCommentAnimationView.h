@interface WCStoryBubbleOrCommentAnimationView : UIView <WCStoryBubbleHeadViewDelegate>
{
    BOOL _isBubble; // +0x8
    BOOL _isFirstTimeShow; // +0x9
    BOOL _isInBackground; // +0xa
    id <WCStoryBubbleOrCommentAnimationViewDelegate> _delegate; // +0x10
    NSArray * _itemList; // +0x18
    UIView * _movingView; // +0x20
    long long _displayItemIndex; // +0x28
    NSSet * _unreadCommentIdSet; // +0x30
    double _itemMoveingVelocity; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (double)appearAnimationTime;
- (double)blurEffectExtendAnimationDelayTime;
- (double)blurEffectExtendAnimationTime;
- (double)movingAnimationDelayTime;
- (double)movingAnimationTime;
- (double)wordExtendAnimationDelayTime;
- (double)wordExtendAnimationTime;
- (double)disppearAnimationDelayTime;
- (double)disppearAnimationTime;
- (double)animationTimeInAll;
- (void)showItemList:(id)arg1 unreadCommentIdSet:(id)arg2;
- (double)getNextIntervalForCurrentIndex:(unsigned long long)arg1;
- (void)stopAnimations;
- (void)setMovingViewHidden:(BOOL)arg1;
- (BOOL)movingViewHidden;
- (void)showItems;
- (void)showSingleHeadView:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)storyBubbleHeadViewClickCommentView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isBubble;
- (void)setIsBubble:(BOOL)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (BOOL)isFirstTimeShow;
- (void)setIsFirstTimeShow:(BOOL)arg1;
- (id)movingView;
- (void)setMovingView:(id)arg1;
- (long long)displayItemIndex;
- (void)setDisplayItemIndex:(long long)arg1;
- (id)unreadCommentIdSet;
- (void)setUnreadCommentIdSet:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (double)itemMoveingVelocity;
- (void)setItemMoveingVelocity:(double)arg1;
- (void).cxx_destruct;
@end
