@interface MMEasterEggNewYearActivityViewController : MMUIViewController <MMEasterEggNewYearActivityCardViewDelegate>
{
    BOOL _isFromChatRoom; // +0x70
    BOOL _canShowCard; // +0x71
    id <MMEasterEggNewYearActivityViewControllerDelegate> _delegate; // +0x78
    MMEasterEggNewYearActivityInfo * _activityInfo; // +0x80
    MMEasterEggNewYearActivityReportObject * _reportObject; // +0x88
    UIScrollView * _contentView; // +0x90
    UIImageView * _backgroundLogoView; // +0x98
    UIButton * _bottomLinkButton; // +0xa0
    UILabel * _bottomSubLabel; // +0xa8
    UIView * _separatorView; // +0xb0
    UIButton * _disableButton; // +0xb8
    UIImageView * _bigLuckyBagView; // +0xc0
    MMEasterEggNewYearActivityCardView * _cardView; // +0xc8
    MMEasterEggNewYearActivityMaterialInfo * _materialInfo; // +0xd0
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0xd8
}
- (id)initWithActivityInfo:(id)arg1 reportSessionId:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initView;
- (void)initData;
- (void)initTicking;
- (void)initGesture;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractiveDismiss;
- (long long)preferredStatusBarStyle;
- (BOOL)useBlackStatusbar;
- (void)viewDidTransitionToNewSize;
- (void)continueWithMaterialInfo:(id)arg1;
- (void)closeWithError:(id)arg1 reason:(int)arg2;
- (void)layoutContentView;
- (void)layoutButtonLinkButton;
- (void)enableBottomLink:(id)arg1;
- (id)getResultCardViewAnimation;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onTapBottomLinkButton;
- (void)onTapDisableButton;
- (void)showCardIfNeeded;
- (void)openMoneyForMaterialId:(unsigned long long)arg1;
- (void)getCouponForAppId:(id)arg1 stockId:(id)arg2;
- (void)jumpToPageWithType:(unsigned long long)arg1 info:(id)arg2;
- (void)onTapActionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (BOOL)isFromChatRoom;
- (void)setIsFromChatRoom:(BOOL)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)backgroundLogoView;
- (void)setBackgroundLogoView:(id)arg1;
- (id)bottomLinkButton;
- (void)setBottomLinkButton:(id)arg1;
- (id)bottomSubLabel;
- (void)setBottomSubLabel:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)disableButton;
- (void)setDisableButton:(id)arg1;
- (id)bigLuckyBagView;
- (void)setBigLuckyBagView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)materialInfo;
- (void)setMaterialInfo:(id)arg1;
- (BOOL)canShowCard;
- (void)setCanShowCard:(BOOL)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (void).cxx_destruct;
@end
