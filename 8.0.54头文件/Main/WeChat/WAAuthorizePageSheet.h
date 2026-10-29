@interface WAAuthorizePageSheet : WAPageSheet <IWAAuthorizePage>
{
    id <WAAuthorizePageSheetDelegate> _authDelegate; // +0x8
    WAAuthorizeSheetInfo * _info; // +0x10
    WAAuthorizeResultInfo * _resultInfo; // +0x18
    id /* block */ _acceptAction; // +0x20
    id /* block */ _rejectAction; // +0x28
    id /* block */ _showPrivacyInfoAction; // +0x30
    UICollectionView * _collectionView; // +0x38
    ZZFLEXAngel * _angel; // +0x40
    WAAuthPageSheetViewModel * _psViewModel; // +0x48
}
- (id)initWithInfo:(id)arg1;
- (id)init;
- (void)setInfo:(id)arg1;
- (double)contentHeight;
- (void)setupUI;
- (void)reloadData;
- (void)layoutSubViews;
- (void)showInView:(id)arg1 completion:(id /* block */)arg2;
- (id)subviewClassList;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onInfoButtonClick;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
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
- (id /* block */)showPrivacyInfoAction;
- (void)setShowPrivacyInfoAction:(id /* block */)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)psViewModel;
- (void)setPsViewModel:(id)arg1;
- (void).cxx_destruct;
@end

