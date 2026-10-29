@interface WCListTextCellView : WCListBaseCellView
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (double)contentLabelHeightWithDataItem:(id)arg1 contentLabelWidth:(double)arg2;
- (void)initView;
- (void)onClickEvent;
- (BOOL)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
@end
