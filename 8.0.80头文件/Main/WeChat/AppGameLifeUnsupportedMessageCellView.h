@interface AppGameLifeUnsupportedMessageCellView : TextMessageCellView
- (BOOL)canBeReused;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
@end
