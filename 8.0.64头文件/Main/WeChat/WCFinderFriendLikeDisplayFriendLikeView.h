@interface WCFinderFriendLikeDisplayFriendLikeView : WCFinderFriendLikeDisplayBaseView
{
    NSMutableArray * _roundHeaderViews; // +0x8
    WCFinderSizingRichTextView * _nickNameTextView; // +0x10
    WCFinderSizingRichTextView * _appendTipsView; // +0x18
    UIImageView * _iconImageView; // +0x20
    UIView * _avatorContainerView; // +0x28
    id <WCFinderThanksButtonDelegate> _thankDelegate; // +0x30
    WCFinderThanksButton * _thanksButton; // +0x38
    UILabel * _likeInfoLabel; // +0x40
    UILabel * _likeCountAnimationLabel; // +0x48
    double _headViewLeft; // +0x50
    double _nameLabelLeft; // +0x58
    double _likeIconViewCenterX; // +0x60
    double _likeCountLabelLeft; // +0x68
}
- (id)createThankButton;
- (void)setUpUI;
- (void)setUpComboLikeView;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutUIWithLikeInfoLeft:(double)arg1;
- (void)prepareComboLikeAnimation;
- (void)displayComboLikeAnimationWithComplection:(id /* block */)arg1;
- (void)_startAnimationWithCount:(long long)arg1 totalDisplayCount:(long long)arg2 resultLikeCount:(unsigned long long)arg3 complection:(id /* block */)arg4;
- (id)changeScaleAnimationWithCurrentNumber:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)endComboLikeAnimationWithComplection:(id /* block */)arg1;
- (void)layoutWithLikeAnimation:(BOOL)arg1 infoTips:(id)arg2;
- (void)recoverAnimation;
- (void)relayoutInfo;
- (void)setLikeAnimationLabelCount:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)roundHeaderViews;
- (void)setRoundHeaderViews:(id)arg1;
- (id)nickNameTextView;
- (void)setNickNameTextView:(id)arg1;
- (id)appendTipsView;
- (void)setAppendTipsView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)avatorContainerView;
- (void)setAvatorContainerView:(id)arg1;
- (id)thankDelegate;
- (void)setThankDelegate:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (id)likeInfoLabel;
- (void)setLikeInfoLabel:(id)arg1;
- (id)likeCountAnimationLabel;
- (void)setLikeCountAnimationLabel:(id)arg1;
- (double)headViewLeft;
- (void)setHeadViewLeft:(double)arg1;
- (double)nameLabelLeft;
- (void)setNameLabelLeft:(double)arg1;
- (double)likeIconViewCenterX;
- (void)setLikeIconViewCenterX:(double)arg1;
- (double)likeCountLabelLeft;
- (void)setLikeCountLabelLeft:(double)arg1;
- (void).cxx_destruct;
@end
