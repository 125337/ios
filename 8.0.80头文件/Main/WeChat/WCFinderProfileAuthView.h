@interface WCFinderProfileAuthView : UIView
{
    BOOL _hideArrowTips; // +0x8
    BOOL _displayInCoverd; // +0x9
    double _horizontalPadding; // +0x10
    double _textPaddingLeft; // +0x18
    double _iconCenterX; // +0x20
    RichTextView * _authInfoLabel; // +0x28
    WCFinderVerifiedByFriendsView * _verifiedByFriendsView; // +0x30
    WCFinderAuthInfoIconView * _authIconView; // +0x38
    UIImageView * _arrowView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (long long)lineNumber;
- (void)setLineNumber:(long long)arg1;
- (id)createAuthInfoView;
- (void)updateWithAuthInfo:(id)arg1 width:(double)arg2 withAuthStr:(BOOL)arg3;
- (void)updateWithAuthInfo:(id)arg1 width:(double)arg2;
- (void)setTextColor:(id)arg1;
- (void)setDisplayInCoverd:(BOOL)arg1;
- (id)displayAuthInfoText:(id)arg1;
- (id)displayAuthInfoTextWithoutAuthStr:(id)arg1;
- (id)accessibilityLabelForInfoText:(id)arg1;
- (void)onTapAuthLabel;
- (void)onTapFriendsVerified;
- (BOOL)isAccessibilityElement;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (double)textPaddingLeft;
- (void)setTextPaddingLeft:(double)arg1;
- (double)iconCenterX;
- (void)setIconCenterX:(double)arg1;
- (BOOL)hideArrowTips;
- (void)setHideArrowTips:(BOOL)arg1;
- (BOOL)displayInCoverd;
- (id)authInfoLabel;
- (void)setAuthInfoLabel:(id)arg1;
- (id)verifiedByFriendsView;
- (void)setVerifiedByFriendsView:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
