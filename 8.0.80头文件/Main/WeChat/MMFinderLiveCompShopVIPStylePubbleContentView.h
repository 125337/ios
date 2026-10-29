@interface MMFinderLiveCompShopVIPStylePubbleContentView : MMFinderLiveCompPubbleContentView
{
    UIView * _mainImageSlotView; // +0x8
    UIView * _badgeSlotView; // +0x10
    UIView * _titleSlotView; // +0x18
    UIView * _tagSlotView; // +0x20
    UIView * _actionButtonSlotView; // +0x28
    UIView * _bottomAttachSlotView; // +0x30
}
+ (BOOL)isValidSlotId:(long long)arg1;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)handleComponentEvent:(id)arg1;
- (void)layoutUI;
- (void)renderComponentsInSlots;
- (void)createComponentViewsInSlot:(long long)arg1 slotInfo:(id)arg2 inContainer:(id)arg3;
- (void)renderSlot:(long long)arg1 slotInfo:(id)arg2 inContainer:(id)arg3;
- (void)layoutSlot:(long long)arg1;
- (void)layoutSlotContainers;
- (id)mainImageSlotView;
- (void)setMainImageSlotView:(id)arg1;
- (id)badgeSlotView;
- (void)setBadgeSlotView:(id)arg1;
- (id)titleSlotView;
- (void)setTitleSlotView:(id)arg1;
- (id)tagSlotView;
- (void)setTagSlotView:(id)arg1;
- (id)actionButtonSlotView;
- (void)setActionButtonSlotView:(id)arg1;
- (id)bottomAttachSlotView;
- (void)setBottomAttachSlotView:(id)arg1;
- (void).cxx_destruct;
@end
