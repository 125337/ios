@interface FBSDKLoginButton : FBSDKButton <FBSDKButtonImpressionTracking>
{
    BOOL _hasShownTooltipBubble; // +0x8
    FBSDKLoginManager * _loginManager; // +0x10
    NSString * _userID; // +0x18
    NSString * _userName; // +0x20
    id <FBSDKLoginButtonDelegate> _delegate; // +0x28
    NSArray * _permissions; // +0x30
    NSArray * _publishPermissions; // +0x38
    NSArray * _readPermissions; // +0x40
    unsigned long long _tooltipBehavior; // +0x48
    unsigned long long _tooltipColorStyle; // +0x50
}
- (void)dealloc;
- (unsigned long long)defaultAudience;
- (void)setDefaultAudience:(unsigned long long)arg1;
- (unsigned long long)loginBehavior;
- (void)setLoginBehavior:(unsigned long long)arg1;
- (void)setReadPermissions:(id)arg1;
- (void)setPublishPermissions:(id)arg1;
- (id)defaultFont;
- (id)backgroundColor;
- (void)didMoveToWindow;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)analyticsParameters;
- (id)impressionTrackingEventName;
- (id)impressionTrackingIdentifier;
- (void)configureButton;
- (void)_accessTokenDidChangeNotification:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (id)_logOutTitle;
- (id)_longLogInTitle;
- (id)_shortLogInTitle;
- (void)_showTooltipIfNeeded;
- (void)_updateContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)permissions;
- (void)setPermissions:(id)arg1;
- (id)publishPermissions;
- (id)readPermissions;
- (unsigned long long)tooltipBehavior;
- (void)setTooltipBehavior:(unsigned long long)arg1;
- (unsigned long long)tooltipColorStyle;
- (void)setTooltipColorStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

