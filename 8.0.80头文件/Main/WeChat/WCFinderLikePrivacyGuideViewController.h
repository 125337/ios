@interface WCFinderLikePrivacyGuideViewController : WCFinderCustomPanelSheet <ILinkEventExt>
{
    id /* block */ _linkJumpAction; // +0x70
    id /* block */ _confirmAction; // +0x78
    id /* block */ _secondaryAction; // +0x80
    id /* block */ _getReportParams; // +0x88
    WCFinderLikePrivacyGuideParams * _params; // +0x90
    UIImageView * _iconImageView; // +0x98
    WCFinderRichTextView * _titleLabel; // +0xa0
    WCFinderRichTextView * _contentLabel; // +0xa8
    UIView * _userInfoContainerView; // +0xb0
    MMHeadImageView * _userAvatarView; // +0xb8
    WCFinderRichTextView * _userNameAndLikeLabel; // +0xc0
    UIView * _funcEduStyleLikeContainer; // +0xc8
    MMUIButton * _confirmButton; // +0xd0
    MMUIButton * _denyButton; // +0xd8
}
+ (int)educationBizTypeFromGuideType:(unsigned long long)arg1;
+ (id)eduItemForGuideType:(unsigned long long)arg1 fromEducationInfo:(id)arg2;
+ (BOOL)isStyleTypeSupported:(int)arg1 forBizType:(int)arg2;
- (id)initWithParams:(id)arg1;
- (id)loadContentView;
- (void)_setupSubviewsInContentView:(id)arg1;
- (void)_layoutForFuncEduStyleLikeGuideInContentView:(id)arg1;
- (void)_layoutForSafetyStyleLikeGuideInContentView:(id)arg1;
- (void)_layoutForUnlikeGuideInContentView:(id)arg1;
- (void)_layoutForAntiMistouchGuideInContentView:(id)arg1;
- (void)reloadLayout;
- (long long)closeButtonStyle;
- (void)showOnView:(id)arg1;
- (id)viewIDForGuideType:(unsigned long long)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)linkJumpAction;
- (void)setLinkJumpAction:(id /* block */)arg1;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id /* block */)secondaryAction;
- (void)setSecondaryAction:(id /* block */)arg1;
- (id /* block */)getReportParams;
- (void)setGetReportParams:(id /* block */)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)userInfoContainerView;
- (void)setUserInfoContainerView:(id)arg1;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg1;
- (id)userNameAndLikeLabel;
- (void)setUserNameAndLikeLabel:(id)arg1;
- (id)funcEduStyleLikeContainer;
- (void)setFuncEduStyleLikeContainer:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)denyButton;
- (void)setDenyButton:(id)arg1;
- (void).cxx_destruct;
@end
