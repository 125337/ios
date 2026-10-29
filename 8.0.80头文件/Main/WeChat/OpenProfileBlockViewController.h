@interface OpenProfileBlockViewController : MMUIViewController <OpenProfileLogicHelperDelegate, IStrangerContactMgrExt>
{
    OpenProfileData * _infoData; // +0x70
    OpenProfileLogicHelper * _logicHelper; // +0x78
    MMLoadingView * _loadingView; // +0x80
    id <OpenProfileBlockViewControllerDelegate> _delegate; // +0x88
    GetA8KeyLogic * _a8KeyLogic; // +0x90
    BOOL _hasStartedAuth; // +0x98
    NSString * _pendingCheckTicket; // +0xa0
    OpenApiParameter * _openApiParameter; // +0xa8
}
- (id)initWithInfoData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)doTranslateLinkAuth;
- (void)didNeedRefreshTokenWithResult:(id)arg1;
- (void)onAuthDidSuccessWithResult:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)openProfileWithContact:(id)arg1;
- (void)showFailViewWithErrMsg:(id)arg1;
- (void)onReturn;
- (void)onOpenProfile:(int)arg1 WithErrMsg:(id)arg2 WithContact:(id)arg3 Ticket:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)openApiParameter;
- (void)setOpenApiParameter:(id)arg1;
- (void).cxx_destruct;
@end
