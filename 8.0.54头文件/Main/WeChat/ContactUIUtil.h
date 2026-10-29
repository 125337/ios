@interface ContactUIUtil : MMObject
+ (void)alignPanelViewToSearchBarView:(id)arg1 panelView:(id)arg2 headSearchPanelView:(id)arg3 isHiddenheadSearchPanelView:(BOOL)arg4 headSearchPanelViewTop:(double)arg5;
+ (void)makeSearchSectionHeaderView:(id)arg1 headerViewWidth:(double)arg2;
+ (void)makeSearchSectionHeaderViewMultiSelectBtnChange:(id)arg1 isShow:(BOOL)arg2;
+ (void)resetContactCell:(id)arg1;
+ (void)disableSelectContactCell:(id)arg1;
+ (double)getSearchPanelViewHeight:(BOOL)arg1;
+ (double)getSearchPanelHeadImagesize:(BOOL)arg1;
+ (double)getSearchPanelInputViewHeight:(BOOL)arg1;
+ (double)getSearchPanelCellSize:(BOOL)arg1;
+ (void)resetNewContactsSearchPanelViewAccessibility:(id)arg1;
+ (void)resetFavourContactIconViewAccessibility:(id)arg1;
+ (BOOL)checkNewTokenPickSearch;
+ (id)makeRecommendTextView:(id)arg1 viewWidth:(double)arg2;
@end

