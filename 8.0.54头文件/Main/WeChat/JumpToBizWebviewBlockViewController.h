@interface JumpToBizWebviewBlockViewController : MMUIViewController <JumpToBizWebviewLogicHelperDelegate>
{
    JumpToBizWebviewData * _infoData; // +0x68
    JumpToBizWebviewLogicHelper * _logicHelper; // +0x70
    MMLoadingView * _loadingView; // +0x78
    id <JumpToBizWebviewBlockViewControllerDelegate> _delegate; // +0x80
}
- (id)initWithInfoData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)showFailViewWithErrMsg:(id)arg1;
- (void)onReturn;
- (void)onJumpToBizWebview:(int)arg1 WithErrMsg:(id)arg2 WithUrl:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

