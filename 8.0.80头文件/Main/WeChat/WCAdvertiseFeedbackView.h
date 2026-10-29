@interface WCAdvertiseFeedbackView : WCAdvertiseFeedbackBaseView <CAAnimationDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    BOOL _hasDislikeInfo; // +0x8
    BOOL _onAnimation; // +0x9
    BOOL _isIndicatorBeRotate; // +0xa
    BOOL _isSpecialAd; // +0xb
    BOOL _showGuideAdManage; // +0xc
    BOOL _showPersonalizedInfo; // +0xd
    BOOL _showPersonalizedPanel; // +0xe
    BOOL _showReceivedReasonBtn; // +0xf
    BOOL _showLikedAdBtn; // +0x10
    WCDataItem * _dataItem; // +0x18
    NSString * _feedbackTitle; // +0x20
    MMUIView * _bgView; // +0x28
    MMUIView * _containerView; // +0x30
    MMUIView * _panelView; // +0x38
    MMUIImageView * _indicatorView; // +0x40
    MMUIView * _reasonBtnContainerView; // +0x48
    MMUILabel * _titleView; // +0x50
    MMUILabel * _descView; // +0x58
    UIButton * _confirmBtn; // +0x60
    MMUIView * _cutOffLine; // +0x68
    UIButton * _complainBtn; // +0x70
    MMUIView * _cutOffLine2; // +0x78
    MMUIView * _buttonMarginView; // +0x80
    UIButton * _likedBtn; // +0x88
    UIButton * _receivedReasonBtn; // +0x90
    NSMutableArray * _reasonBtnArray; // +0x98
    NSMutableArray * _defaultFeedbackBtnArray; // +0xa0
    UIButton * _guideAdManageBtn; // +0xa8
    WCAdFeedbackPersonalizedPanel * _personalizedPanel; // +0xb0
    NSString * _toastTitleOnHide; // +0xb8
    unsigned long long _scene; // +0xc0
    unsigned long long _curToastType; // +0xc8
    NSString * _specialAdWording; // +0xd0
    NSString * _adManageUrl; // +0xd8
    WCCanvasDynamicDataLoader * _dataLoader; // +0xe0
    long long _oldSelectedMode; // +0xe8
    CGPoint _clickPoint; // +0xf0
}
- (id)initWithData:(id)arg1 andClickPoint:(CGPoint)arg2 scene:(unsigned long long)arg3;
- (void)show;
- (void)hide;
- (void)dealloc;
- (void)initRootViewController;
- (void)initFeedBackData;
- (void)initSubview;
- (void)initSpecialAdView;
- (void)hideInner;
- (void)hideInnerWithToast:(id)arg1;
- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)bgView;
- (id)containerView;
- (id)panelView;
- (id)reasonBtnContainerView;
- (id)indicatorView;
- (id)titleView;
- (id)descView;
- (id)confirmBtn;
- (id)cutOffLine;
- (id)cutOffLine2;
- (id)buttonMarginView;
- (id)complainBtn;
- (id)likedBtn;
- (id)receivedReasonBtn;
- (void)initDefaultFeedbackButtons;
- (void)initReasonButtons;
- (id)genReasonBtnWithReason:(id)arg1 iconSVG:(id)arg2;
- (void)initGuideAdManageButton;
- (void)onTapBackground;
- (void)onClickConfirmBtn;
- (void)onClickComplainBtn;
- (void)onClickLikedBtn;
- (void)onClickReceivedReasonBtn;
- (void)onClickGuideAdManageBtn:(id)arg1;
- (void)onClickReasonBtn:(id)arg1;
- (void)onClickNegativeButton;
- (void)onClickPositiveButton;
- (void)onClickNegativeReasonButton:(id)arg1;
- (void)checkAndSetConfirmButtonState:(BOOL)arg1;
- (void)updateConfirmButtonTitle:(id)arg1 weakStyle:(BOOL)arg2;
- (id)fetchSelectedReasonButtonList;
- (void)layoutPanelView:(BOOL)arg1;
- (double)fetchPanelLeftWithWidth:(double)arg1;
- (void)layoutSpecialAdPanelView;
- (void)layoutReasonBtn:(id)arg1 andOffsetY:(double)arg2;
- (void)layoutGuideAdManageViewWithOffsetY:(double)arg1;
- (id)personalizedPanel;
- (void)setupBtnWithRootView:(id)arg1 wording:(id)arg2;
- (void)setupComplainView:(id)arg1;
- (void)checkAndSetContainerFrame;
- (void)setContainerFrame:(BOOL)arg1;
- (void)addCornersToPanelView;
- (void)notifyFeedbackViewDisappear:(unsigned long long)arg1 toastTitle:(id)arg2;
- (void)setNegativeTitleAndDesc;
- (void)setGuideAdManageTitleAndDesc;
- (void)setPersonalizedPanelTitleAndDesc;
- (void)setExtraBtnPanelTitleAndDesc;
- (void)adjustTitleAndDescLabelWidth;
- (BOOL)needShowGuideAdManage;
- (void)onQueryPersonalizedAdSwitch:(BOOL)arg1 status:(id)arg2 operateType:(long long)arg3 userData:(id)arg4;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)feedbackTitle;
- (void)setFeedbackTitle:(id)arg1;
- (BOOL)hasDislikeInfo;
- (void)setHasDislikeInfo:(BOOL)arg1;
- (CGPoint)clickPoint;
- (void)setClickPoint:(CGPoint)arg1;
- (void)setBgView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setPanelView:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setReasonBtnContainerView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void)setConfirmBtn:(id)arg1;
- (void)setCutOffLine:(id)arg1;
- (void)setComplainBtn:(id)arg1;
- (void)setCutOffLine2:(id)arg1;
- (void)setButtonMarginView:(id)arg1;
- (void)setLikedBtn:(id)arg1;
- (void)setReceivedReasonBtn:(id)arg1;
- (id)reasonBtnArray;
- (void)setReasonBtnArray:(id)arg1;
- (id)defaultFeedbackBtnArray;
- (void)setDefaultFeedbackBtnArray:(id)arg1;
- (id)guideAdManageBtn;
- (void)setGuideAdManageBtn:(id)arg1;
- (void)setPersonalizedPanel:(id)arg1;
- (id)toastTitleOnHide;
- (void)setToastTitleOnHide:(id)arg1;
- (BOOL)onAnimation;
- (void)setOnAnimation:(BOOL)arg1;
- (BOOL)isIndicatorBeRotate;
- (void)setIsIndicatorBeRotate:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)curToastType;
- (void)setCurToastType:(unsigned long long)arg1;
- (BOOL)isSpecialAd;
- (void)setIsSpecialAd:(BOOL)arg1;
- (id)specialAdWording;
- (void)setSpecialAdWording:(id)arg1;
- (BOOL)showGuideAdManage;
- (void)setShowGuideAdManage:(BOOL)arg1;
- (id)adManageUrl;
- (void)setAdManageUrl:(id)arg1;
- (BOOL)showPersonalizedInfo;
- (void)setShowPersonalizedInfo:(BOOL)arg1;
- (BOOL)showPersonalizedPanel;
- (void)setShowPersonalizedPanel:(BOOL)arg1;
- (BOOL)showReceivedReasonBtn;
- (void)setShowReceivedReasonBtn:(BOOL)arg1;
- (BOOL)showLikedAdBtn;
- (void)setShowLikedAdBtn:(BOOL)arg1;
- (id)dataLoader;
- (void)setDataLoader:(id)arg1;
- (long long)oldSelectedMode;
- (void)setOldSelectedMode:(long long)arg1;
- (void).cxx_destruct;
@end
