@interface MMFinderLiveTopCommentLogic : NSObject <IMMFontMgrExt, WCFinderLiveExt, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isScrolling; // +0x8
    id /* block */ _onTopCommentLikeAction; // +0x10
    id /* block */ _onTopCommentMenuAction; // +0x18
    id /* block */ _onLikeCountChanged; // +0x20
    id /* block */ _onTopCommentRemoved; // +0x28
    id /* block */ _onTopCommentDisplayed; // +0x30
    MMFinderLiveTopCommentContentView * _containerView; // +0x38
    MMFinderLiveTaskId * _taskId; // +0x40
    MMLiveCommentDataItem * _currentDisplayingItem; // +0x48
    MMTimer * _displayTimer; // +0x50
    id <MMLiveCommentWidthProvider> _widthProvider; // +0x58
}
- (id)initWithContainerView:(id)arg1 taskId:(id)arg2 commentWidthProvider:(id)arg3;
- (void)setIsScrolling:(BOOL)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)appendTopComment:(id)arg1;
- (void)syncLikeStatusFromOriginalCommentSeq:(unsigned long long)arg1 like:(BOOL)arg2 likeCount:(unsigned int)arg3;
- (long long)getLikeCountWithOriginSeq:(unsigned long long)arg1;
- (void)reloadLikeInfoWithOriginSeq:(unsigned long long)arg1;
- (void)updateLikeStatusWithOriginSeq:(unsigned long long)arg1 like:(BOOL)arg2;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (void)displayTopComment:(id)arg1;
- (void)removeCurrentTopCommentImmediately;
- (void)scheduleTimerWithEndTs:(unsigned int)arg1;
- (void)rescheduleTimerWithEndTs:(unsigned int)arg1;
- (void)onDisplayTimerFired;
- (void)cancelDisplayTimer;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (void)onFontSizeChange;
- (void)syncLikeStatusFromOriginalComment:(id)arg1;
- (id)selectTopCommentFromArray:(id)arg1;
- (unsigned long long)currentDisplayingOriginSeq;
- (id)getCommentArrayFilterType:(id)arg1 validType:(unsigned int)arg2;
- (id /* block */)onTopCommentLikeAction;
- (void)setOnTopCommentLikeAction:(id /* block */)arg1;
- (id /* block */)onTopCommentMenuAction;
- (void)setOnTopCommentMenuAction:(id /* block */)arg1;
- (id /* block */)onLikeCountChanged;
- (void)setOnLikeCountChanged:(id /* block */)arg1;
- (id /* block */)onTopCommentRemoved;
- (void)setOnTopCommentRemoved:(id /* block */)arg1;
- (id /* block */)onTopCommentDisplayed;
- (void)setOnTopCommentDisplayed:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currentDisplayingItem;
- (void)setCurrentDisplayingItem:(id)arg1;
- (id)displayTimer;
- (void)setDisplayTimer:(id)arg1;
- (BOOL)isScrolling;
- (id)widthProvider;
- (void)setWidthProvider:(id)arg1;
- (void).cxx_destruct;
@end
