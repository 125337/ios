@interface WCAdvertiseFeedbackNewView : WCAdvertiseFeedbackBaseView <CAAnimationDelegate>
{
    BOOL _onAnimation; // +0x8
    BOOL _isIndicatorBeRotate; // +0x9
    BOOL _isSpecialAd; // +0xa
    BOOL _showGuideAdManage; // +0xb
    WCDataItem * _dataItem; // +0x10
    NSString * _feedbackTitle; // +0x18
    double _adButtonWidth; // +0x20
    double _panelMarginHorizontal; // +0x28
    double _panelMaxWidth; // +0x30
    double _panelMinWidth; // +0x38
    double _panelWidth; // +0x40
    double _reasonButtonMaxWidth; // +0x48
    double _reasonButtonMinWidth; // +0x50
    double _reasonButtonWidth; // +0x58
    double _reasonButtonHeight; // +0x60
    double _titleMaxWidth; // +0x68
    double _confirmButtonMaxWidth; // +0x70
    MMUIView * _bgView; // +0x78
    MMUIView * _containerView; // +0x80
    MMUIView * _panelView; // +0x88
    MMUIImageView * _indicatorView; // +0x90
    MMUIView * _reasonBtnContainerView; // +0x98
    MMUILabel * _titleView; // +0xa0
    MMUILabel * _descView; // +0xa8
    UIButton * _confirmBtn; // +0xb0
    MMUIView * _cutOffLine; // +0xb8
    UIButton * _complainBtn; // +0xc0
    NSMutableArray * _reasonBtnArray; // +0xc8
    UIButton * _guideAdManageBtn; // +0xd0
    NSString * _titleText; // +0xd8
    NSString * _descText; // +0xe0
    NSString * _toastTitleOnHide; // +0xe8
    NSString * _specialAdWording; // +0xf0
    NSString * _adManageUrl; // +0xf8
    CGPoint _clickPoint; // +0x100
}
+ (double)getMaxFontRatio;
- (id)initWithDataItem:(id)arg1 clickPoint:(CGPoint)arg2 adButtonWidth:(double)arg3;
- (void)show;
- (void)hide;
- (void)dealloc;
- (void)calculateViewSize;
- (void)calculateTitleAndConfirmButtonWidth;
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
- (void)initReasonButtons;
- (id)genReasonBtnWithReason:(id)arg1 iconSVG:(id)arg2;
- (void)initGuideAdManageButton;
- (void)onTapBackground;
- (void)onClickConfirmBtn;
- (void)onClickComplainBtn;
- (void)onClickGuideAdManageBtn:(id)arg1;
- (void)onClickReasonBtn:(id)arg1;
- (void)checkAndSetConfirmButtonState;
- (void)updateConfirmButtonTitle:(id)arg1 weakStyle:(BOOL)arg2;
- (id)fetchSelectedReasonButtonList;
- (void)layoutPanelView;
- (void)layoutSpecialAdPanelView;
- (void)layoutReasonBtn:(id)arg1 andOffsetY:(double)arg2;
- (void)layoutGuideAdManageButtonWithOffsetY:(double)arg1;
- (void)setupComplainView:(id)arg1;
- (void)checkAndSetContainerFrame;
- (void)setContainerFrame:(BOOL)arg1;
- (void)addCornersToPanelView;
- (void)notifyFeedbackViewDisappear:(id)arg1;
- (void)setTitleAndDesc;
- (BOOL)needShowGuideAdManage;
- (double)fetchLabelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 lineHeight:(double)arg4;
- (double)fetchConfirmButtonMaxHeight;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)feedbackTitle;
- (void)setFeedbackTitle:(id)arg1;
- (CGPoint)clickPoint;
- (void)setClickPoint:(CGPoint)arg1;
- (double)adButtonWidth;
- (void)setAdButtonWidth:(double)arg1;
- (double)panelMarginHorizontal;
- (void)setPanelMarginHorizontal:(double)arg1;
- (double)panelMaxWidth;
- (void)setPanelMaxWidth:(double)arg1;
- (double)panelMinWidth;
- (void)setPanelMinWidth:(double)arg1;
- (double)panelWidth;
- (void)setPanelWidth:(double)arg1;
- (double)reasonButtonMaxWidth;
- (void)setReasonButtonMaxWidth:(double)arg1;
- (double)reasonButtonMinWidth;
- (void)setReasonButtonMinWidth:(double)arg1;
- (double)reasonButtonWidth;
- (void)setReasonButtonWidth:(double)arg1;
- (double)reasonButtonHeight;
- (void)setReasonButtonHeight:(double)arg1;
- (double)titleMaxWidth;
- (void)setTitleMaxWidth:(double)arg1;
- (double)confirmButtonMaxWidth;
- (void)setConfirmButtonMaxWidth:(double)arg1;
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
- (id)guideAdManageBtn;
- (void)setGuideAdManageBtn:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)toastTitleOnHide;
- (void)setToastTitleOnHide:(id)arg1;
- (BOOL)onAnimation;
- (void)setOnAnimation:(BOOL)arg1;
- (BOOL)isIndicatorBeRotate;
- (void)setIsIndicatorBeRotate:(BOOL)arg1;
- (BOOL)isSpecialAd;
- (void)setIsSpecialAd:(BOOL)arg1;
- (id)specialAdWording;
- (void)setSpecialAdWording:(id)arg1;
- (BOOL)showGuideAdManage;
- (void)setShowGuideAdManage:(BOOL)arg1;
- (id)adManageUrl;
- (void)setAdManageUrl:(id)arg1;
- (void).cxx_destruct;
@end
