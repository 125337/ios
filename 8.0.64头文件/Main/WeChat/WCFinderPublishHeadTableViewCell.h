@interface WCFinderPublishHeadTableViewCell : UITableViewCell
{
    BOOL _isInDarkMode; // +0x8
    id <WCFinderPublishHeadTableViewCellProtocol> _delegate; // +0x10
    UIButton * _notifyButton; // +0x18
    UILabel * _unReadLabel; // +0x20
    MMHeadImageView * _headImageView; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateContentViewBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (void)adjustUIFrame;
- (void)onClickNotificationMsgBtn;
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
- (void).cxx_destruct;
@end
