@interface BizTlOpenPublish : MMUserService <BizTlPersonalCenterMgrRegisterExt, MMServiceProtocol>
{
    unsigned int _action; // +0x8
    int _bizType; // +0xc
    unsigned int _draftType; // +0x10
    MMLoadingView * _loadingView; // +0x18
    WAAppOpenParameter * _openParameter; // +0x20
    MMUIViewController * _viewController; // +0x28
    id /* block */ _publishResult; // +0x30
    NSString * _draftScene; // +0x38
    NSArray * _photoList; // +0x40
    NSDictionary * _nativeExtraDataFromOutside; // +0x48
}
+ (id)makePersonalCenterJumpPhotoInfoWithImage:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)openPublishWithImage:(unsigned int)arg1 publishScene:(id)arg2 openParameter:(id)arg3 viewController:(id)arg4 photoList:(id)arg5 nativeExtraData:(id)arg6 publishResult:(id /* block */)arg7;
- (void)openPublishWithParam:(id)arg1 viewController:(id)arg2 photoList:(id)arg3 publishResult:(id /* block */)arg4;
- (void)openPublish:(id)arg1 viewController:(id)arg2 publishResult:(id /* block */)arg3;
- (void)openPublishWithParam:(id)arg1 viewController:(id)arg2 publishResult:(id /* block */)arg3;
- (void)dealPublishResult:(id /* block */)arg1;
- (id)pathOfBizCache;
- (void)parseData:(id)arg1;
- (void)parseDic:(id)arg1;
- (id)generateOpenInfo;
- (void)dealNativeExtraData;
- (void)invokeCallBack:(BOOL)arg1 errMsg:(id)arg2 dic:(id)arg3;
- (void)cleanStatus;
- (void)startLoading;
- (void)stopLoading;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)arg1 photoAcct:(id)arg2;
- (void)openPersonalCenterMiniAppPageWithNewEditorCheck;
- (void)openPublishImageSelectPage;
- (BOOL)checkUseDraftWithOpenInfo:(id)arg1;
- (id)makeHandlerWrapper;
- (id /* block */)makeFinishCallback;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)publishResult;
- (void)setPublishResult:(id /* block */)arg1;
- (id)draftScene;
- (void)setDraftScene:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (unsigned int)draftType;
- (void)setDraftType:(unsigned int)arg1;
- (id)photoList;
- (void)setPhotoList:(id)arg1;
- (id)nativeExtraDataFromOutside;
- (void)setNativeExtraDataFromOutside:(id)arg1;
- (void).cxx_destruct;
@end
