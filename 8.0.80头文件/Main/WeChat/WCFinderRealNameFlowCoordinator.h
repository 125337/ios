@interface WCFinderRealNameFlowCoordinator : NSObject <WCFinderCreateCoordinatorDelegate, MMWebViewDelegate>
{
    BOOL _payRealnameRequired; // +0x8
    BOOL _finished; // +0x9
    long long _mode; // +0x10
    NSString * _payAuthUrl; // +0x18
    UIViewController * _hostVC; // +0x20
    id /* block */ _completion; // +0x28
    WCFinderCreateCoordinator * _createCoordinator; // +0x30
    id /* block */ _pendingNextAfterCreate; // +0x38
    id /* block */ _pendingNextAfterPayRealname; // +0x40
}
+ (void)startFlowWithMode:(long long)arg1 payAuthUrl:(id)arg2 payRealnameRequired:(BOOL)arg3 fromVC:(id)arg4 completion:(id /* block */)arg5;
- (id)hostMMVC;
- (void)dealloc;
- (void)finishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)errorWithCode:(long long)arg1 message:(id)arg2;
- (void)ensureFinderAccountThen:(id /* block */)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderCreateCoordinatorStartCreateUserComplete;
- (void)dispatchByMode;
- (void)runPayFlow;
- (void)startPayRealnameThen:(id /* block */)arg1;
- (void)onPayRealnameVerifySuccessNotification:(id)arg1;
- (void)onPayRealnameVerifyCancelNotification:(id)arg1;
- (void)pushPayAuthH5:(id)arg1 fromVC:(id)arg2;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)callFinderRealNameVerifyWithCode:(id)arg1;
- (void)runFinderFlow;
- (id)resolveFinderRealNameUrl;
- (void)pushFinderRealNameH5:(id)arg1 fromVC:(id)arg2;
- (void)onFinderRealNameH5Back;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)payAuthUrl;
- (void)setPayAuthUrl:(id)arg1;
- (BOOL)payRealnameRequired;
- (void)setPayRealnameRequired:(BOOL)arg1;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id /* block */)pendingNextAfterCreate;
- (void)setPendingNextAfterCreate:(id /* block */)arg1;
- (id /* block */)pendingNextAfterPayRealname;
- (void)setPendingNextAfterPayRealname:(id /* block */)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
