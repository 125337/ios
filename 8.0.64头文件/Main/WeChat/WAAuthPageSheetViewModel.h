@interface WAAuthPageSheetViewModel : NSObject
{
    BOOL _disableAcceptButton; // +0x8
    BOOL _disableDismissWhenAccept; // +0x9
    WAAuthorizeSheetInfo * _infoModel; // +0x10
    id <IWAAuthorizePage> _pageSheet; // +0x18
    id /* block */ _acceptButtonUpdateAction; // +0x20
    id /* block */ _showNeedAcceptProtocolAnimation; // +0x28
}
- (id)initWithPageSheet:(id)arg1;
- (id)initWithInfoModel:(id)arg1 pageSheet:(id)arg2;
- (BOOL)checkCanAccept;
- (id)resultInfo;
- (id)infoModel;
- (void)setInfoModel:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (BOOL)disableAcceptButton;
- (void)setDisableAcceptButton:(BOOL)arg1;
- (id /* block */)acceptButtonUpdateAction;
- (void)setAcceptButtonUpdateAction:(id /* block */)arg1;
- (id /* block */)showNeedAcceptProtocolAnimation;
- (void)setShowNeedAcceptProtocolAnimation:(id /* block */)arg1;
- (BOOL)disableDismissWhenAccept;
- (void)setDisableDismissWhenAccept:(BOOL)arg1;
- (void).cxx_destruct;
@end
