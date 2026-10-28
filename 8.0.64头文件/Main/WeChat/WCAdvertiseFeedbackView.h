@interface WCAdvertiseFeedbackView : WCAdvertiseFeedbackBaseView <CAAnimationDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    BOOL _hasDislikeInfo; // +0x8
    BOOL _onAnimation; // +0x9
    BOOL _isIndicatorBeRotate; // +0xa
    BOOL _isSpecialAd; // +0xb
    BOOL _showGuideAdManage; // +0xc
    BOOL _showPersonalizedPanel; // +0xd
    WCDataItem * _dataItem; // +0x10
    NSString * _feedbackTitle; // +0x18
    MMUIView * _bgView; // +0x20
    MMUIView * _containerView; // +0x28
    MMUIView * _panelView; // +0x30
    MMUIImageView * _indicatorView; // +0x38
    MMUIView * _reasonBtnContainerView; // +0x40
    MMUILabel * _titleView; // +0x48
    MMUILabel * _descView; // +0x50
    UIButton * _confirmBtn; // +0x58
    MMUIView * _cutOffLine; // +0x60
    UIButton * _complainBtn; // +0x68
    NSMutableArray * _reasonBtnArray; // +0x70
    NSMutableArray * _defaultFeedbackBtnArray; // +0x78
    UIButton * _guideAdManageBtn; // +0x80
    WCAdFeedbackPersonalizedPanel * _personalizedPanel; // +0x88
    NSString * _toastTitleOnHide; // +0x90
    unsigned long long _scene; // +0x98
    NSString * _specialAdWording; // +0xa0
    NSString * _adManageUrl; // +0xa8
    WCCanvasDynamicDataLoader * _dataLoader; // +0xb0
    long long _oldSelectedMode; // +0xb8
    CGPoint _clickPoint; // +0xc0
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
- (id)complainBtn;
- (void)initDefaultFeedbackButtons;
- (void)initReasonButtons;
- (id)genReasonBtnWithReason:(id)arg1 iconSVG:(id)arg2;
- (void)initGuideAdManageButton;
- (void)onTapBackground;
- (void)onClickConfirmBtn;
- (void)onClickComplainBtn;
- (void)onClickGuideAdManageBtn:(id)arg1;
- (void)onClickReasonBtn:(id)arg1;
- (void)onClickNegativeButton;
- (void)onClickPositiveButton;
- (void)onClickNegativeReasonButton:(id)arg1;
- (void)checkAndSetConfirmButtonState;
- (void)updateConfirmButtonTitle:(id)arg1 weakStyle:(BOOL)arg2;
- (id)fetchSelectedReasonButtonList;
- (void)layoutPanelView:(BOOL)arg1;
- (void)layoutSpecialAdPanelView;
- (void)layoutReasonBtn:(id)arg1 andOffsetY:(double)arg2;
- (void)layoutGuideAdManageViewWithOffsetY:(double)arg1;
- (id)personalizedPanel;
- (void)setupComplainView:(id)arg1;
- (void)checkAndSetContainerFrame;
- (void)setContainerFrame:(BOOL)arg1;
- (void)addCornersToPanelView;
- (void)notifyFeedbackViewDisappear:(id)arg1;
- (void)setNegativeTitleAndDesc;
- (void)setGuideAdManageTitleAndDesc;
- (void)setPersonalizedPanelTitleAndDesc;
- (void)adjustTitleAndDescLabelWidth;
- (BOOL)needShowGuideAdManage;
- (void)onQueryPersonalizedAdSwitch:(BOOL)arg1 status:(id)arg2 userData:(id)arg3;
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
- (BOOL)isSpecialAd;
- (void)setIsSpecialAd:(BOOL)arg1;
- (id)specialAdWording;
- (void)setSpecialAdWording:(id)arg1;
- (BOOL)showGuideAdManage;
- (void)setShowGuideAdManage:(BOOL)arg1;
- (id)adManageUrl;
- (void)setAdManageUrl:(id)arg1;
- (BOOL)showPersonalizedPanel;
- (void)setShowPersonalizedPanel:(BOOL)arg1;
- (id)dataLoader;
- (void)setDataLoader:(id)arg1;
- (long long)oldSelectedMode;
- (void)setOldSelectedMode:(long long)arg1;
- (void).cxx_destruct;
@end
