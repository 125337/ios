@interface BaseResponseErrMsgHandler : NSObject <MMWebViewDelegate>
{
    BOOL _needGoNext; // +0x8
    BaseResponseErrMsg * _errMsg; // +0x10
    MMUIViewController * _viewController; // +0x18
    NSDictionary * _extParams; // +0x20
    id /* block */ _doneBlock; // +0x28
    id /* block */ _actionBlock; // +0x30
    id /* block */ _onWebViewCloseAndGoNextBlock; // +0x38
}
+ (BOOL)commonHandleBaseResponse:(id)arg1 viewController:(id)arg2 config:(id)arg3;
+ (BOOL)commonHandleErrorMsg:(id)arg1 viewController:(id)arg2 config:(id)arg3;
+ (BOOL)canHandleErrorMsg:(id)arg1;
- (void)dealloc;
- (void)handleErrorMsg:(id)arg1 viewController:(id)arg2;
- (id)iconForError:(id)arg1;
- (void)onHandleErrorDone;
- (void)onHandleErrorAction;
- (void)openUrl:(id)arg1;
- (id)getTopViewController;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)webViewDidReturn:(id)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)needGoNext;
- (void)setNeedGoNext:(BOOL)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id /* block */)doneBlock;
- (void)setDoneBlock:(id /* block */)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)onWebViewCloseAndGoNextBlock;
- (void)setOnWebViewCloseAndGoNextBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
