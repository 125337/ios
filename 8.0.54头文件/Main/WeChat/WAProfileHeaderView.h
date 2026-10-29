@interface WAProfileHeaderView : UIView
{
    BOOL _showServiceButton; // +0x8
    id <WAProfileHeaderViewDelegate> _delegate; // +0x10
    WAContact * _contact; // +0x18
    MMWebImageView * _avatarView; // +0x20
    YYLabel * _nameLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    UIButton * _enterButton; // +0x38
    UIButton * _serviceButton; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)setShowServiceButton:(BOOL)arg1;
- (void)onHighlightBorder:(id)arg1;
- (void)onUnhighlightBorder:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)setContact:(id)arg1;
- (void)layoutIfNeeded;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (BOOL)showServiceButton;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)enterButton;
- (void)setEnterButton:(id)arg1;
- (id)serviceButton;
- (void)setServiceButton:(id)arg1;
- (void).cxx_destruct;
@end

