@interface MMLiveRewardGiftNewCustomizationStyleSelectContainerView : UIScrollView
{
    MMLiveRewardGiftNewCustomizationEditLogic * _customizationEditLogic; // +0x8
    NSMutableArray * _styleContentViewList; // +0x10
}
- (id)initWithCustomizationEditLogic:(id)arg1;
- (void)configCustomizationEditLogic:(id)arg1;
- (void)commonInit;
- (void)layoutSubviews;
- (void)addSelectContentViews;
- (void)addComponentSelectContentView:(id)arg1;
- (void)addNameSelectContentView:(id)arg1;
- (void)updateStyleSelectContentViewOrigin:(id)arg1;
- (void)updateContainerContentSize;
- (void)layoutAllContentViews;
- (void)removeAllSelectContentViews;
- (id)getComponentSelectContentViewWithKey:(id)arg1;
- (id)styleContentViewList;
- (id)customizationModel;
- (void)loadData;
- (void)changeSelectToStyleContent:(id)arg1;
- (id)customizationEditLogic;
- (void)setCustomizationEditLogic:(id)arg1;
- (void)setStyleContentViewList:(id)arg1;
- (void).cxx_destruct;
@end
