@interface WCListCPWarningCellView : WCListBaseCellView <MMCPLabelDelegate>
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
- (void)initView;
- (void)onClickEvent;
- (void)onRestoreCPLabel:(id)arg1;
@end
