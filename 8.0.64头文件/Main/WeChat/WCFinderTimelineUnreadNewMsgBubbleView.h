@interface WCFinderTimelineUnreadNewMsgBubbleView : WCFinderTimelineBubbleView
{
    id <WCFinderTimelineUnreadNewMsgBubbleViewProtocol> _delegate; // +0x8
    unsigned long long _unReadMsgCount; // +0x10
    UIButton * _notifyButton; // +0x18
    RichTextView * _textView; // +0x20
    MMHeadImageView * _headImageView; // +0x28
    UIImageView * _arrowImageView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (double)maxTextWidth;
- (double)configButtonWidth;
- (void)adjustUIFrame;
- (void)adjustButtonWidth:(double)arg1;
- (void)onClickNotificationMsgBtn;
- (id)getBubbleBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)unReadMsgCount;
- (void)setUnReadMsgCount:(unsigned long long)arg1;
- (id)notifyButton;
- (void)setNotifyButton:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
