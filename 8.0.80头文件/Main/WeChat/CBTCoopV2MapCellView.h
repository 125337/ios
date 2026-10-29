@interface CBTCoopV2MapCellView : CBTCoopV2AsstBoardCellView <IMMFontMgrExt, QMCCardDelegate>
{
    BOOL _contentDirty; // +0x8
    BOOL _locationAuthRequesting; // +0x9
    BOOL _hasReportedMapExposure; // +0xa
    UILabel * _titleLabel; // +0x10
    UIView * _mapContainerView; // +0x18
    UIButton * _expandButton; // +0x20
    QMCCard * _card; // +0x28
    QMCCardView * _cardView; // +0x30
    NSString * _appliedContentSignature; // +0x38
    UITapGestureRecognizer * _canvasReportTapGesture; // +0x40
}
- (BOOL)coopV2ParticipatesInContentCardClickReport;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (id)menuAnchorView;
- (id)copyableText;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyViewModelIfNeeded;
- (void)layoutExpandButton;
- (void)onExpandButtonTapped;
- (void)setupExpandButtonReport;
- (id)typedViewModel;
- (void)onAppear;
- (void)onMapCanvasTapped:(id)arg1;
- (void)requestLocationAuthorizationIfNeededForCard:(id)arg1;
- (id)cachedUserLocation;
- (id)userLocationForQMCCard:(id)arg1;
- (id)cacheDirectoryForQMCCard:(id)arg1;
- (void)qmcCard:(id)arg1 didLog:(id)arg2 level:(long long)arg3;
- (void)qmcCard:(id)arg1 didChangeLifecycleWithCardID:(id)arg2 state:(long long)arg3;
- (void)qmcCard:(id)arg1 routeNavigationDidTapWithParams:(id)arg2;
- (void)qmcCardDidLoad:(id)arg1;
- (void)qmcCard:(id)arg1 didFailWithError:(id)arg2;
- (void)qmcCard:(id)arg1 didChangeState:(long long)arg2 fromState:(long long)arg3;
- (void)QMCCard:(id)arg1 didClickUI:(id)arg2 params:(id)arg3;
- (void)onFontSizeChange;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)mapContainerView;
- (void)setMapContainerView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)card;
- (void)setCard:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)appliedContentSignature;
- (void)setAppliedContentSignature:(id)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)locationAuthRequesting;
- (void)setLocationAuthRequesting:(BOOL)arg1;
- (id)canvasReportTapGesture;
- (void)setCanvasReportTapGesture:(id)arg1;
- (BOOL)hasReportedMapExposure;
- (void)setHasReportedMapExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
