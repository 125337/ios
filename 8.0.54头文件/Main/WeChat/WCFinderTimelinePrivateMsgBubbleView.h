@interface WCFinderTimelinePrivateMsgBubbleView : WCFinderTimelineBubbleView <WCFinderContactExt>
{
    id <WCFinderTimelinePrivateMsgBubbleViewDelegate> _delegate; // +0x8
    UIButton * _notifyButton; // +0x10
    UILabel * _unReadLabel; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    NSString * _currentMsgUsername; // +0x28
    WCFinderContact * _finderContact; // +0x30
    UIImageView * _arrowImageView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (void)adjustUIFrame;
- (void)adjustButtonWidth:(double)arg1;
- (void)onClickNotificationMsgBtn;
- (void)onFinderContactUpdate:(id)arg1;
- (id)getBubbleBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)notifyButton;
- (void)setNotifyButton:(id)arg1;
- (id)unReadLabel;
- (void)setUnReadLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)currentMsgUsername;
- (void)setCurrentMsgUsername:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

