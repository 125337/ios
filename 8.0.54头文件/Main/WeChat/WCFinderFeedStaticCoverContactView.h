@interface WCFinderFeedStaticCoverContactView : UIView
{
    BOOL _alwaysHideLiveNowView; // +0x8
    id <WCFinderFeedStaticCoverContactViewDelegate> _delegate; // +0x10
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x18
    WCFinderHeadImageView * _avatarImageView; // +0x20
    FavAttributeCPLabel * _nicknameLabel; // +0x28
    WCFinderLiveNowView * _liveNowView; // +0x30
    WCFinderMaskButton * _privateMsgBtn; // +0x38
    UILabel * _reasonLabel; // +0x40
    unsigned long long _styleMode; // +0x48
    WCFinderContact * _contact; // +0x50
}
+ (double)defaultHeight;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (id)privateMsgBtn;
- (id)reasonLabel;
- (void)updateContentWithContact:(id)arg1;
- (void)updateContentWithContact:(id)arg1 highlightWords:(id)arg2;
- (void)updateContentWithContact:(id)arg1 highlightWords:(id)arg2 isShowPrivateMsgStyle:(BOOL)arg3 displayReason:(id)arg4;
- (void)useTaskBarStyle;
- (void)renderNickNameLabel:(id)arg1 highlightWords:(id)arg2;
- (double)calNickNameMaxWidth:(id)arg1 isTaskBarStyle:(BOOL)arg2;
- (void)updateLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)adjustMargin;
- (void)switchUIMode:(unsigned long long)arg1;
- (void)didClickPrivateMsgBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)alwaysHideLiveNowView;
- (void)setAlwaysHideLiveNowView:(BOOL)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)liveNowView;
- (void)setLiveNowView:(id)arg1;
- (void)setPrivateMsgBtn:(id)arg1;
- (void)setReasonLabel:(id)arg1;
- (unsigned long long)styleMode;
- (void)setStyleMode:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

