@interface WCFinderLiveFeedBubbleView : WCFinderFeedBubbleView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoViewBaseDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _hotSpotJumpInfo; // +0x18
    FinderLiveNoticeInfo * _noticeInfo; // +0x20
    WCFinderLiveNoticeCellViewModel * _liveNoticeVM; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    NSString * _username; // +0x38
    unsigned long long _operatingType; // +0x40
    id /* block */ _onClickNoticeBlock; // +0x48
    id /* block */ _onClickNoticeDetailBlock; // +0x50
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x58
}
- (void)onClickActionButton;
- (void)updateLiveFeedBubbleViewWithUsername:(id)arg1 noticeInfo:(id)arg2;
- (void)doLayout;
- (void)startExposeAction;
- (id)tapGestureRecognizer;
- (void)feedBubbleViewShowDetail:(id)arg1;
- (void)updateActionButtonWhenFree;
- (void)updateLabelsWith:(id)arg1;
- (void)updateActionButtonWhenNeedPay;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)hotSpotJumpInfo;
- (void)setHotSpotJumpInfo:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)liveNoticeVM;
- (void)setLiveNoticeVM:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)operatingType;
- (void)setOperatingType:(unsigned long long)arg1;
- (id /* block */)onClickNoticeBlock;
- (void)setOnClickNoticeBlock:(id /* block */)arg1;
- (id /* block */)onClickNoticeDetailBlock;
- (void)setOnClickNoticeDetailBlock:(id /* block */)arg1;
- (void)setShowPosition:(int)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

