@interface WCFinderForwardHelper : NSObject <ForwardMessageLogicDelegate>
{
    BOOL _isFastForward; // +0x8
    UIViewController * _vc; // +0x10
    ForwardMessageLogicController * _forwardLogicController; // +0x18
    id /* block */ _completionBlock; // +0x20
    id /* block */ _cancelBlock; // +0x28
}
+ (void)forwardWithCMessageWrap:(id)arg1 fromVc:(id)arg2;
+ (void)forwardWithCMessageWrap:(id)arg1 toContact:(id)arg2 completion:(id /* block */)arg3 cancelBlock:(id /* block */)arg4 fromVc:(id)arg5;
+ (id)messageWrapFromImage:(id)arg1;
- (id)forwardLogicController;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (BOOL)isFastForward;
- (void)setIsFastForward:(BOOL)arg1;
- (void)setForwardLogicController:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
