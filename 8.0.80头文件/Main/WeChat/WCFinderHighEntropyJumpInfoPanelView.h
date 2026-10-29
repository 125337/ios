@interface WCFinderHighEntropyJumpInfoPanelView : UIView <WCFinderJumpInfoPanelViewDelegate, WCFinderFeedContentVMExt, UIGestureRecognizerDelegate>
{
    BOOL _observingContentVM; // +0x8
    id <WCFinderHighEntropyJumpInfoPanelViewDelegate> _delegate; // +0x10
    WCFinderJumpInfoPanelView * _panelView; // +0x18
    WCFinderFeedContentVM * _currentContentVM; // +0x20
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x28
    double _maxWidth; // +0x30
    double _currentPanelHeight; // +0x38
}
+ (id)jumpInfoArrayWithContentVM:(id)arg1;
+ (double)viewHeightWithContentVM:(id)arg1 maxWidth:(double)arg2;
+ (double)visiblePanelContentHeightWithPanelView:(id)arg1;
+ (BOOL)hasVisibleJumpInfoViewWithPanelView:(id)arg1;
+ (double)estimatedVisiblePanelContentHeightWithContentVM:(id)arg1 jumpInfoArray:(id)arg2;
+ (double)estimatedPanelContentHeightWithJumpInfoArray:(id)arg1;
+ (BOOL)shouldShowJumpInfo:(id)arg1 style:(id)arg2 contentVM:(id)arg3;
+ (BOOL)hasRenderablePayloadWithJumpInfo:(id)arg1 style:(id)arg2;
+ (double)estimatedFitContentBubbleHeightWithJumpInfo:(id)arg1 style:(id)arg2;
+ (double)estimatedItemHeightWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)viewHasVisibleBackground:(id)arg1;
- (CGRect)visibleContentFrameInView:(id)arg1 coordinateView:(id)arg2;
- (id)visibleJumpInfoViewAtPoint:(CGPoint)arg1 expanded:(BOOL)arg2;
- (CGRect)touchFrameForJumpInfoView:(id)arg1 expanded:(BOOL)arg2;
- (id)expandedResponseViewInView:(id)arg1 jumpInfoRootView:(id)arg2 rootTouchFrame:(CGRect)arg3 point:(CGPoint)arg4 event:(id)arg5;
- (id)expandedStandardControlInView:(id)arg1 point:(CGPoint)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onExpandedControlTapped:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (BOOL)shouldEnableJumpInfoClickWithContentVM:(id)arg1;
- (void)configureWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (void)configureWithContentVM:(id)arg1 maxWidth:(double)arg2 observeChanges:(BOOL)arg3;
- (void)layoutSubviews;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (id)interactivePanelConfigParamsModel;
- (id)finderJumpInfoPanelViewGetContentVM;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(int)arg2;
- (void)onFinderJumpInfoPanelViewHeightChanged:(id)arg1;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 changeToShow:(BOOL)arg3 animated:(BOOL)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)currentPanelHeight;
- (void)setCurrentPanelHeight:(double)arg1;
- (BOOL)observingContentVM;
- (void)setObservingContentVM:(BOOL)arg1;
- (void).cxx_destruct;
@end
