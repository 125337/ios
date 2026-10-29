@interface MMFinderReserveLiveNoticeTipsBubbleView : MMFinderLiveBottomRightBubbleView
{
    id /* block */ _closeAction; // +0x8
    id /* block */ _confirmAction; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
}
- (id)initWithTaskId:(id)arg1 noticeInfo:(id)arg2 closeAction:(id /* block */)arg3 confirmAction:(id /* block */)arg4;
- (void)onCloseTapped;
- (void)updateActionButton;
- (void)onActionTapped;
- (void)updateTitleLabel;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void).cxx_destruct;
@end

