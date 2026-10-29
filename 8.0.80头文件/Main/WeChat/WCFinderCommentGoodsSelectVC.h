@interface WCFinderCommentGoodsSelectVC : MMUIHalfScreenViewController
{
    BOOL _miniAppHasSet; // +0x70
    UIView * _containerView; // +0x78
    UIButton * _backButton; // +0x80
    UILabel * _titleView; // +0x88
    UIScreenEdgePanGestureRecognizer * _popGesture; // +0x90
    NSString * _tid; // +0x98
    WCFinderGoodsInfo * _selectedGoodsInfo; // +0xa0
    WCFinderJumpInfo * _selectedGoodsJumpInfo; // +0xa8
    WCFinderAnimationLoadingView * _loadingView; // +0xb0
}
- (id)initWithTid:(id)arg1;
- (void)baseInit;
- (BOOL)useTransparentNavibar;
- (BOOL)useCustomNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (double)topViewHeight;
- (void)setupUI;
- (void)setupShopMiniApp;
- (void)setupPopGes;
- (void)setupTopView;
- (void)handlePopGesture:(id)arg1;
- (id)genCommentGoodsJumpInfoWithGoods:(id)arg1;
- (void)completeSelectGoodsTitle:(id)arg1 selectedRange:(_NSRange)arg2;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)popGesture;
- (void)setPopGesture:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)selectedGoodsInfo;
- (void)setSelectedGoodsInfo:(id)arg1;
- (id)selectedGoodsJumpInfo;
- (void)setSelectedGoodsJumpInfo:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)miniAppHasSet;
- (void)setMiniAppHasSet:(BOOL)arg1;
- (void).cxx_destruct;
@end
