@interface WAAuthorizePageSheet : WAPageSheet <IWAAuthorizePage>
{
    BOOL _agentMode; // +0x8
    id <WAAuthorizePageSheetDelegate> _authDelegate; // +0x10
    WAAuthorizeSheetInfo * _info; // +0x18
    WAAuthorizeResultInfo * _resultInfo; // +0x20
    id /* block */ _acceptAction; // +0x28
    id /* block */ _rejectAction; // +0x30
    id /* block */ _showPrivacyInfoAction; // +0x38
    id /* block */ _openUrlAction; // +0x40
    id /* block */ _openWeAppAction; // +0x48
    double _agentBorrowedContentWidth; // +0x50
    UICollectionView * _collectionView; // +0x58
    ZZFLEXAngel * _angel; // +0x60
    WAAuthPageSheetViewModel * _psViewModel; // +0x68
    WAAppIdToUsernameTransfer * _appIdTransfer; // +0x70
}
- (id)initWithInfo:(id)arg1;
- (id)init;
- (void)setInfo:(id)arg1;
- (double)contentHeight;
- (void)setupUI;
- (void)reloadData;
- (void)layoutSubViews;
- (void)relayoutBorrowedContentForWidth:(double)arg1;
- (double)contentWidth;
- (void)showInView:(id)arg1 completion:(id /* block */)arg2;
- (id)subviewClassList;
- (id)customSubviewClassList;
- (id)subViewModel;
- (double)operateButtonBottomInset;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onInfoButtonClick;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)openUrl:(id)arg1;
- (void)pushVC:(id)arg1;
- (id)getWeAppOpenViewController;
- (void)openWeAppLink:(id)arg1;
- (id)authDelegate;
- (void)setAuthDelegate:(id)arg1;
- (id)info;
- (id)resultInfo;
- (id /* block */)acceptAction;
- (void)setAcceptAction:(id /* block */)arg1;
- (id /* block */)rejectAction;
- (void)setRejectAction:(id /* block */)arg1;
- (id /* block */)showPrivacyInfoAction;
- (void)setShowPrivacyInfoAction:(id /* block */)arg1;
- (id /* block */)openUrlAction;
- (void)setOpenUrlAction:(id /* block */)arg1;
- (id /* block */)openWeAppAction;
- (void)setOpenWeAppAction:(id /* block */)arg1;
- (BOOL)agentMode;
- (void)setAgentMode:(BOOL)arg1;
- (double)agentBorrowedContentWidth;
- (void)setAgentBorrowedContentWidth:(double)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)psViewModel;
- (void)setPsViewModel:(id)arg1;
- (id)appIdTransfer;
- (void)setAppIdTransfer:(id)arg1;
- (void).cxx_destruct;
@end
