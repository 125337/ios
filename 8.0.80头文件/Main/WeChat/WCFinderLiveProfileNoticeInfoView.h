@interface WCFinderLiveProfileNoticeInfoView : UIView
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    FinderLiveNextLiveNotificationInfo * _nextLiveNotificationInfo; // +0x10
    id /* block */ _onActionButtonClicked; // +0x18
    id /* block */ _onNextLiveNoticeButtonClicked; // +0x20
    UILabel * _timeLabel; // +0x28
    UILabel * _introLabel; // +0x30
    MMUIButton * _actionButton; // +0x38
    WCFinderLiveNoticePayActionView * _payActionView; // +0x40
    MMUIButton * _nextLiveNoticeButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithNoticeInfo:(id)arg1 nextLiveNotificationInfo:(id)arg2;
- (void)layoutSubviews;
- (void)layoutWithNoticeInfo;
- (void)updateActionButtonForNoticeInfo;
- (void)updateFreeActionButton;
- (void)updatePayActionButton;
- (void)layoutWithNextLiveNotificationInfo;
- (void)onActionButtonClicked:(id)arg1;
- (void)onNextLiveNoticeButtonClicked:(id)arg1;
- (id)getStartTimeText:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)nextLiveNotificationInfo;
- (void)setNextLiveNotificationInfo:(id)arg1;
- (id /* block */)onActionButtonClicked;
- (void)setOnActionButtonClicked:(id /* block */)arg1;
- (id /* block */)onNextLiveNoticeButtonClicked;
- (void)setOnNextLiveNoticeButtonClicked:(id /* block */)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)introLabel;
- (void)setIntroLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)payActionView;
- (void)setPayActionView:(id)arg1;
- (id)nextLiveNoticeButton;
- (void)setNextLiveNoticeButton:(id)arg1;
- (void).cxx_destruct;
@end
