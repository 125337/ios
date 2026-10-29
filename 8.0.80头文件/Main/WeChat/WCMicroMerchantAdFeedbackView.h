@interface WCMicroMerchantAdFeedbackView : MMUIWindow <CAAnimationDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    BOOL _hasDislikeInfo; // +0x8
    BOOL _shouldShowReasonPanel; // +0x9
    BOOL _onAnimation; // +0xa
    BOOL _isIndicatorBeRotate; // +0xb
    BOOL _isPersonalizedAdClose; // +0xc
    BOOL _showPersonalizedPanel; // +0xd
    id <WCMicroMerchantAdFeedbackViewDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    NSString * _feedbackTitle; // +0x20
    NSArray * _cachedValidReasonList; // +0x28
    MMUIView * _bgView; // +0x30
    MMUIView * _containerView; // +0x38
    MMUIView * _panelView; // +0x40
    MMUIImageView * _indicatorView; // +0x48
    MMUIView * _reasonBtnContainerView; // +0x50
    MMUILabel * _titleView; // +0x58
    MMUILabel * _descView; // +0x60
    UIButton * _confirmBtn; // +0x68
    MMUIView * _cutOffLine; // +0x70
    UIButton * _complainBtn; // +0x78
    MMUIView * _cutOffLine2; // +0x80
    MMUIView * _buttonMarginView; // +0x88
    NSMutableArray * _defaultFeedbackBtnArray; // +0x90
    NSMutableArray * _reasonBtnArray; // +0x98
    NSString * _toastTitleOnHide; // +0xa0
    WCAdFeedbackPersonalizedPanel * _personalizedPanel; // +0xa8
    WCCanvasDynamicDataLoader * _dataLoader; // +0xb0
    long long _oldSelectedMode; // +0xb8
    CGPoint _clickPoint; // +0xc0
}
- (id)initWithData:(id)arg1 andClickPoint:(CGPoint)arg2;
- (void)show;
- (void)hide;
- (void)dealloc;
- (void)initRootViewController;
- (void)initFeedBackData;
- (void)initSubview;
- (void)hideInner;
- (void)hideInnerWithToast:(id)arg1;
- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)notifyFeedbackViewDisappear:(id)arg1;
- (id)bgView;
- (id)containerView;
- (id)panelView;
- (id)reasonBtnContainerView;
- (id)indicatorView;
- (id)titleView;
- (id)descView;
- (id)cutOffLine;
- (id)cutOffLine2;
- (id)buttonMarginView;
- (id)complainBtn;
- (id)confirmBtn;
- (void)initDefaultFeedbackButtons;
- (void)initReasonButtons;
- (id)validReasonList;
- (id)genReasonBtnWithReason:(id)arg1 iconSVG:(id)arg2;
- (void)onTapBackground;
- (void)onClickComplainBtn;
- (void)onClickReasonBtn:(id)arg1;
- (void)onClickNegativeButton;
- (void)setNegativePanelTitleAndDesc;
- (void)onClickNegativeReasonTagBtn:(id)arg1;
- (void)updateConfirmButtonState;
- (id)fetchSelectedReasonButtonList;
- (void)onClickConfirmBtn;
- (void)onClickPositiveButton;
- (void)layoutPanelView:(BOOL)arg1;
- (void)layoutReasonBtn:(id)arg1 andOffsetY:(double)arg2;
- (void)setupBtnWithRootView:(id)arg1 wording:(id)arg2;
- (void)setupComplainView:(id)arg1;
- (void)checkAndSetContainerFrame;
- (void)setContainerFrame:(BOOL)arg1;
- (void)addCornersToPanelView;
- (void)adjustTitleAndDescLabelWidth;
- (id)personalizedPanel;
- (void)setPersonalizedPanelTitleAndDesc;
- (void)layoutPersonalizedPanelWithOffsetY:(double)arg1;
- (void)onQueryPersonalizedAdSwitch:(BOOL)arg1 status:(id)arg2 operateType:(long long)arg3 userData:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)feedbackTitle;
- (void)setFeedbackTitle:(id)arg1;
- (BOOL)hasDislikeInfo;
- (void)setHasDislikeInfo:(BOOL)arg1;
- (BOOL)shouldShowReasonPanel;
- (void)setShouldShowReasonPanel:(BOOL)arg1;
- (id)cachedValidReasonList;
- (void)setCachedValidReasonList:(id)arg1;
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
- (id)defaultFeedbackBtnArray;
- (void)setDefaultFeedbackBtnArray:(id)arg1;
- (id)reasonBtnArray;
- (void)setReasonBtnArray:(id)arg1;
- (id)toastTitleOnHide;
- (void)setToastTitleOnHide:(id)arg1;
- (BOOL)onAnimation;
- (void)setOnAnimation:(BOOL)arg1;
- (BOOL)isIndicatorBeRotate;
- (void)setIsIndicatorBeRotate:(BOOL)arg1;
- (BOOL)isPersonalizedAdClose;
- (void)setIsPersonalizedAdClose:(BOOL)arg1;
- (BOOL)showPersonalizedPanel;
- (void)setShowPersonalizedPanel:(BOOL)arg1;
- (void)setPersonalizedPanel:(id)arg1;
- (id)dataLoader;
- (void)setDataLoader:(id)arg1;
- (long long)oldSelectedMode;
- (void)setOldSelectedMode:(long long)arg1;
- (void).cxx_destruct;
@end
