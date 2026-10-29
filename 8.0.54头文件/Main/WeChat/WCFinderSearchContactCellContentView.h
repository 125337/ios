@interface WCFinderSearchContactCellContentView : UIView
{
    BOOL _useDarkStyle; // +0x8
    UIView * _avatarContainer; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UIImageView * _liveCircle; // +0x20
    UILabel * _liveTipsLabel; // +0x28
    FavAttributeCPLabel * _nickNameLabel; // +0x30
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x38
    UILabel * _brandTipsLabel; // +0x40
    UILabel * _followLabel; // +0x48
    UILabel * _friendFollowCountLabel; // +0x50
    FavAttributeCPLabel * _authInfoLabel; // +0x58
    FavAttributeCPLabel * _signatureLabel; // +0x60
    UIView * _separatorLine; // +0x68
    UIView * _accessibleView; // +0x70
    id /* block */ _liveClickBlock; // +0x78
}
+ (double)calcuateHeight:(id)arg1;
+ (id)replaceNewlineCharacter2WhitespaceCharacter:(id)arg1;
- (id)initWithDarkStyle:(BOOL)arg1;
- (void)initSubview;
- (void)setClickBlock:(id /* block */)arg1;
- (void)onLiveCircleDidClick;
- (void)prepareForReuse;
- (void)updateSearchInfo:(id)arg1 isShowSeparatorLine:(BOOL)arg2 shouldHideFollow:(BOOL)arg3 useRoundHeader:(BOOL)arg4;
- (void)updateSearchInfo:(id)arg1 params:(id)arg2;
- (void)flexLayoutSubviews;
- (id)currentStyleColor:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)liveCircle;
- (void)setLiveCircle:(id)arg1;
- (id)liveTipsLabel;
- (void)setLiveTipsLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)brandTipsLabel;
- (void)setBrandTipsLabel:(id)arg1;
- (id)followLabel;
- (void)setFollowLabel:(id)arg1;
- (id)friendFollowCountLabel;
- (void)setFriendFollowCountLabel:(id)arg1;
- (id)authInfoLabel;
- (void)setAuthInfoLabel:(id)arg1;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (BOOL)useDarkStyle;
- (void)setUseDarkStyle:(BOOL)arg1;
- (id)accessibleView;
- (void)setAccessibleView:(id)arg1;
- (id /* block */)liveClickBlock;
- (void)setLiveClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

