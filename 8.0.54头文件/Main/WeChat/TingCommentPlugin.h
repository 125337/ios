@interface TingCommentPlugin : NSObject <MMFlutterPlugin, TingCommentApi>
{
    UIViewController * _currentViewController; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)showCommentInputViewRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (void).cxx_destruct;
@end

