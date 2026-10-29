@interface OpenProfileBlockViewController : MMUIViewController <OpenProfileLogicHelperDelegate>
{
    OpenProfileData * _infoData; // +0x68
    OpenProfileLogicHelper * _logicHelper; // +0x70
    MMLoadingView * _loadingView; // +0x78
    id <OpenProfileBlockViewControllerDelegate> _delegate; // +0x80
    GetA8KeyLogic * _a8KeyLogic; // +0x88
}
- (id)initWithInfoData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)showFailViewWithErrMsg:(id)arg1;
- (void)onReturn;
- (void)onOpenProfile:(int)arg1 WithErrMsg:(id)arg2 WithContact:(id)arg3 Ticket:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

