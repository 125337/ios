@interface AppGameShareMessageCellView : AppUrlMessageCellView
- (void)onAppear;
- (void)layoutContentView;
- (void)addVideoIcon;
- (void)updateStatus;
- (void)onTouchUpInside;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)operationMenuItems;
@end

