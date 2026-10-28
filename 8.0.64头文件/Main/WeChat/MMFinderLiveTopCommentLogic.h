@interface MMFinderLiveTopCommentLogic : NSObject <IMMFontMgrExt, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isAnimating; // +0x8
    BOOL _isScrolling; // +0x9
    unsigned int _displayDuration; // +0xc
    MMFinderLiveTopCommentContentView * _containerView; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSMutableArray * _notifyCommentItemArr; // +0x20
    NSMutableSet * _commentMsgIdSet; // +0x28
    NSMutableSet * _notifyProductIdSet; // +0x30
}
- (id)initWithContainerView:(id)arg1 taskId:(id)arg2;
- (void)setIsScrolling:(BOOL)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)startDisplayAnimated;
- (void)tryShowNextTopCommentWithExpectedPubbleCell:(id)arg1;
- (BOOL)appendTopComment:(id)arg1;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (BOOL)innerAppendNewNotifyComments:(id)arg1 filterRepeat:(BOOL)arg2;
- (void)addTopComment:(id)arg1;
- (void)onFontSizeChange;
- (id)notifyCommentItemArr;
- (id)commentMsgIdSet;
- (id)notifyProductIdSet;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (id)getCommentArrayFilterType:(id)arg1 validType:(unsigned int)arg2;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setNotifyCommentItemArr:(id)arg1;
- (void)setCommentMsgIdSet:(id)arg1;
- (void)setNotifyProductIdSet:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (unsigned int)displayDuration;
- (void)setDisplayDuration:(unsigned int)arg1;
- (BOOL)isScrolling;
- (void).cxx_destruct;
@end
