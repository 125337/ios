@interface BrandFinderLiveMessageCellView : BaseMessageCellView <BrandFinderLiveMessageCellViewDelegate>
{
    BrandFinderLiveBaseCardView * _cardView; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)onAppear;
- (BOOL)canBeReused;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)doForward;
- (void)setHighlighted:(BOOL)arg1;
- (id)operationMenuItems;
- (id)cardView;
- (void)brandFinderLiveMessageCellViewLiveStatusChanged;
- (void)brandFinderLiveMessageCellViewReplayStatusChanged;
- (void)brandFinderLiveMessageCellViewRecommendReasonChanged;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end

