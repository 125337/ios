@interface LiteAppLocalFileDetailLogicController : MMLocalFileDetailLogicController <ForwardMessageLogicDelegate>
{
    BOOL b_forbidOperation; // +0x8
    ForwardMessageLogicController * _forwardLogic; // +0x10
    UIViewController * _fileViewController; // +0x18
}
- (BOOL)forbidOperation;
- (BOOL)isMinimizeEnable;
- (BOOL)canAddToFavorites;
- (void)onForwardToContact:(id)arg1;
- (id)generateFavoriteItem;
- (id)GetMsg;
- (void)customizeActionSheetInFirstRow:(id)arg1 secondRow:(id)arg2;
- (void)openFileInNavVC:(id)arg1;
- (void)setForbidOperation:(BOOL)arg1;
- (id)getCurrentViewController;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)fileViewController;
- (void)setFileViewController:(id)arg1;
- (void).cxx_destruct;
@end
