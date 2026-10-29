@interface CBTCoopV2TingCategoryCellView : CBTCoopV2TingCardCellView <UIGestureRecognizerDelegate, CBTCoopV2TingCategoryViewModelDelegate>
{
    BOOL _presetLongPressFired; // +0x8
    BOOL _presetLongPressNeedsMenuBridge; // +0x9
    BOOL _presetLongPressOpenedBridgedMenu; // +0xa
    BOOL _needsContentUpdate; // +0xb
    UIView * _cardView; // +0x10
    TingCategoryCoverView * _coverView; // +0x18
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x20
    MMUILabel * _presetHeaderLabel; // +0x28
    UIView * _presetHeaderDivider; // +0x30
    NSArray * _presetRowViews; // +0x38
    UIControl * _presetFooterView; // +0x40
    MMUILabel * _presetFooterLabel; // +0x48
    UIImageView * _presetFooterArrowView; // +0x50
    UITapGestureRecognizer * _tapGesture; // +0x58
    UILongPressGestureRecognizer * _pressGesture; // +0x60
    UIView * _highlightOverlayView; // +0x68
    NSTimer * _presetLongPressHighlightTimer; // +0x70
    unsigned long long _presetExposureBindingGeneration; // +0x78
    CGPoint _presetLongPressStartPoint; // +0x80
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (id)menuAnchorView;
- (void)layoutSubviews;
- (void)startAutoPlay;
- (void)triggerAutoPlay;
- (void)tingCategoryViewModelDidFillHostInfo;
- (unsigned long long)checkboxVerticalAlignment;
- (void)fillTingReportExtInfo2:(id)arg1;
- (id)tingCardBusinessReportParams;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)ensureSubviews;
- (void)ensurePresetSubviews;
- (void)applyViewModelIfNeeded;
- (void)applyPresetItemsWithViewModel:(id)arg1;
- (id)presetItemReportParams:(id)arg1;
- (BOOL)reportPresetItemEvent:(id)arg1 item:(id)arg2 viewId:(id)arg3;
- (void)configurePresetItemExposureReportForRowView:(id)arg1 item:(id)arg2;
- (void)updatePresetItemExposureReports;
- (void)forceReportVisiblePresetItemExposures;
- (void)updatePresetPlayButtonSessions;
- (void)layoutContentWithViewModel:(id)arg1;
- (void)layoutPresetContentWithViewModel:(id)arg1;
- (void)applyPresetThemeWithViewModel:(id)arg1 arrowSize:(CGSize)arg2;
- (void)playCategoryAutomatically;
- (id)categoryItemForAutoPlay:(id)arg1;
- (void)playCategory:(id)arg1 listContext:(id)arg2 launchOptions:(id)arg3;
- (void)applyAssistantPlayContextToModel:(id)arg1 categoryItem:(id)arg2;
- (BOOL)isCurrentPlayingCategory:(id)arg1;
- (void)_highlightBubbleColor;
- (void)cancelPresetLongPressHighlightTimer;
- (BOOL)presetTouchViewNeedsMenuBridge:(id)arg1;
- (void)showPresetLongPressBridgedMenuIfNeeded;
- (void)startPresetLongPressHighlightTimer;
- (BOOL)consumePresetLongPressIfNeeded;
- (void)selectAllForLongPressMenu;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)presetItemAtIndex:(unsigned long long)arg1;
- (id)presetLaunchOptionsForButton:(id)arg1 enterPlayer:(BOOL)arg2;
- (BOOL)reuseCurrentPresetItemIfPossible:(id)arg1 launchOptions:(id)arg2;
- (void)playPresetItem:(id)arg1 launchOptions:(id)arg2;
- (void)reportPresetPlayButtonClickForItem:(id)arg1 play:(BOOL)arg2;
- (void)reportPresetItemClick:(id)arg1 index:(int)arg2;
- (void)onTapPresetPlayButton:(id)arg1;
- (void)onTapPresetRow:(id)arg1;
- (void)onTapCategory;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)presetHeaderLabel;
- (void)setPresetHeaderLabel:(id)arg1;
- (id)presetHeaderDivider;
- (void)setPresetHeaderDivider:(id)arg1;
- (id)presetRowViews;
- (void)setPresetRowViews:(id)arg1;
- (id)presetFooterView;
- (void)setPresetFooterView:(id)arg1;
- (id)presetFooterLabel;
- (void)setPresetFooterLabel:(id)arg1;
- (id)presetFooterArrowView;
- (void)setPresetFooterArrowView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)presetLongPressHighlightTimer;
- (void)setPresetLongPressHighlightTimer:(id)arg1;
- (BOOL)presetLongPressFired;
- (void)setPresetLongPressFired:(BOOL)arg1;
- (BOOL)presetLongPressNeedsMenuBridge;
- (void)setPresetLongPressNeedsMenuBridge:(BOOL)arg1;
- (BOOL)presetLongPressOpenedBridgedMenu;
- (void)setPresetLongPressOpenedBridgedMenu:(BOOL)arg1;
- (CGPoint)presetLongPressStartPoint;
- (void)setPresetLongPressStartPoint:(CGPoint)arg1;
- (BOOL)needsContentUpdate;
- (void)setNeedsContentUpdate:(BOOL)arg1;
- (unsigned long long)presetExposureBindingGeneration;
- (void)setPresetExposureBindingGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
