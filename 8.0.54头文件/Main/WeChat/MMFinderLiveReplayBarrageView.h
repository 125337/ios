@interface MMFinderLiveReplayBarrageView : UIView <MMMenuControllerExt>
{
    id <MMFinderLiveReplayBarrageViewDelegate> _delegate; // +0x8
    CADisplayLink * _displayLink; // +0x10
    NSMutableArray * _trackTailViews; // +0x18
    NSMutableArray * _commentItems; // +0x20
    UIView * _selectBgView; // +0x28
    CGSize _lastLayoutSize; // +0x30
}
- (id)init;
- (void)layoutSubviews;
- (CGSize)labelSizeWithText:(id)arg1;
- (id)labelFont;
- (void)start;
- (void)pause;
- (void)stop;
- (void)clear;
- (void)addCommentItems:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)addAnimationForView:(id)arg1;
- (id)displayLink;
- (void)onDisplayLinkFired:(id)arg1;
- (void)didTap:(id)arg1;
- (void)onReport:(id)arg1;
- (void)showOperationMenuForView:(id)arg1;
- (BOOL)isShowingOperationMenu;
- (void)hideOperationMenu;
- (void)onMenuControllerDidHide;
- (id)trackTailViews;
- (id)selectBgView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setTrackTailViews:(id)arg1;
- (id)commentItems;
- (void)setCommentItems:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void)setSelectBgView:(id)arg1;
- (void).cxx_destruct;
@end

