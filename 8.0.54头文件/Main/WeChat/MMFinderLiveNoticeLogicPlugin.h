@interface MMFinderLiveNoticeLogicPlugin : MMLiveTaskBaseFunctionPlugin <WCFinderLiveExt>
{
    BOOL _isDisplayingNoticeBubble; // +0x8
    unsigned int _delayDisappearDurationAfterReserve; // +0xc
    UIView * _noticeBubbleView; // +0x10
    MMFinderLiveBuyTicketHandle * _ticketHandle; // +0x18
    FinderLiveNoticeListInfo * _noticeListInfo; // +0x20
    FinderLiveNoticeInfo * _bubbleNoticeInfo; // +0x28
}
- (id)initWithLiveTask:(id)arg1;
- (void)dismissBubble:(BOOL)arg1;
- (void)updateNoticeListInfo:(id)arg1;
- (id)getNoticeListInfo;
- (id)reserveableNoticeInfoForAudience;
- (id)usableNoticeInfoForAudience;
- (id)ticketHandle;
- (BOOL)isNoticeValidForDisplay:(id)arg1 checkReserveState:(BOOL)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onLiveNoticeListInfoForAudienceDisplayUpdatedWithTaskId:(id)arg1 noticeListInfo:(id)arg2;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)dismissBubbleOnReseveIfNeeded;
- (void)delayDismissBubble;
- (BOOL)isDisplayingNoticeBubble;
- (void)setIsDisplayingNoticeBubble:(BOOL)arg1;
- (id)noticeBubbleView;
- (void)setNoticeBubbleView:(id)arg1;
- (void)setTicketHandle:(id)arg1;
- (id)noticeListInfo;
- (void)setNoticeListInfo:(id)arg1;
- (id)bubbleNoticeInfo;
- (void)setBubbleNoticeInfo:(id)arg1;
- (unsigned int)delayDisappearDurationAfterReserve;
- (void)setDelayDisappearDurationAfterReserve:(unsigned int)arg1;
- (void).cxx_destruct;
@end

