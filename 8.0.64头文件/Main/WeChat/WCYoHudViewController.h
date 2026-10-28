@interface WCYoHudViewController : MMUIViewController
{
    int _yoType; // +0x70
    unsigned int _yoTime; // +0x74
    UIView * _containerView; // +0x78
    UILabel * _nameLabel; // +0x80
    UILabel * _descriptionLabel; // +0x88
    UILabel * _timeLabel; // +0x90
    WCYoAvatarView * _avatarView; // +0x98
    UIImageView * _checkedMaskView; // +0xa0
    UIButton * _replyButton; // +0xa8
    NSString * _username; // +0xb0
    unsigned long long _count; // +0xb8
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)containerView;
- (void)changeUIWithYoType:(int)arg1;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 nameLabelString:(id)arg4 descriptionString:(id)arg5 allowReply:(BOOL)arg6;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 nameLabelString:(id)arg4 descriptionString:(id)arg5 timeString:(id)arg6 allowReply:(BOOL)arg7;
- (void)doAvatarBounceAnimation;
- (void)didTapReplyButton:(id)arg1;
- (void)didTapAvatarView:(id)arg1;
- (void)addYoCount:(unsigned long long)arg1 forUsername:(id)arg2 type:(int)arg3;
- (void)refreshDescriptionTime;
- (void)setContainerView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)checkedMaskView;
- (void)setCheckedMaskView:(id)arg1;
- (id)replyButton;
- (void)setReplyButton:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (int)yoType;
- (void)setYoType:(int)arg1;
- (unsigned int)yoTime;
- (void)setYoTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
