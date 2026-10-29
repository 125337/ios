@interface MultiTalkTipsView : UIView
{
    CContact * _contact; // +0x8
    BOOL _isUnfold; // +0x10
    BOOL _isAnimating; // +0x11
    UIImageView * _bgView; // +0x18
    UIImageView * _iconView; // +0x20
    UIImageView * _iconHLView; // +0x28
    UILabel * _foldTipsLabel; // +0x30
    UIImageView * _arrowView; // +0x38
    UILabel * _unfoldTitleLabel; // +0x40
    UIButton * _enterButton; // +0x48
    UIButton * _cancelButton; // +0x50
    NSString * _wxGroupId; // +0x58
    MultiTalkBannerItem * _bannerInfo; // +0x60
    unsigned int _startTalkTimestamp; // +0x68
    BOOL _isTimerStart; // +0x6c
    NSArray * _userList; // +0x70
    MMUIView * _headImgContainerView; // +0x78
    MMBorderView * _bannerBottomLine; // +0x80
    MMBorderView * _buttonTopLine; // +0x88
    MMBorderView * _buttonBottomLine; // +0x90
    MMBorderView * _buttonMiddleLine; // +0x98
}
- (id)initWithContact:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)updateHeadViews;
- (void)setTipsTitle:(id)arg1;
- (void)unfoldAnimationFinish;
- (void)doUnfoldAnimation;
- (void)unfold;
- (void)doFoldAnimation;
- (void)resetTipsView;
- (void)startIconChangeAnimation;
- (void)doIconHighlightAnimation;
- (void)doIconDarkAnimation;
- (void)stopIconChangeAnimation;
- (BOOL)checkTouchPoint:(CGPoint)arg1 IfInView:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onCancelButtonPress;
- (void)onEnterButtonPress;
- (void)joinCurrentBannerMultiTalk;
- (void).cxx_destruct;
@end

