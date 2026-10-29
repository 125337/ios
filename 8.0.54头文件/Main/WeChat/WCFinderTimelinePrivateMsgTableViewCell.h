@interface WCFinderTimelinePrivateMsgTableViewCell : UITableViewCell <WCFinderContactExt>
{
    BOOL _isInDarkMode; // +0x8
    id <WCFinderTimelinePrivateMsgTableViewCellDelegate> _delegate; // +0x10
    UIButton * _notifyButton; // +0x18
    UILabel * _unReadLabel; // +0x20
    WCFinderHeadImageView * _headImageView; // +0x28
    NSString * _currentMsgUsername; // +0x30
    WCFinderContact * _finderContact; // +0x38
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (void)adjustUIFrame;
- (void)onClickNotificationMsgBtn;
- (void)onFinderContactUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

