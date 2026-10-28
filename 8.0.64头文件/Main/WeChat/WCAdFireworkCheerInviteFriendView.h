@interface WCAdFireworkCheerInviteFriendView : MMUIView
{
    BOOL _contentShowFlag; // +0x8
    id <WCAdFireworkCheerInviteFriendViewDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdFireworkCheerInfo * _fireworkCheerInfo; // +0x20
    unsigned long long _contentItemScene; // +0x28
    MMUIView * _bgView; // +0x30
    UIButton * _inviteButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 fireworkCheerInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;
- (void)dealloc;
- (void)initView;
- (void)showContent;
- (id)bgView;
- (id)inviteButton;
- (void)onInviteButtonClick:(id)arg1;
- (void)startShowContentAnimation;
- (id)socialLikeLogic;
- (void)onFireworkCheerCommentAnimationStarted:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)fireworkCheerInfo;
- (void)setFireworkCheerInfo:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setBgView:(id)arg1;
- (void)setInviteButton:(id)arg1;
- (BOOL)contentShowFlag;
- (void)setContentShowFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
