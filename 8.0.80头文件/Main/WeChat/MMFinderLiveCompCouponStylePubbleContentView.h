@interface MMFinderLiveCompCouponStylePubbleContentView : MMFinderLiveCompPubbleContentView
{
    UIView * _mainImageSlotView; // +0x8
    UIView * _titleSlotView; // +0x10
    UIView * _tagSlotView; // +0x18
    UIView * _actionButtonSlotView; // +0x20
}
+ (BOOL)isValidSlotId:(long long)arg1;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)handleComponentEvent:(id)arg1;
- (void)layoutUI;
- (void)renderComponentsInSlots;
- (void)createComponentViewsInSlot:(long long)arg1 slotInfo:(id)arg2 inContainer:(id)arg3;
- (void)renderSlot:(long long)arg1 slotInfo:(id)arg2 inContainer:(id)arg3;
- (void)layoutSlotContainers;
- (id)mainImageSlotView;
- (void)setMainImageSlotView:(id)arg1;
- (id)titleSlotView;
- (void)setTitleSlotView:(id)arg1;
- (id)tagSlotView;
- (void)setTagSlotView:(id)arg1;
- (id)actionButtonSlotView;
- (void)setActionButtonSlotView:(id)arg1;
- (void).cxx_destruct;
@end
