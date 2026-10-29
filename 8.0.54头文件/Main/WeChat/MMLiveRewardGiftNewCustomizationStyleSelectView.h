@interface MMLiveRewardGiftNewCustomizationStyleSelectView : UIView
{
    MMLiveRewardGiftNewCustomizationEditLogic * _customizationEditLogic; // +0x8
    MMLiveRewardGiftNewCustomizationStyleTabContainerView * _styleTabContainerView; // +0x10
    MMLiveRewardGiftNewCustomizationStyleSelectContainerView * _styleSelectContainerView; // +0x18
}
- (id)initWithCustomizationEditLogic:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutStyleTabContainerView;
- (double)selectTabContainerLeft;
- (void)layoutStyleSelectContainerView;
- (id)customizationEditLogic;
- (void)setCustomizationEditLogic:(id)arg1;
- (id)styleTabContainerView;
- (void)setStyleTabContainerView:(id)arg1;
- (id)styleSelectContainerView;
- (void)setStyleSelectContainerView:(id)arg1;
- (void).cxx_destruct;
@end

