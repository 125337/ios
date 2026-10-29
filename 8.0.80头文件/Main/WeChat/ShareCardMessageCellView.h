@interface ShareCardMessageCellView : AppStandardAccountContentMessageCellView
- (BOOL)canBeReused;
- (id)avatarInSize:(CGSize)arg1;
- (id)operationMenuItems;
- (BOOL)isOpenIMChat;
- (BOOL)isOpenIMKefuChat;
- (void)onForward:(id)arg1;
- (void)onTouchUpInside;
@end
