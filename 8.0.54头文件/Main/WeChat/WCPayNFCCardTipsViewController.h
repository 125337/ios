@interface WCPayNFCCardTipsViewController : WCPayBaseViewController
{
    BOOL _needCheckTime; // +0x90
    int _currentCountDownSec; // +0x94
    id <WCPayNFCCardTipsViewControllerDelegate> _m_delegate; // +0x98
    NFCCardTipsUIViewData * _m_viewData; // +0xa0
    UIView * _contentView; // +0xa8
    WCPayWebImageView * _cardLogoImageView; // +0xb0
    UIImageView * _iconView; // +0xb8
    UILabel * _titleLabel; // +0xc0
    UILabel * _descLabel; // +0xc8
    UILabel * _countDownLabel; // +0xd0
    UIView * _middleTipsView; // +0xd8
    UIView * _upperLineView; // +0xe0
    UILabel * _middleLeftTextLabel; // +0xe8
    UILabel * _middleRightTextLabel; // +0xf0
    UIView * _lowerLineView; // +0xf8
    UIButton * _doneButton; // +0x100
    id /* block */ _onDoneBlk; // +0x108
    MMUIActivityIndicatorView * _loadingView; // +0x110
}
- (void)setOnDoneCallBack:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onBack;
- (void)setDelegate:(id)arg1;
- (void)setViewData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)initNavigationBar;
- (void)updateViewData;
- (void)updateLoadingView;
- (id)navigationBarBackgroundColor;
- (void)updateCardLogo;
- (void)viewDidAppear:(BOOL)arg1;
- (void)ticking;
- (id)countDownLabelString;
- (void)updateCountDownLabel;
- (id)getStatusImage:(id)arg1;
- (void)updateTitle;
- (void)updateDesc;
- (void)updateDoneButton;
- (void)onClickDoneBtn:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_viewData;
- (void)setM_viewData:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)cardLogoImageView;
- (void)setCardLogoImageView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg1;
- (int)currentCountDownSec;
- (void)setCurrentCountDownSec:(int)arg1;
- (id)middleTipsView;
- (void)setMiddleTipsView:(id)arg1;
- (id)upperLineView;
- (void)setUpperLineView:(id)arg1;
- (id)middleLeftTextLabel;
- (void)setMiddleLeftTextLabel:(id)arg1;
- (id)middleRightTextLabel;
- (void)setMiddleRightTextLabel:(id)arg1;
- (id)lowerLineView;
- (void)setLowerLineView:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (BOOL)needCheckTime;
- (void)setNeedCheckTime:(BOOL)arg1;
- (id /* block */)onDoneBlk;
- (void)setOnDoneBlk:(id /* block */)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

