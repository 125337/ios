@interface WCFinderHighEntropyActionHandler : NSObject
{
    BOOL _globalMuted; // +0x8
    id <WCFinderHighEntropyActionHandlerHost> _host; // +0x10
    NSString * _pendingResumeFeedId; // +0x18
    double _pendingResumePlayPosition; // +0x20
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0x28
}
- (id)initWithHost:(id)arg1;
- (BOOL)feedCellShouldPlaySilence;
- (void)feedCellWillEnterFocusArea:(id)arg1;
- (void)jumpFromCell:(id)arg1 jumpInfo:(id)arg2 style:(id)arg3;
- (void)refreshJumpInfoPanelWithContentVM:(id)arg1;
- (void)openMediaWithContentVM:(id)arg1 imageIndex:(unsigned long long)arg2;
- (void)didSelectVideoMediaMuteChanged:(BOOL)arg1;
- (void)updateDetailStreamContextClientInfoWithContentVM:(id)arg1;
- (void)contentViewDidClickExpandWithContentVM:(id)arg1;
- (void)contentViewDidClickCollapseWithContentVM:(id)arg1;
- (void)contentViewDidClickContentWithContentVM:(id)arg1;
- (void)friendLikeViewDidClickLikeListWithContentVM:(id)arg1;
- (void)friendLikeViewOnRefreshFriendUIWithContentVM:(id)arg1;
- (void)hotCommentViewDidTapComment:(id)arg1 contentVM:(id)arg2 shouldReportClick:(BOOL)arg3;
- (void)hotCommentViewDidChangeHotCommentWithContentVM:(id)arg1;
- (void)refreshContentVM:(id)arg1 changedParts:(unsigned long long)arg2 reloadIfMiss:(BOOL)arg3 animated:(BOOL)arg4;
- (BOOL)shouldPerformInteractionAction:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)performInteractionAction:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)createActionSheetWithContentVM:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)openAuthorProfileWithUsername:(id)arg1 contentVM:(id)arg2;
- (void)onFullScreenWillPlayContentVM:(id)arg1;
- (void)onFullScreenDidEndPlayContentVM:(id)arg1 finderPlayerReport:(id)arg2;
- (void)openCommentWithContentVM:(id)arg1 enterType:(unsigned long long)arg2 enterParams:(id)arg3;
- (unsigned long long)getScrollActionSheetOptionsWithContentVM:(id)arg1;
- (id)actionSheetItemConfigArrayWithContentVM:(id)arg1;
- (void)reloadFeedAtSection:(long long)arg1 animated:(BOOL)arg2;
- (void)onSingleStreamWillPop:(id)arg1 playPosition:(double)arg2;
- (void)onSingleStreamImageDidPop:(id)arg1 detailContentVM:(id)arg2 sourceContentVM:(id)arg3;
- (void)scrollContentVMToCurrentImageIndex:(id)arg1 section:(long long)arg2 animated:(BOOL)arg3;
- (void)applyResumePlayPositionToContentVM:(id)arg1;
- (void)notifyHostDidReturnFromSingleStreamWithContentVM:(id)arg1;
- (long long)sectionForContentVM:(id)arg1;
- (id)recommendFeedVM;
- (id)hostViewController;
- (id)host;
- (void)setHost:(id)arg1;
- (BOOL)globalMuted;
- (void)setGlobalMuted:(BOOL)arg1;
- (id)pendingResumeFeedId;
- (void)setPendingResumeFeedId:(id)arg1;
- (double)pendingResumePlayPosition;
- (void)setPendingResumePlayPosition:(double)arg1;
- (id)lastCommentVC;
- (void)setLastCommentVC:(id)arg1;
- (void).cxx_destruct;
@end
