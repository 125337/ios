@interface KidsWatchMainViewController : KidsWatchBaseViewController <ILinkEventExt>
{
    MMUILabel * _titleLabel; // +0x70
    KidsWatchActionCardView * _loginCardView; // +0x78
    RichTextView * _registerTextView; // +0x80
    SightIconView * _loadingView; // +0x88
    UIImageView * _shapeView; // +0x90
    UIImageView * _bottomBackgroundView; // +0x98
}
- (void)viewDidLoad;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)showMainViewNeedShowRegister:(BOOL)arg1;
- (void)onTapLoginButton;
- (void)onTapRegisterButton;
- (void)onTapHelpBarButton;
- (void)onTapCloseBarButtonItem;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)loginCardView;
- (void)setLoginCardView:(id)arg1;
- (id)registerTextView;
- (void)setRegisterTextView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)shapeView;
- (void)setShapeView:(id)arg1;
- (id)bottomBackgroundView;
- (void)setBottomBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
