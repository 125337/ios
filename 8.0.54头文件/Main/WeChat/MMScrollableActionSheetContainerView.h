@interface MMScrollableActionSheetContainerView : MMUIView <MMScrollableActionSheetContainerUpScrollViewDelegate, MMScrollableActionSheetContainerDownStableViewDelegate>
{
    double _maxContainerHeight; // +0x8
    id <MMScrollableActionSheetContainerViewDelegate> _delegate; // +0x10
    MMScrollableActionSheetContainerUpScrollView * _upScrollView; // +0x18
    MMScrollableActionSheetContainerDownStableView * _downStableView; // +0x20
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)setupUpScrollView;
- (void)setupDownStableView;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setMaxContainerHeight:(double)arg1;
- (void)setHorizontalRowInfoList:(id)arg1 atRow:(unsigned int)arg2;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1 atRow:(unsigned int)arg2;
- (void)reCreateRoundCornersLayer;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)downStableViewUpdateGradientLayerOpacity;
- (void)onTappedItemInfo:(id)arg1;
- (void)onTappedCancel;
- (double)maxContainerHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)upScrollView;
- (void)setUpScrollView:(id)arg1;
- (id)downStableView;
- (void)setDownStableView:(id)arg1;
- (void).cxx_destruct;
@end

