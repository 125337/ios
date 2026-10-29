@interface MMLiveRewardGiftNewCustomizationStyleTabContainerView : UIScrollView
{
    id /* block */ _selectChangeCallback; // +0x8
    MMLiveRewardGiftNewCustomizationEditLogic * _customizationEditLogic; // +0x10
    NSMutableArray * _styleTabLabelList; // +0x18
    MMLiveRewardGiftStyleTabLabel * _currentSelectTabLabel; // +0x20
}
+ (double)preferHeight;
+ (double)styleTabLabelLeftInset;
- (id)initWithCustomizationEditLogic:(id)arg1;
- (void)commonInit;
- (void)configCustomizationEditLogic:(id)arg1;
- (void)addStyleSelectTabLabels;
- (void)addComponentSelectTabLabel:(id)arg1;
- (void)addNameSelectTabLabel:(id)arg1;
- (id)createGiftStyleTabLabel:(id)arg1;
- (void)updateTabLabelUIForSelect:(id)arg1;
- (void)updateStyleTabLabelOrigin:(id)arg1;
- (void)updateContainerContentSize;
- (void)layoutSubviews;
- (void)layoutAllTabLabels;
- (void)loadDataAsync:(BOOL)arg1;
- (void)removeAllTabLabels;
- (void)onSelectTab:(id)arg1;
- (id)getTabLabelWithSelectStyle:(id)arg1;
- (double)selectTabContainerLeftInset;
- (void)onTapStyleTabLabel:(id)arg1;
- (id)styleTabLabelList;
- (id)customizationModel;
- (id /* block */)selectChangeCallback;
- (void)setSelectChangeCallback:(id /* block */)arg1;
- (id)customizationEditLogic;
- (void)setCustomizationEditLogic:(id)arg1;
- (void)setStyleTabLabelList:(id)arg1;
- (id)currentSelectTabLabel;
- (void)setCurrentSelectTabLabel:(id)arg1;
- (void).cxx_destruct;
@end

