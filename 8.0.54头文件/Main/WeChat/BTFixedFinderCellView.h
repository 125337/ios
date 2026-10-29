@interface BTFixedFinderCellView : BTBaseRecommendAppMsgCellView
{
    id <BTFixedFinderCellViewDelegate> _finderCellViewDelegate; // +0x8
    NSMutableArray * _finderItemViewArr; // +0x10
    NSMutableArray * _voiceOverElements; // +0x18
}
- (id)createBaseItemViewWithItemViewModel:(id)arg1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)didHideFinderItemViewWithIndex:(long long)arg1;
- (CGRect)convertFinderItemViewFrameWithIndex:(long long)arg1 toView:(id)arg2 isInfoArea:(BOOL)arg3;
- (void)setFinderItemViewInfoAreaWithIndex:(long long)arg1 bHighlight:(BOOL)arg2;
- (void)setFinderItemViewContentAreaWithIndex:(long long)arg1 bHighlight:(BOOL)arg2;
- (id)finderItemViewContentWithIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)layoutCardView;
- (unsigned long long)cellRectCorner;
- (id)finderItemViewArr;
- (id)finderViewArr;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)finderCellViewDelegate;
- (void)setFinderCellViewDelegate:(id)arg1;
- (void)setFinderItemViewArr:(id)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end

