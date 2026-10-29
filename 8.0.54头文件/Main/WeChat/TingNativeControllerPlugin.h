@interface TingNativeControllerPlugin : NSObject <MMImagePickerManagerDelegate, FlutterStreamHandler, WCFinderCreateCoordinatorDelegate, TingDiscoverTapeExt, TingAudioTabDataManagerExt, WCCoinConsumeLogicDelegate, WCCoinBuyCoinLogicDelegate, WCFinderFansProfileViewControllerDelegate, MMFlutterPlugin, TingNativeController>
{
    BOOL _selectImgWithoutCDN; // +0x8
    UIViewController * _currentViewController; // +0x10
    WCFinderCreateCoordinator * _userCreator; // +0x18
    FlutterEventChannel * _peakPowerEventChannel; // +0x20
    id /* block */ _peakPowerEventSink; // +0x28
    FlutterEventChannel * _voiceInputWordingEventChannel; // +0x30
    id /* block */ _voiceInputWordingEventSink; // +0x38
    FlutterEventChannel * _voiceRecordingInterruptEventChannel; // +0x40
    id /* block */ _voiceRecordingInterruptEventSink; // +0x48
    id /* block */ _selectLocalPhotoComplection; // +0x50
    id /* block */ _createFinderUserComplection; // +0x58
    TingLaterListenChannel * _listenLaterChannel; // +0x60
    TingFlutterPlayController * _playerControllerChannel; // +0x68
    TingPlayerAdvertisement * _playerAdvertisement; // +0x70
    id /* block */ _consumeWcCoinCompletion; // +0x78
    id /* block */ _buyWcCoinCompletion; // +0x80
}
+ (BOOL)isEngineCategoryInfoEvent:(id)arg1;
+ (BOOL)isEngineListenItemInfoEvent:(id)arg1;
- (void)preloadMiniProgramPreloadMiniProgramType:(long long)arg1 preloadScene:(long long)arg2 error:(id *)arg3;
- (void)openADAdSchemeInfo:(id)arg1 preloadScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)goToLiteAppAppId:(id)arg1 path:(id)arg2 query:(id)arg3 error:(id *)arg4;
- (void)goToQQMusicPaymentAppId:(id)arg1 mid:(id)arg2 error:(id *)arg3;
- (void)gotoFinderDetailTid:(id)arg1 nonceId:(id)arg2 needGetRelatedList:(BOOL)arg3 sessionId:(id)arg4 error:(id *)arg5;
- (void)gotoFinderFeedTid:(id)arg1 nonceId:(id)arg2 sessionId:(id)arg3 error:(id *)arg4;
- (void)gotoFinderDetailWithStartTimeTid:(id)arg1 nonceId:(id)arg2 needGetRelatedList:(BOOL)arg3 sessionId:(id)arg4 startTimeMsk:(long long)arg5 error:(id *)arg6;
- (void)gotoFinderLiveTid:(id)arg1 nonceId:(id)arg2 error:(id *)arg3;
- (void)followFinderAccountUsername:(id)arg1 isCancel:(BOOL)arg2 tingItemData:(id)arg3 requestScene:(long long)arg4 extraInfo:(id)arg5 completion:(id /* block */)arg6;
- (void)gotoFinderMyProfileAudioTabContactInfo:(id)arg1 error:(id *)arg2;
- (void)shareTingItemTingItemData:(id)arg1 commentInfo:(id)arg2 categoryItem:(id)arg3 shareScene:(long long)arg4 error:(id *)arg5;
- (void)shareCategoryItemItemData:(id)arg1 shareScene:(long long)arg2 error:(id *)arg3;
- (id)canShowHandOffOpenCommandItemTingItemData:(id)arg1 error:(id *)arg2;
- (void)sendHandOffOpenCommandTingItemData:(id)arg1 error:(id *)arg2;
- (void)openByOtherAppTingItemData:(id)arg1 error:(id *)arg2;
- (void)saveLocalFileTingItemData:(id)arg1 error:(id *)arg2;
- (void)shareLyricTingItemData:(id)arg1 lyricItems:(id)arg2 beginTime:(double)arg3 endTime:(double)arg4 shareScene:(long long)arg5 error:(id *)arg6;
- (void)markPlayTaskInFullScreenPlayerModeWithError:(id *)arg1;
- (void)selectLocalImageWithCompletion:(id /* block */)arg1;
- (void)selectLocalPhotoWithCompletion:(id /* block */)arg1;
- (void)uploadLocalPhotoLocalPhotoResult:(id)arg1 completion:(id /* block */)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (id)get3rdAppInfoAppId:(id)arg1 error:(id *)arg2;
- (void)open3rdAppWithTingItemAppId:(id)arg1 itemData:(id)arg2 fromSource:(long long)arg3 error:(id *)arg4;
- (void)gotoBusinessAccountProfileItemData:(id)arg1 error:(id *)arg2;
- (void)gotoBusinessArticleUrl:(id)arg1 error:(id *)arg2;
- (void)gotoBusinessArticleItemData:(id)arg1 error:(id *)arg2;
- (void)scanWithCompletion:(id /* block */)arg1;
- (void)startRecognizeSongWithCompletion:(id /* block */)arg1;
- (void)stopRecognizeSongWithError:(id *)arg1;
- (void)internalStopRecognizeSong;
- (void)startVoiceInputWithCompletion:(id /* block */)arg1;
- (void)stopVoiceInputWithError:(id *)arg1;
- (void)internalStopVoiceInput;
- (id)getIdentityTypeWithError:(id *)arg1;
- (id)getWxUsernameWithError:(id *)arg1;
- (void)goToProfileUserName:(id)arg1 error:(id *)arg2;
- (void)allowRotateAllow:(BOOL)arg1 error:(id *)arg2;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (void)inPlayerValue:(BOOL)arg1 error:(id *)arg2;
- (id)showAudioRedDotWithError:(id *)arg1;
- (id)hasAddedInFavDBSourceId:(id)arg1 error:(id *)arg2;
- (id)deleteFavBySourceIdSourceId:(id)arg1 error:(id *)arg2;
- (id)getContactInfoUsername:(id)arg1 error:(id *)arg2;
- (id)getContactInfoFromHashHashUsernames:(id)arg1 error:(id *)arg2;
- (void)setShowAudioRedDotShow:(BOOL)arg1 error:(id *)arg2;
- (void)destroyAndReopenTingMiniProgramScene:(long long)arg1 error:(id *)arg2;
- (void)updatePersonalizedRecommendIsPersonalizedRecommend:(BOOL)arg1 error:(id *)arg2;
- (void)onPlayerActionItemData:(id)arg1 action:(long long)arg2 error:(id *)arg3;
- (void)__trySyncPlayerActionToWeAppTask:(id)arg1 action:(unsigned long long)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)openFinderFeedDetailPageWithFeedId:(id)arg1 nonceId:(id)arg2 startTime:(id)arg3;
- (void)_openFinderFeedDetailPageWithFeedId:(id)arg1 nonceId:(id)arg2 startTime:(id)arg3;
- (void)goToCreateFinderAccountTipsWording:(id)arg1 completion:(id /* block */)arg2;
- (id)getFinderAccountInfoWithError:(id *)arg1;
- (void)goToWebPageUrl:(id)arg1 scene:(long long)arg2 error:(id *)arg3;
- (void)openWebPageUrl:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;
- (void)openWeAppAppId:(id)arg1 path:(id)arg2 scene:(long long)arg3 sceneNote:(id)arg4 noReLaunch:(BOOL)arg5 debugMode:(long long)arg6 error:(id *)arg7;
- (void)getFinderContactInfoUsername:(id)arg1 completion:(id /* block */)arg2;
- (void)quickShareCategoryItemItemData:(id)arg1 userName:(id)arg2 error:(id *)arg3;
- (void)quickShareTingItemTingItemData:(id)arg1 userName:(id)arg2 error:(id *)arg3;
- (id)isCategoryItemInFavoritesItemData:(id)arg1 error:(id *)arg2;
- (void)showHalfScreenWebViewUrl:(id)arg1 error:(id *)arg2;
- (void)prepareLiteAppLiteAppType:(long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4 error:(id *)arg5;
- (void)openLiteAppLiteAppType:(long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4 minVer:(id)arg5 isTransparent:(BOOL)arg6 error:(id *)arg7;
- (void)goToShakeViewControllerWithError:(id *)arg1;
- (void)gotoTingSettingPageWithError:(id *)arg1;
- (void)gotoFinderAccountProfileUsername:(id)arg1 tabType:(long long)arg2 requestScene:(long long)arg3 extraInfo:(id)arg4 followScene:(long long)arg5 error:(id *)arg6;
- (void)gotoBusinessAccountProfileUserName:(id)arg1 scene:(long long)arg2 sceneNote:(id)arg3 error:(id *)arg4;
- (void)followBrandAccountUsername:(id)arg1 isCancel:(BOOL)arg2 scene:(long long)arg3 reportInfo:(id)arg4 sceneNote:(id)arg5 finderBuffer:(id)arg6 completion:(id /* block */)arg7;
- (id)getBrandContactInfoUsername:(id)arg1 error:(id *)arg2;
- (void)addToStarListenItemData:(id)arg1 scene:(long long)arg2 music:(BOOL)arg3 cancel:(BOOL)arg4 snapInfo:(id)arg5 error:(id *)arg6;
- (void)addOrRevertBlackListTingBypassBuffer:(id)arg1 addOrRevert:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startRecordMinTimeInSecond:(long long)arg1 maxTimeInSecond:(long long)arg2 completion:(id /* block */)arg3;
- (void)stopRecordWithCompletion:(id /* block */)arg1;
- (void)uploadRecordFileToCdnLocalFilePath:(id)arg1 completion:(id /* block */)arg2;
- (void)getWCCoinBalanceWithCompletion:(id /* block */)arg1;
- (void)consumeWCCoinParam:(id)arg1 completion:(id /* block */)arg2;
- (void)buyWCCoinParam:(id)arg1 completion:(id /* block */)arg2;
- (void)showFansHalfProfileUsername:(id)arg1 nickname:(id)arg2 headImgUrl:(id)arg3 listenBypassBuffer:(id)arg4 error:(id *)arg5;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)willAddListenLaterWithItem:(id)arg1;
- (id)isAppInstalledAppId:(id)arg1 scheme:(id)arg2 error:(id *)arg3;
- (void)launchApplicationAppId:(id)arg1 scheme:(id)arg2 error:(id *)arg3;
- (void)gotoAppInstallPageAppId:(id)arg1 error:(id *)arg2;
- (void)launchApplicationWithUrlAppId:(id)arg1 scheme:(id)arg2 url:(id)arg3 gotoAppInstallPage:(BOOL)arg4 error:(id *)arg5;
- (void)didAddedListenLaterWithItem:(id)arg1 succeed:(BOOL)arg2;
- (void)didDeletedListenLaterWithItem:(id)arg1 succeed:(BOOL)arg2;
- (void)onPlayerLikeItemData:(id)arg1 isLike:(BOOL)arg2 error:(id *)arg3;
- (void)onOutterLikeOp:(BOOL)arg1 listenId:(id)arg2;
- (id)getPoiInfoWithError:(id *)arg1;
- (id)getContactByUsername:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)onTingCommonEventEvent:(long long)arg1 params:(id)arg2 error:(id *)arg3;
- (void)onCommonHalfScreenGoDetailClickIdentifier:(id)arg1 error:(id *)arg2;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)userCreator;
- (void)setUserCreator:(id)arg1;
- (id)peakPowerEventChannel;
- (void)setPeakPowerEventChannel:(id)arg1;
- (id /* block */)peakPowerEventSink;
- (void)setPeakPowerEventSink:(id /* block */)arg1;
- (id)voiceInputWordingEventChannel;
- (void)setVoiceInputWordingEventChannel:(id)arg1;
- (id /* block */)voiceInputWordingEventSink;
- (void)setVoiceInputWordingEventSink:(id /* block */)arg1;
- (id)voiceRecordingInterruptEventChannel;
- (void)setVoiceRecordingInterruptEventChannel:(id)arg1;
- (id /* block */)voiceRecordingInterruptEventSink;
- (void)setVoiceRecordingInterruptEventSink:(id /* block */)arg1;
- (id /* block */)selectLocalPhotoComplection;
- (void)setSelectLocalPhotoComplection:(id /* block */)arg1;
- (id /* block */)createFinderUserComplection;
- (void)setCreateFinderUserComplection:(id /* block */)arg1;
- (BOOL)selectImgWithoutCDN;
- (void)setSelectImgWithoutCDN:(BOOL)arg1;
- (id)listenLaterChannel;
- (void)setListenLaterChannel:(id)arg1;
- (id)playerControllerChannel;
- (void)setPlayerControllerChannel:(id)arg1;
- (id)playerAdvertisement;
- (void)setPlayerAdvertisement:(id)arg1;
- (id /* block */)consumeWcCoinCompletion;
- (void)setConsumeWcCoinCompletion:(id /* block */)arg1;
- (id /* block */)buyWcCoinCompletion;
- (void)setBuyWcCoinCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

