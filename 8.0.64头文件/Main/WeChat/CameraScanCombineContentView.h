@interface CameraScanCombineContentView : MMUIView <CameraScanCombineGoodsListViewDelegate>
{
    BOOL _isAppendItemAnimating; // +0x8
    id <CameraScanCombineContentViewDelegate> _delegate; // +0x10
    CameraScanBlurEffectView * _blurView; // +0x18
    UIView * _contentMaskView; // +0x20
    UIView<CameraScanGoodsMarkDotViewInterface> * _markDotView; // +0x28
    CameraScanCombineCropImageView * _goodsCropImageBorderView; // +0x30
    MMTimer * _timerForUITest; // +0x38
    CameraScanCombineGoodsListView * _listView; // +0x40
    UIView * _centerMaskView; // +0x48
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
- (void)clearListView;
- (void)contentViewDisappear;
- (id)itemsNeedRetrack;
- (void)onClickHoleMaskView;
- (void)onClikcItemCardWithItemViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onCompleteAppendAnimationWithCardItem:(id)arg1;
- (void)callAppendNewCardItemToList:(id)arg1;
- (double)gradienLayerMaskHeight;
- (void)listViewWillFold:(BOOL)arg1;
- (void)listViewDidFold:(BOOL)arg1;
- (void)onListViewWillStartDragging;
- (void)onListViewWillEndDragging;
- (void)onExposeWithItem:(id)arg1 hasTitle:(BOOL)arg2;
- (BOOL)shouldShowInfoLabel;
- (unsigned long long)listItemCardCount;
- (long long)indexOfItemInList:(id)arg1;
- (void)makeDetectSuccessEffect;
- (double)listViewHeight;
- (BOOL)isListViewFold;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)contentMaskView;
- (void)setContentMaskView:(id)arg1;
- (BOOL)isAppendItemAnimating;
- (id)markDotView;
- (void)setMarkDotView:(id)arg1;
- (id)goodsCropImageBorderView;
- (void)setGoodsCropImageBorderView:(id)arg1;
- (id)timerForUITest;
- (void)setTimerForUITest:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)centerMaskView;
- (void)setCenterMaskView:(id)arg1;
- (void).cxx_destruct;
@end
