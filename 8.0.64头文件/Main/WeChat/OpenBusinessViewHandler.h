@interface OpenBusinessViewHandler : MMObject <IPreEnterWechatLogicExt, IWCBusinessJumpExt, PBMessageObserverDelegate, WCFinderPostViewControllerDelegate, WCFinderLongVideoChooseHelperDelegate>
{
    BOOL _isBizCompleted; // +0x8
    BOOL _dismissModalByBiz; // +0x9
    OpenApiParameter * _parameter; // +0x10
    WAContactGetter * _contactGetter; // +0x18
    MMUINavigationController * _navigationController; // +0x20
    MMAsset * _finderAsset; // +0x28
}
+ (unsigned int)genExtKey;
+ (BOOL)isNativeBusinessType:(id)arg1;
+ (void)navigateBackTo3rdApp:(id)arg1 universalLink:(id)arg2 businessType:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5 extMsg:(id)arg6 appSupportParseUrlParamsType:(unsigned int)arg7;
+ (id)jsonStringWithDict:(id)arg1;
- (void)dealloc;
- (BOOL)startHandle:(id)arg1;
- (void)clearAllHandle;
- (void)checkOpenBusinessView;
- (void)checkOpenNativeView;
- (void)checkOpenNonNativeBusinessView;
- (void)onPreEnterWechatDone;
- (void)processTranslateResult:(id)arg1 parentController:(id)arg2 originUrl:(id)arg3 translateInfo:(id)arg4 jumpController:(id)arg5;
- (void)enterFinderGamePostProcessWithJumpController:(id)arg1 prepareLogic:(id)arg2 needDismissJumpVC:(BOOL)arg3 appId:(id)arg4 ticket:(id)arg5 scene:(unsigned int)arg6;
- (void)enterFinderPostProcessWithJumpController:(id)arg1 businessType:(id)arg2 dictTranslateInfo:(id)arg3;
- (id)getTmpFilePathWithMP4Ext;
- (void)presentFinderpostViewControllerWithPostSession:(id)arg1 presentAnimated:(BOOL)arg2;
- (void)showFinderFailErrWithIumpController:(id)arg1 toastMsg:(id)arg2 errCode:(unsigned int)arg3 errMsg:(id)arg4 appID:(id)arg5 universalLink:(id)arg6 businessType:(id)arg7;
- (BOOL)requestForOpenLiteApp:(id)arg1 appId:(id)arg2 context:(id)arg3;
- (BOOL)requestForLaunchBusinessWxa:(id)arg1 appId:(id)arg2 context:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOpenLiteAppResponse:(id)arg1;
- (void)handleLaunchBusinessWxaResponse:(id)arg1;
- (void)didGetLiteAppVC:(id)arg1 openInfo:(id)arg2 context:(id)arg3;
- (void)doOpenWeAppWithResponse:(id)arg1 contact:(id)arg2 context:(id)arg3;
- (void)getLocalOpenId:(id *)arg1 thirdAppOpenId:(id *)arg2;
- (BOOL)postViewControllerGiveUpByBusiness;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)handleNativeOpenAdCanvas:(id)arg1;
- (void)handleNativeOpenWxSearchWithAppID:(id)arg1 queryInfo:(id)arg2 extInfo:(id)arg3 jumpViewController:(id)arg4;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (BOOL)isBizCompleted;
- (void)setIsBizCompleted:(BOOL)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (BOOL)dismissModalByBiz;
- (void)setDismissModalByBiz:(BOOL)arg1;
- (id)finderAsset;
- (void)setFinderAsset:(id)arg1;
- (void).cxx_destruct;
@end
