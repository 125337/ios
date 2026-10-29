@interface FaceHuiyanService : LiteAppModule <HuiYanBaseDelegate, FaceRecogUploadLogicDelegate, WXPLiteAppSceneTeardown>
{
    BOOL _needRestoreNavBar; // +0x8
    UIView * _authView; // +0x10
    long long _durationMsOfReflect; // +0x18
    FaceRecogUploadLogic * _uploader; // +0x20
    ReflectProgressCircleView * _progressCircle; // +0x28
    PrivateBlurEffectView * _blurView; // +0x30
    UILabel * _businessTipLabel; // +0x38
    NSLayoutConstraint * _tipsLabelTopConstraint; // +0x40
    NSLayoutConstraint * _faceFrameTopConstraint; // +0x48
    NSMutableArray * _customViews; // +0x50
}
+ (id)liteapp_export_method_async_249_;
+ (id)liteapp_export_method_async_251_;
+ (id)liteapp_export_method_async_253_;
+ (id)liteapp_export_method_async_255_;
+ (id)liteapp_export_method_async_257_;
+ (id)liteapp_export_method_async_259_;
+ (id)liteapp_export_method_async_261_;
+ (id)liteapp_export_method_async_263_;
+ (id)liteapp_export_method_async_265_;
+ (id)liteapp_export_method_async_267_;
+ (id)liteapp_export_method_async_268_;
+ (id)liteapp_export_method_async_269_;
+ (id)liteapp_export_method_async_271_;
+ (id)liteapp_export_method_async_273_;
+ (id)liteapp_export_method_async_275_;
+ (id)liteapp_export_method_async_277_;
+ (id)liteapp_export_method_async_279_;
+ (id)liteapp_export_method_async_281_;
+ (id)liteapp_export_method_async_283_;
+ (id)liteapp_export_method_async_284_;
+ (id)liteapp_export_method_async_286_;
+ (id)liteapp_export_method_async_288_;
+ (id)liteapp_export_method_async_289_;
- (unsigned long long)mappedHuiYanLanguageType;
- (void)closeDanglingAuthDataCallbackWithReason:(id)arg1;
- (void)startAndSetHuiYanAuthDataCallback:(id)arg1;
- (void)startNextStepByLight:(id)arg1;
- (void)closeAuthView;
- (void)stopAuthAction:(id)arg1;
- (void)huiyanRelease;
- (void)initHuiYanSdk;
- (void)getHuiYanSdkVersion;
- (void)getFaceInfo;
- (void)setCustominfo:(id)arg1;
- (id)extractFaceTitleTextFromJson:(id)arg1;
- (id)parseCustomViewSpecsFromJson:(id)arg1;
- (void)faceCheckSuccess:(id)arg1;
- (void)faceCheckFail:(id)arg1;
- (void)faceCheckCancel;
- (void)reportFaceCheckResult:(id)arg1;
- (long long)huiyan_intFor:(id)arg1 key:(id)arg2;
- (unsigned long long)huiyan_uint64For:(id)arg1 key:(id)arg2;
- (id)parseResultJson:(id)arg1;
- (void)storeAndNotifyResult:(id)arg1 raw:(id)arg2 parsed:(id)arg3;
- (void)syncStoreResultToSharedInfo:(id)arg1 parsed:(id)arg2;
- (void)flushReport21131ForResultType:(id)arg1;
- (void)notifyKindaUseCaseWithType:(id)arg1 parsed:(id)arg2;
- (id)stringFrom:(id)arg1 forKeys:(id)arg2;
- (id)countOrLen:(id)arg1;
- (void)resetSessionSm4StateWithReason:(id)arg1;
- (void)syncSm4UtilWithSessionGate;
- (void)setFaceSm4Enable:(id)arg1;
- (void)saveResultToFile:(id)arg1 bioId:(id)arg2 appId:(id)arg3 checktype:(long long)arg4;
- (void)getFaceClientEncKey;
- (void)getFaceCdnEncKey:(id)arg1;
- (void)uploadFileToCDN:(id)arg1;
- (void)onUploadFaceResultFinish:(id)arg1;
- (void)startSecMon;
- (void)stopSecMon;
- (void)onClickContract:(id)arg1;
- (void)onAuthEvent:(unsigned long long)arg1;
- (void)showLoadingViewWithLivedata:(id)arg1;
- (void)showBlurViewWithImage:(id)arg1;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)actionCallbackType:(int)arg1;
- (void)onMainViewCreate:(id)arg1;
- (void)addCustomViewsToAuthView:(id)arg1;
- (void)upgradeTipsLabelAsTitleIn:(id)arg1;
- (void)clearPreviousCustomViews;
- (id)buildViewWithSpec:(id)arg1;
- (void)applyTextStyleToLabel:(id)arg1 spec:(id)arg2;
- (void)applyTextStyleToButton:(id)arg1 spec:(id)arg2;
- (void)onCustomButtonTapped:(id)arg1;
- (id)anchorViewByName:(id)arg1 inAuthView:(id)arg2;
- (id)dimensionConstraintsForView:(id)arg1 spec:(id)arg2 parent:(id)arg3;
- (id)alignConstraintsForView:(id)arg1 spec:(id)arg2 anchor:(id)arg3 parent:(id)arg4;
- (void)addBusinessTipLabelTo:(id)arg1;
- (void)adjustTipsLabelBelowBusinessLabel:(id)arg1 businessLabel:(id)arg2;
- (void)adjustFaceFrameTopBelowTipsLabel:(id)arg1 tipsLabel:(id)arg2;
- (id)allTopConstraintsForView:(id)arg1;
- (void)replaceCancelButtonWithXIcon:(id)arg1;
- (void)adjustCancelButtonPosition:(id)arg1;
- (void)detachAutoLayoutConstraintsForButton:(id)arg1;
- (void)adjustSDKContentViewSize:(id)arg1;
- (double)currentStatusBarHeight;
- (void)forceLightUserInterfaceStyleForAuthView:(id)arg1;
- (void)hideNavigationBarForAuthView:(id)arg1;
- (id)viewControllerForView:(id)arg1;
- (void)addReflectProgressCircleTo:(id)arg1;
- (void)addBlurViewTo:(id)arg1;
- (void)showBlurView:(id)arg1;
- (void)hideBlurView;
- (void)dumpViewHierarchy:(id)arg1 level:(long long)arg2;
- (void)wxpayTeardownSceneForAppUuid:(unsigned int)arg1 reason:(id)arg2;
- (void)onMainViewDestroy;
- (void)claimSharedSession;
- (void)destroyMainViewReleasingSharedSession:(BOOL)arg1;
- (void)onReflectionDurationMS:(long long)arg1;
- (void)dealloc;
- (id)authView;
- (void)setAuthView:(id)arg1;
- (long long)durationMsOfReflect;
- (void)setDurationMsOfReflect:(long long)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)progressCircle;
- (void)setProgressCircle:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)needRestoreNavBar;
- (void)setNeedRestoreNavBar:(BOOL)arg1;
- (id)businessTipLabel;
- (void)setBusinessTipLabel:(id)arg1;
- (id)tipsLabelTopConstraint;
- (void)setTipsLabelTopConstraint:(id)arg1;
- (id)faceFrameTopConstraint;
- (void)setFaceFrameTopConstraint:(id)arg1;
- (id)customViews;
- (void)setCustomViews:(id)arg1;
- (void).cxx_destruct;
@end
