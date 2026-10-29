@interface AppLinkTextMessageCellView : TextMessageCellView
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
@end

