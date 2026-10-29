@interface MMLiveRewardGiftNewCustomizationStyleComponentSelectContentView : MMLiveRewardGiftNewCustomizationStyleSelectContentView
{
    MMFinderLiveNewCustomGiftComponent * _component; // +0x8
    UIScrollView * _componentContainerView; // +0x10
    NSMutableArray * _componentTagViewList; // +0x18
    MMLiveRewardGiftNewCustomizationComponentTagView * _currSelectComponentTagView; // +0x20
}
- (id)initWithComponent:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createComponentTagContainerView;
- (double)componentContainerLeftInset;
- (void)createComponentTagViews;
- (id)createComponentTagView:(id)arg1;
- (void)layoutComponentTagContainerView;
- (void)layoutComponentTagViews;
- (void)updateComponentTagContainerContentSize:(CGSize)arg1;
- (void)initSelectState;
- (void)initContentMode;
- (id)getComponentTagViewWithKey:(id)arg1;
- (void)onCurrentSelectComponentKeyChanged;
- (id)componentTagViewList;
- (id)styleObj;
- (id)component;
- (void)setComponent:(id)arg1;
- (id)componentContainerView;
- (void)setComponentContainerView:(id)arg1;
- (void)setComponentTagViewList:(id)arg1;
- (id)currSelectComponentTagView;
- (void)setCurrSelectComponentTagView:(id)arg1;
- (void).cxx_destruct;
@end

