@interface WCPayInterceptWinLogic : NSObject <MMTipsViewControllerDelegate>
{
    InterceptWin * _interceptWin; // +0x8
    WCPayHalfPageSheet * _halfPageSheet; // +0x10
}
+ (void)handleJumpItem:(id)arg1 isPresent:(BOOL)arg2 didClickBlock:(id /* block */)arg3;
+ (void)handleJumpItem:(id)arg1 didClickBlock:(id /* block */)arg2;
- (BOOL)shouldHandleInterceptWin:(id)arg1;
- (void)handleInterceptWin:(id)arg1;
- (void)handleInterceptWin:(id)arg1 didClickBlock:(id /* block */)arg2;
- (void)handleInterceptWin:(id)arg1 isPresent:(BOOL)arg2 didClickBlock:(id /* block */)arg3;
- (id)interceptWin;
- (void)setInterceptWin:(id)arg1;
- (id)halfPageSheet;
- (void)setHalfPageSheet:(id)arg1;
- (void).cxx_destruct;
@end
