@interface CameraScanCombineContentView : MMUIView <CameraScanMixedResultListViewDelegate>
{
    BOOL _isAppendItemAnimating; // +0x8
    BOOL _hasReportedFirstDetectItemCost; // +0x9
    id <CameraScanCombineContentViewDelegate> _delegate; // +0x10
    CameraScanBlurEffectView * _blurView; // +0x18
    UIView * _contentMaskView; // +0x20
    UIView<CameraScanGoodsMarkDotViewInterface> * _markDotView; // +0x28
    CameraScannerViewWrapper * _cameraScannerWrapper; // +0x30
    unsigned long long _enterSession1970Ts; // +0x38
    CameraScanCombineCropImageView * _goodsCropImageBorderView; // +0x40
    MMTimer * _timerForUITest; // +0x48
    CameraScanMixedResultListView * _mixedResultListView; // +0x50
    UIView * _centerMaskView; // +0x58
}
- (id)initWithDelegate:(id)arg1;
- (void)setupGoodsCropImageView;
- (void)setupListView;
- (void)setupBlurView;
- (void)setupMaskView;
- (void)setupMarkdotView;
- (void)setupCenterMaskView;
- (void)startMarkingAnimation:(CGPoint)arg1 completionHandler:(id /* block */)arg2;
- (void)stopMarkingAnimation;
- (void)layoutSubviews;
- (void)addItemFromDetectors:(id)arg1;
- (void)onDetectScanGoodItemFail:(id)arg1;
- (void)onItemDetectedAndSearched:(id)arg1;
- (void)clearListView;
- (void)contentViewDisappear;
- (void)onCancelItemOpenWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onClickItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onCompleteAppendAnimationWithCardItem:(id)arg1;
- (void)callAppendNewCardItemToList:(id)arg1;
- (BOOL)shouldShowInfoLabel;
- (unsigned long long)listItemCardCount;
- (long long)indexOfItemInList:(id)arg1;
- (double)listContainerHeight;
- (CGRect)getCardScreenFrameWithItemViewModel:(id)arg1;
- (void)makeDetectSuccessEffect;
- (double)listViewHeight;
- (void)setCameraScannerWrapper:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)contentMaskView;
- (void)setContentMaskView:(id)arg1;
- (BOOL)isAppendItemAnimating;
- (id)markDotView;
- (void)setMarkDotView:(id)arg1;
- (id)cameraScannerWrapper;
- (unsigned long long)enterSession1970Ts;
- (void)setEnterSession1970Ts:(unsigned long long)arg1;
- (id)goodsCropImageBorderView;
- (void)setGoodsCropImageBorderView:(id)arg1;
- (id)timerForUITest;
- (void)setTimerForUITest:(id)arg1;
- (id)mixedResultListView;
- (void)setMixedResultListView:(id)arg1;
- (id)centerMaskView;
- (void)setCenterMaskView:(id)arg1;
- (BOOL)hasReportedFirstDetectItemCost;
- (void)setHasReportedFirstDetectItemCost:(BOOL)arg1;
- (void).cxx_destruct;
@end
