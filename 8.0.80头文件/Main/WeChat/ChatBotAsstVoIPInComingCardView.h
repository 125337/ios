@interface ChatBotAsstVoIPInComingCardView : UIView
{
    int _roomType; // +0x8
    id <ChatBotAsstVoIPInComingCardViewDelegate> _delegate; // +0x10
    NSString * _callId; // +0x18
    NSString * _callerName; // +0x20
    NSString * _callerHeadImageUrl; // +0x28
    UIImageView * _bgImageView; // +0x30
    UIVisualEffectView * _blurView; // +0x38
    MMWebImageView * _avatarImageView; // +0x40
    UILabel * _nameLabel; // +0x48
    UILabel * _subtitleLabel; // +0x50
    UIButton * _rejectButton; // +0x58
    UIButton * _acceptButton; // +0x60
}
- (id)initWithCallId:(id)arg1 roomType:(int)arg2 callerName:(id)arg3 callerHeadImageUrl:(id)arg4;
- (void)setupUI;
- (id)createCircleButtonWithColor:(id)arg1 imageName:(id)arg2 action:(SEL)arg3;
- (void)layoutSubviews;
- (void)onRejectTapped;
- (void)onAcceptTapped;
- (void)onCardTapped:(id)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)callId;
- (void)setCallId:(id)arg1;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (id)callerName;
- (void)setCallerName:(id)arg1;
- (id)callerHeadImageUrl;
- (void)setCallerHeadImageUrl:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end
