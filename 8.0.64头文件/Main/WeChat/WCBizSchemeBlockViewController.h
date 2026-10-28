@interface WCBizSchemeBlockViewController : MMUIViewController
{
    BOOL _shouldDismissWhenAppear; // +0x70
    id <WCBizSchemeBlockViewControllerDelegate> _delegate; // +0x78
    WCBizSchemeHandleContext * _handleContext; // +0x80
    UIView * _containerView; // +0x88
    UIImageView * _iconView; // +0x90
    UILabel * _titleLabel; // +0x98
    UILabel * _contentLabel; // +0xa0
    UIButton * _actionButton; // +0xa8
    NSMutableArray * _actionButtons; // +0xb0
    CheckExternalUrlAntiSpam * _antiSpamInfo; // +0xb8
}
- (id)init;
- (void)endLoadingAndShowAntiSpamInfoView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)configureLayout;
- (void)viewDidLayoutSubviews;
- (id)iconView;
- (id)titleLabel;
- (id)contentLabel;
- (void)onButtonClicked:(id)arg1;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (void)didEnterBackground;
- (void)didClickBackNavigationItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)handleContext;
- (void)setHandleContext:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (id)antiSpamInfo;
- (void)setAntiSpamInfo:(id)arg1;
- (BOOL)shouldDismissWhenAppear;
- (void)setShouldDismissWhenAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
