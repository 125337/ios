@interface MultiDeviceCardManageContentView : UIView
{
    BOOL _expand; // +0x8
    BOOL _singleCard; // +0x9
    MultiDeviceManageInfo * _deviceManageInfo; // +0x10
    id <MultiDeviceCardViewDelegate> _delegate; // +0x18
    id /* block */ _viewUpdateBlock; // +0x20
    UIImageView * _iconImageView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _deviceNameLabel; // +0x38
    MMUIButton * _helpButton; // +0x40
    UIImageView * _expandImageView; // +0x48
    MMUIButton * _expandButton; // +0x50
    UIView * _headerSeparator; // +0x58
    MultiDeviceActionButton * _notificationButton; // +0x60
    MultiDeviceActionButton * _sendFileButton; // +0x68
    MultiDeviceActionButton * _lockButton; // +0x70
    WCAgreementCheckBox * _autoLoginCheckbox; // +0x78
    WCAgreementCheckBox * _keepAliveCheckbox; // +0x80
    UIView * _footerSeparator; // +0x88
    MMUILabel * _logoutLabel; // +0x90
    MMUIButton * _logoutButton; // +0x98
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)updateContent;
- (void)updateIconImage;
- (void)updateViewState;
- (void)updateLayouts;
- (void)updateFrameToFitWidth:(double)arg1;
- (void)reloadView;
- (void)updateView;
- (void)setDeviceManageInfo:(id)arg1;
- (void)setExpand:(BOOL)arg1;
- (void)setSingleCard:(BOOL)arg1;
- (void)onTapExpandButton;
- (void)onTapHelpButton;
- (void)onTapNotificationButton;
- (void)onTapSendFileButton;
- (void)onTapLockButton;
- (void)onTapAutoLoginCheckbox;
- (void)reverseAutoLoginCheckbox;
- (void)onTapKeepAliveCheckbox;
- (void)reverseKeepAliveCheckbox;
- (void)onTapLogoutButton;
- (id)helpButton;
- (id)generateSeparator;
- (id)deviceManageInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isExpand;
- (BOOL)isSingleCard;
- (id /* block */)viewUpdateBlock;
- (void)setViewUpdateBlock:(id /* block */)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)deviceNameLabel;
- (void)setDeviceNameLabel:(id)arg1;
- (void)setHelpButton:(id)arg1;
- (id)expandImageView;
- (void)setExpandImageView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)headerSeparator;
- (void)setHeaderSeparator:(id)arg1;
- (id)notificationButton;
- (void)setNotificationButton:(id)arg1;
- (id)sendFileButton;
- (void)setSendFileButton:(id)arg1;
- (id)lockButton;
- (void)setLockButton:(id)arg1;
- (id)autoLoginCheckbox;
- (void)setAutoLoginCheckbox:(id)arg1;
- (id)keepAliveCheckbox;
- (void)setKeepAliveCheckbox:(id)arg1;
- (id)footerSeparator;
- (void)setFooterSeparator:(id)arg1;
- (id)logoutLabel;
- (void)setLogoutLabel:(id)arg1;
- (id)logoutButton;
- (void)setLogoutButton:(id)arg1;
- (void).cxx_destruct;
@end
