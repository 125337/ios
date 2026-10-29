@interface AppGameShareMessageCellView : AppUrlMessageCellView
- (void)onAppear;
- (BOOL)isContentVideo;
- (void)updateStatus;
- (void)onTouchUpInside;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)operationMenuItems;
@end
