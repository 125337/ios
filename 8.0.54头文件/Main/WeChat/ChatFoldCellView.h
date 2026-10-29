@interface ChatFoldCellView : BaseChatCellView
- (BOOL)canBeReused;
- (void)layoutInternal;
- (void)onClickExpand;
- (BOOL)userInteractionEnabledWhenEditing;
@end

