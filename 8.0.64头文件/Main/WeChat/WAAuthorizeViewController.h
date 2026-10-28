@interface WAAuthorizeViewController : ZZFLEXCollectionViewController <IWAAuthorizePage>
{
    id <WAAuthorizeViewControllerDelegate> _authDelegate; // +0x70
    WAAuthorizeSheetInfo * _info; // +0x78
    WAAuthorizeResultInfo * _resultInfo; // +0x80
    id /* block */ _acceptAction; // +0x88
    id /* block */ _rejectAction; // +0x90
    id /* block */ _cancelAction; // +0x98
    long long _spaceCellTagOffset; // +0xa0
    WAAuthPageSheetViewModel * _psViewModel; // +0xa8
}
- (id)initWithInfo:(id)arg1;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)setInfo:(id)arg1;
- (void)reloadData;
- (double)contentHeight;
- (id)subviewClassList;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)onCancelButtonClicked;
- (void)onInfoButtonClick;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)_onRejectButtonClick;
- (double)operateButtonBottomInset;
- (void)openUrl:(id)arg1;
- (void)pushVC:(id)arg1;
- (id)authDelegate;
- (void)setAuthDelegate:(id)arg1;
- (id)info;
- (id)resultInfo;
- (id /* block */)acceptAction;
- (void)setAcceptAction:(id /* block */)arg1;
- (id /* block */)rejectAction;
- (void)setRejectAction:(id /* block */)arg1;
- (id /* block */)cancelAction;
- (void)setCancelAction:(id /* block */)arg1;
- (long long)spaceCellTagOffset;
- (void)setSpaceCellTagOffset:(long long)arg1;
- (id)psViewModel;
- (void)setPsViewModel:(id)arg1;
- (void).cxx_destruct;
@end
