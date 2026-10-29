@interface MMLiveFollowConfirmView : MMUIView
{
    BOOL _isPop; // +0x8
    id /* block */ _block; // +0x10
    long long _type; // +0x18
    UIView * _dialogView; // +0x20
    UILabel * _title; // +0x28
    WCFinderHeadImageView * _anchorHeadImageView; // +0x30
    MMUILabel * _anchorNameLabel; // +0x38
    MMWebImageView * _authIconView; // +0x40
    MMUILabel * _followNumLabel; // +0x48
    UIButton * _exitButton; // +0x50
    UIButton * _followButton; // +0x58
    MMUILabel * _isFollowed; // +0x60
    UIImageView * _followedIcon; // +0x68
    UIView * _vertLine; // +0x70
    UIView * _horiLine; // +0x78
    long long _friendFollowCount; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateAuthInfo:(id)arg1;
- (void)showWithContact:(id)arg1 isPopup:(BOOL)arg2 isTop:(BOOL)arg3;
- (void)showWithContact:(id)arg1 liveContext:(id)arg2 isPopup:(BOOL)arg3 isTop:(BOOL)arg4;
- (void)layoutBoundBizLiveFollowConfirm:(id)arg1 liveContext:(id)arg2 isPopup:(BOOL)arg3;
- (void)layoutFinderLiveFollowConfirm:(id)arg1 isPopup:(BOOL)arg2 isTop:(BOOL)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onExitClickBtn:(id)arg1;
- (void)onFollowClickBtn:(id)arg1;
- (void)delayClose;
- (void)hideView:(long long)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)dialogView;
- (void)setDialogView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)followNumLabel;
- (void)setFollowNumLabel:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)followButton;
- (void)setFollowButton:(id)arg1;
- (id)isFollowed;
- (void)setIsFollowed:(id)arg1;
- (id)followedIcon;
- (void)setFollowedIcon:(id)arg1;
- (id)vertLine;
- (void)setVertLine:(id)arg1;
- (id)horiLine;
- (void)setHoriLine:(id)arg1;
- (BOOL)isPop;
- (void)setIsPop:(BOOL)arg1;
- (long long)friendFollowCount;
- (void)setFriendFollowCount:(long long)arg1;
- (void).cxx_destruct;
@end

