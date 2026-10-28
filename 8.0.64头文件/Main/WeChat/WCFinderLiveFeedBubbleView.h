@interface WCFinderLiveFeedBubbleView : WCFinderFeedBubbleView <WCFinderJumpInfoViewProtocol>
{
    WCFinderJumpInfo * _hotSpotJumpInfo; // +0x8
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    WCFinderLiveNoticeCellViewModel * _liveNoticeVM; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    NSString * _username; // +0x28
    unsigned long long _operatingType; // +0x30
    id /* block */ _onClickNoticeBlock; // +0x38
    id /* block */ _onClickNoticeDetailBlock; // +0x40
    UITapGestureRecognizer * _tapGestureRecognizer; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onClickActionButton;
- (void)updateLiveFeedBubbleViewWithUsername:(id)arg1 noticeInfo:(id)arg2;
- (void)doLayout;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)tapGestureRecognizer;
- (void)feedBubbleViewShowDetail:(id)arg1;
- (void)updateActionButtonWhenFree;
- (id)timeStringWith:(id)arg1;
- (void)updateLabelsForSingleLineStyleWith:(id)arg1;
- (void)updateLabelsWith:(id)arg1;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButtonWhenNeedPayForSingleLineStyle;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)hotSpotJumpInfo;
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
- (void)setTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
