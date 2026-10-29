@interface TingNativeControllerPlugin : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, FlutterStreamHandler, WCFinderCreateCoordinatorDelegate, TingDiscoverTapeExt, TingAudioTabDataManagerExt, WCCoinConsumeLogicDelegate, WCCoinBuyCoinLogicDelegate, WCFinderFansProfileViewControllerDelegate, SessionSelectControllerDelegate, SharePreConfirmSheetViewDelegate, MMPageSheetAdapterDelegate, MultiSelectContactsViewControllerDelegate, MMFlutterPlugin, TingNativeController>
{
    BOOL _selectImgWithoutCDN; // +0x8
    BOOL _multiSelectContactSingleSelectMode; // +0x9
    UIViewController * _currentViewController; // +0x10
    TingVideoShareHelper * _videoShareHelper; // +0x18
    WCFinderCreateCoordinator * _userCreator; // +0x20
    FlutterEventChannel * _peakPowerEventChannel; // +0x28
    id /* block */ _peakPowerEventSink; // +0x30
    FlutterEventChannel * _voiceInputWordingEventChannel; // +0x38
    id /* block */ _voiceInputWordingEventSink; // +0x40
    FlutterEventChannel * _voiceRecordingInterruptEventChannel; // +0x48
    id /* block */ _voiceRecordingInterruptEventSink; // +0x50
    id /* block */ _selectLocalPhotoComplection; // +0x58
    id /* block */ _selectPhotoWithOptionsCompletion; // +0x60
    id /* block */ _createFinderUserComplection; // +0x68
    TingLaterListenChannel * _listenLaterChannel; // +0x70
    TingStarItemChangeChannel * _starChangeChannel; // +0x78
    TingFlutterPlayController * _playerControllerChannel; // +0x80
    TingSquareXiaoweiChannel * _squareXiaoweiChannel; // +0x88
    TingPlayerAdvertisement * _playerAdvertisement; // +0x90
    TingAudioRecordCallback * _audioRecordCallback; // +0x98
    WCFinderMagicAnimationLogic * _privateReactionMagicAnimationLogic; // +0xa0
    NSString * _privateReactionMagicSessionId; // +0xa8
    id /* block */ _consumeWcCoinCompletion; // +0xb0
    id /* block */ _buyWcCoinCompletion; // +0xb8
    id /* block */ _selectSessionCompletion; // +0xc0
    id /* block */ _showSharePreConfirmViewCompletion; // +0xc8
    UIViewController * _multiSelectContactVC; // +0xd0
    id /* block */ _multiSelectContactCompletion; // +0xd8
    NSArray * _multiSelectPresetContacts; // +0xe0
    double _multiSelectContactPageSheetHeightRatio; // +0xe8
}
+ (BOOL)isEngineCategoryInfoEvent:(id)arg1;
+ (BOOL)isOpenFullscreenPlayerEvent:(id)arg1;
+ (BOOL)isEngineListenItemInfoEvent:(id)arg1;
- (void)openADAdSchemeInfo:(id)arg1 preloadScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)setNavigationBarColorColor:(long long)arg1 completion:(id /* block */)arg2;
- (void)triggerPrivateMessageReactionEffectRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)stopPrivateMessageReactionEffectSessionId:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)triggerPrivateReactionRoseRainWithRequest:(id)arg1 containerView:(id)arg2;
- (void)goToLiteAppAppId:(id)arg1 path:(id)arg2 query:(id)arg3 error:(id *)arg4;
- (void)goToQQMusicPaymentAppId:(id)arg1 mid:(id)arg2 error:(id *)arg3;
- (void)gotoFinderDetailTid:(id)arg1 nonceId:(id)arg2 needGetRelatedList:(BOOL)arg3 sessionId:(id)arg4 error:(id *)arg5;
- (void)gotoFinderDetailWithStartTimeTid:(id)arg1 nonceId:(id)arg2 needGetRelatedList:(BOOL)arg3 sessionId:(id)arg4 startTimeMsk:(long long)arg5 error:(id *)arg6;
- (void)gotoFinderLiveTid:(id)arg1 nonceId:(id)arg2 error:(id *)arg3;
- (void)gotoFinderMyProfileAudioTabContactInfo:(id)arg1 error:(id *)arg2;
- (void)shareTingItemTingItemData:(id)arg1 commentInfo:(id)arg2 categoryItem:(id)arg3 shareScene:(long long)arg4 error:(id *)arg5;
- (void)shareCategoryItemItemData:(id)arg1 shareScene:(long long)arg2 error:(id *)arg3;
- (void)shareContentShareData:(id)arg1 config:(id)arg2 error:(id *)arg3;
- (void)shareTingChatRoomCategoryItem:(id)arg1 listenItem:(id)arg2 listenCount:(int)arg3 shareScene:(long long)arg4 error:(id *)arg5;
- (void)shareTingChatRoomForwardCategoryItem:(id)arg1 listenItem:(id)arg2 listenCount:(int)arg3 name:(id)arg4 shareScene:(long long)arg5 error:(id *)arg6;
- (id)canShowHandOffOpenCommandItemTingItemData:(id)arg1 error:(id *)arg2;
- (void)sendHandOffOpenCommandTingItemData:(id)arg1 error:(id *)arg2;
- (void)openByOtherAppTingItemData:(id)arg1 error:(id *)arg2;
- (void)saveLocalFileTingItemData:(id)arg1 error:(id *)arg2;
- (void)shareLyricTingItemData:(id)arg1 lyricItems:(id)arg2 beginTime:(double)arg3 endTime:(double)arg4 shareScene:(long long)arg5 error:(id *)arg6;
- (id)musicMultimodalWrapDataWithXml:(id)arg1 musicType:(int)arg2;
- (id)isAskXiaoweiHalfScreenEnabledWithError:(id *)arg1;
- (id)isAskXiaoweiEntrySceneAllowedWithError:(id *)arg1;
- (void)askXiaoweiInfo:(id)arg1 reverse:(BOOL)arg2 error:(id *)arg3;
- (void)refreshAskXiaoweiBubbleState;
- (void)refreshSquareMainPageXiaoweiBubble;
- (void)askXiaoweiWithItems:(id)arg1 sequenceMode:(int)arg2 srcInfoParams:(id)arg3 reuse:(BOOL)arg4;
- (void)askXiaoweiWithQuery:(id)arg1 queryBuffer:(id)arg2 tingItemData:(id)arg3 categoryItemData:(id)arg4 reverse:(BOOL)arg5 srcInfoParams:(id)arg6;
- (void)askXiaoweiWithTingItemData:(id)arg1 categoryItemData:(id)arg2 query:(id)arg3 reverse:(BOOL)arg4 srcInfoParams:(id)arg5;
- (void)askXiaoweiWithCategoryItemData:(id)arg1 query:(id)arg2 reverse:(BOOL)arg3 srcInfoParams:(id)arg4;
- (id)musicListBypassJsonWithXml:(id)arg1 showCard:(BOOL)arg2;
- (void)markPlayTaskInFullScreenPlayerModeWithError:(id *)arg1;
- (void)selectLocalImageWithCompletion:(id /* block */)arg1;
- (void)selectLocalPhotoWithCompletion:(id /* block */)arg1;
- (void)selectMediaFromCameraWithCompletion:(id /* block */)arg1;
- (void)uploadLocalPhotoLocalPhotoResult:(id)arg1 completion:(id /* block */)arg2;
- (void)selectPhotoWithOptionsOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)handlePickedImage:(id)arg1;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)get3rdAppInfoAsyncAppId:(id)arg1 completion:(id /* block */)arg2;
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
- (void)goToProfileUserName:(id)arg1 error:(id *)arg2;
- (void)goToMusicChatroomCategoryId:(id)arg1 error:(id *)arg2;
- (void)allowRotateAllow:(BOOL)arg1 error:(id *)arg2;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (void)inPlayerValue:(BOOL)arg1 error:(id *)arg2;
- (void)getContactInfoFromHashAsyncHashUsernames:(id)arg1 completion:(id /* block */)arg2;
- (void)destroyAndReopenTingMiniProgramScene:(long long)arg1 error:(id *)arg2;
- (void)updatePersonalizedRecommendIsPersonalizedRecommend:(BOOL)arg1 error:(id *)arg2;
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
- (void)quickShareCategoryItemItemData:(id)arg1 userName:(id)arg2 error:(id *)arg3;
- (void)quickShareTingItemTingItemData:(id)arg1 userName:(id)arg2 error:(id *)arg3;
- (id)isCategoryItemInFavoritesItemData:(id)arg1 error:(id *)arg2;
- (void)showHalfScreenWebViewUrl:(id)arg1 error:(id *)arg2;
- (void)prepareLiteAppLiteAppType:(long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4 error:(id *)arg5;
- (void)openLiteAppLiteAppType:(long long)arg1 appId:(id)arg2 page:(id)arg3 query:(id)arg4 minVer:(id)arg5 isTransparent:(BOOL)arg6 error:(id *)arg7;
- (void)goToShakeViewControllerWithError:(id *)arg1;
- (void)gotoTingSettingPageWithError:(id *)arg1;
- (void)gotoFinderAccountProfileUsername:(id)arg1 tabType:(long long)arg2 requestScene:(long long)arg3 extraInfo:(id)arg4 followScene:(long long)arg5 error:(id *)arg6;
- (void)gotoFinderAccountProfileHalfPageUsername:(id)arg1 tabType:(long long)arg2 requestScene:(long long)arg3 extraInfo:(id)arg4 followScene:(long long)arg5 error:(id *)arg6;
- (void)gotoFinderProfileHalfPage:(BOOL)arg1 username:(id)arg2 tabType:(long long)arg3 requestScene:(long long)arg4 extraInfo:(id)arg5 followScene:(long long)arg6 error:(id *)arg7;
- (void)gotoBusinessAccountProfileUserName:(id)arg1 scene:(long long)arg2 sceneNote:(id)arg3 error:(id *)arg4;
- (void)followBrandAccountUsername:(id)arg1 isCancel:(BOOL)arg2 scene:(long long)arg3 reportInfo:(id)arg4 sceneNote:(id)arg5 finderBuffer:(id)arg6 completion:(id /* block */)arg7;
- (void)containsInStarListenId:(id)arg1 music:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)addToStarListenItemData:(id)arg1 scene:(long long)arg2 music:(BOOL)arg3 cancel:(BOOL)arg4 snapInfo:(id)arg5 closeTingApp:(BOOL)arg6 error:(id *)arg7;
- (void)updateCurrentMultiTaskIdListenId:(id)arg1 music:(BOOL)arg2 error:(id *)arg3;
- (void)startRecordMinTimeInSecond:(long long)arg1 maxTimeInSecond:(long long)arg2 completion:(id /* block */)arg3;
- (void)startRecordWithConfigurationConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)stopRecordWithCompletion:(id /* block */)arg1;
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
- (void)onListenItemRemoveFromStar:(id)arg1;
- (id)isAppInstalledAppId:(id)arg1 scheme:(id)arg2 error:(id *)arg3;
- (void)launchApplicationAppId:(id)arg1 scheme:(id)arg2 error:(id *)arg3;
- (void)gotoAppInstallPageAppId:(id)arg1 error:(id *)arg2;
- (void)launchApplicationWithUrlAppId:(id)arg1 scheme:(id)arg2 url:(id)arg3 gotoAppInstallPage:(BOOL)arg4 error:(id *)arg5;
- (void)launchKugouBindingByOpenSDKAppId:(id)arg1 scheme:(id)arg2 fallbackUrl:(id)arg3 gotoAppInstallPage:(BOOL)arg4 error:(id *)arg5;
- (void)didAddedListenLaterWithItem:(id)arg1 succeed:(BOOL)arg2;
- (void)didDeletedListenLaterWithItem:(id)arg1 succeed:(BOOL)arg2;
- (void)onOutterLikeOp:(BOOL)arg1 listenId:(id)arg2;
- (void)onOutterThumbUpOp:(BOOL)arg1 listenId:(id)arg2;
- (id)getContactByUsername:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)hybridOpenAudioMineWithError:(id *)arg1;
- (void)openFinderAudioMinePageWithError:(id *)arg1;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (id)jsonCompatibleValue:(id)arg1;
- (void)setWindowKeepScreenOnKeepScreenOn:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onCommonHalfScreenGoDetailClickIdentifier:(id)arg1 error:(id *)arg2;
- (void)showSessionSelectViewAndGetInfoWithCompletion:(id /* block */)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)_contactInfoWrapFromContact:(id)arg1;
- (id)_contactInfoWrapsFromUsernames:(id)arg1;
- (void)showMultiSelectContactViewAndGetInfoConfig:(id)arg1 completion:(id /* block */)arg2;
- (void)pageSheetDidRotation:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (void)showSharePreConfirmViewContactInfo:(id)arg1 categoryItemData:(id)arg2 listenItemData:(id)arg3 completion:(id /* block */)arg4;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)videoShareHelper;
- (void)setVideoShareHelper:(id)arg1;
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
- (id /* block */)selectPhotoWithOptionsCompletion;
- (void)setSelectPhotoWithOptionsCompletion:(id /* block */)arg1;
- (id /* block */)createFinderUserComplection;
- (void)setCreateFinderUserComplection:(id /* block */)arg1;
- (BOOL)selectImgWithoutCDN;
- (void)setSelectImgWithoutCDN:(BOOL)arg1;
- (id)listenLaterChannel;
- (void)setListenLaterChannel:(id)arg1;
- (id)starChangeChannel;
- (void)setStarChangeChannel:(id)arg1;
- (id)playerControllerChannel;
- (void)setPlayerControllerChannel:(id)arg1;
- (id)squareXiaoweiChannel;
- (void)setSquareXiaoweiChannel:(id)arg1;
- (id)playerAdvertisement;
- (void)setPlayerAdvertisement:(id)arg1;
- (id)audioRecordCallback;
- (void)setAudioRecordCallback:(id)arg1;
- (id)privateReactionMagicAnimationLogic;
- (void)setPrivateReactionMagicAnimationLogic:(id)arg1;
- (id)privateReactionMagicSessionId;
- (void)setPrivateReactionMagicSessionId:(id)arg1;
- (id /* block */)consumeWcCoinCompletion;
- (void)setConsumeWcCoinCompletion:(id /* block */)arg1;
- (id /* block */)buyWcCoinCompletion;
- (void)setBuyWcCoinCompletion:(id /* block */)arg1;
- (id /* block */)selectSessionCompletion;
- (void)setSelectSessionCompletion:(id /* block */)arg1;
- (id /* block */)showSharePreConfirmViewCompletion;
- (void)setShowSharePreConfirmViewCompletion:(id /* block */)arg1;
- (id)multiSelectContactVC;
- (void)setMultiSelectContactVC:(id)arg1;
- (id /* block */)multiSelectContactCompletion;
- (void)setMultiSelectContactCompletion:(id /* block */)arg1;
- (id)multiSelectPresetContacts;
- (void)setMultiSelectPresetContacts:(id)arg1;
- (BOOL)multiSelectContactSingleSelectMode;
- (void)setMultiSelectContactSingleSelectMode:(BOOL)arg1;
- (double)multiSelectContactPageSheetHeightRatio;
- (void)setMultiSelectContactPageSheetHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end
