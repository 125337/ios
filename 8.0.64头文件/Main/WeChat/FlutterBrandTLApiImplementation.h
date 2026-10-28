@interface FlutterBrandTLApiImplementation : NSObject <BrandTimelineNotifyLogicDelegate, BrandTimelineMsgMgrExt, IContactMgrExt, BrandFinderLiveMgrExt, BrandFinderLiveMgrBatchExt, MMLiveTaskMgrExt, WCPayLogicMgrExt, BrandFlowListViewControllerDelegate, contactInfoDelegate, BrandTimelineSettingViewControllerDelegate, BizTLPersonalCenterMainViewControllerDelegate, contactVerifyLogicDelegate, BrandFansContactProfileControllerDelegate, LocationRetrieveDelegate, BizBaseApi, BizApi, NotifyMsgApi, MMFlutterPlugin>
{
    BOOL _canShowPersonalCenter; // +0x8
    BOOL _isAppearing; // +0x9
    BrandTLExptConfig * _exptConfig; // +0x10
    BizEnterStatusInfo * _enterInfo; // +0x18
    MMFlutterViewController<BrandTLViewControllerProtocol> * _viewController; // +0x20
    NSMutableSet * _setFastLoadTemplateType; // +0x28
    BrandTimelineNotifyLogic * _notifyTipsLogic; // +0x30
    BizBaseCallbackApi * _flutterApiCallback; // +0x38
    BizCallbackApi * _bizApiCallback; // +0x40
    BizPersonalCenterNativeToFlutterApi * _bizPersonalCenterNativeToFlutter; // +0x48
    BizInteractiveCallbackApi * _bizInteractiveNativeToFlutter; // +0x50
    NotifyMsgCallbackApi * _notifyMsgCallback; // +0x58
    CContactVerifyLogic * _m_oLogic; // +0x60
    FlutterBizShareHandler * _flutterBizShareHandler; // +0x68
    LocationRetriever * _locationRetriever; // +0x70
    id /* block */ _locationCompletion; // +0x78
    NSString * _cityCode; // +0x80
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)dealloc;
- (void)onMoveToTop;
- (void)onViewWillBePushed;
- (void)onViewDidBePoped;
- (void)onScreenShot;
- (void)gotoOldListSessionId:(long long)arg1 source:(long long)arg2 error:(id *)arg3;
- (void)gotoProfileInfo:(id)arg1 error:(id *)arg2;
- (void)gotoSettingUIWithError:(id *)arg1;
- (void)gotoFinderProfileJumpInfo:(id)arg1 error:(id *)arg2;
- (void)gotoFinderPaywallJumpInfo:(id)arg1 error:(id *)arg2;
- (void)launchMiniProgramBundle:(id)arg1 error:(id *)arg2;
- (void)gotoFinderJumpInfo:(id)arg1 error:(id *)arg2;
- (void)openUrlArticleInfo:(id)arg1 error:(id *)arg2;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 error:(id *)arg5;
- (void)addToGeneralPreloadUrl:(id)arg1 preloadType:(long long)arg2 itemShowType:(long long)arg3 openScene:(long long)arg4 error:(id *)arg5;
- (void)preloadGeneralImpl:(long long)arg1 urlInfoArr:(id)arg2;
- (void)tryCommonPrefetchWithItemArray:(id)arg1;
- (void)tryPreloadVideoWithItemArray:(id)arg1;
- (void)openPersonalCenter:(id)arg1 source:(id)arg2;
- (void)openOldSessionList:(id)arg1 source:(id)arg2;
- (void)getMassSendDataLastOrderId:(long long)arg1 initData:(BOOL)arg2 resetData:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)isPaidUrl:(id)arg1 error:(id *)arg2;
- (void)setPayStatusUrl:(id)arg1 isPaid:(BOOL)arg2 error:(id *)arg3;
- (void)onClickNotifyTipsWithError:(id *)arg1;
- (id)getNotifyTipsInfoWithError:(id *)arg1;
- (void)doSearchWithError:(id *)arg1;
- (void)resetRedDotWithError:(id *)arg1;
- (id)getUnReadCountWithError:(id *)arg1;
- (void)onExposedMsgId:(long long)arg1 userName:(id)arg2 isValidExposed:(BOOL)arg3 publishEnterSession:(BOOL)arg4 error:(id *)arg5;
- (id)getContactInfoUserName:(id)arg1 error:(id *)arg2;
- (id)__getOftenReadAccountInfoUserName:(id)arg1 error:(id *)arg2;
- (void)getOftenReadAccountInfoUserName:(id)arg1 completion:(id /* block */)arg2;
- (void)getOftenReadAccountInfoBatchUserNames:(id)arg1 completion:(id /* block */)arg2;
- (void)markOftenReadAccountExpiredIfNeedUsername:(id)arg1 error:(id *)arg2;
- (id)getBizEnterStatusInfoWithError:(id *)arg1;
- (id)getBizImgCacheDirectoryWithError:(id *)arg1;
- (id)getBizImgPreviewDirectoryWithError:(id *)arg1;
- (id)getCdnUrlListWithError:(id *)arg1;
- (void)enterSessionUserName:(id)arg1 error:(id *)arg2;
- (id)deleteByTalkerUserName:(id)arg1 error:(id *)arg2;
- (id)deleteByMsgIdMsgId:(long long)arg1 error:(id *)arg2;
- (id)onExpandMsgId:(long long)arg1 error:(id *)arg2;
- (void)gotoBizTestUIWithError:(id *)arg1;
- (void)onMinimizeArticleInfo:(id)arg1 error:(id *)arg2;
- (void)removeMinimizeArticleUrl:(id)arg1 error:(id *)arg2;
- (id)hasMinimizeArticleUrl:(id)arg1 error:(id *)arg2;
- (void)createMagicAdBrandServiceScene:(long long)arg1 error:(id *)arg2;
- (void)createMagicBrandServiceScene:(long long)arg1 error:(id *)arg2;
- (void)getContactInfoBatchUserNames:(id)arg1 completion:(id /* block */)arg2;
- (void)getContactInfoOrSyncUsername:(id)arg1 completion:(id /* block */)arg2;
- (id)isFinderContactFollowFinderUsername:(id)arg1 error:(id *)arg2;
- (id)genRecFinderCardDataFromPigeonInfo:(id)arg1;
- (id)genRecFinderCardDataFromPigeonPreloadInfo:(id)arg1;
- (void)launchBizFinderFeedInfo:(id)arg1 error:(id *)arg2;
- (void)onMinimizeFinderInfo:(id)arg1 error:(id *)arg2;
- (void)removeMinimizeFinderFinderObjectId:(id)arg1 error:(id *)arg2;
- (id)hasMinimizeFinderFinderObjectId:(id)arg1 error:(id *)arg2;
- (void)openFinderContactInfo:(id)arg1 error:(id *)arg2;
- (void)unfollowFinderContactInfo:(id)arg1 error:(id *)arg2;
- (void)getBizFinderLivesInfoBizFinderLiveRedDot:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)saveFinderLivesInfoBatchInfos:(id)arg1 completion:(id /* block */)arg2;
- (void)updateBizFinderLivesInfoUsernameList:(id)arg1 completion:(id /* block */)arg2;
- (void)loadLocalOftenReadInfoWithCompletion:(id /* block */)arg1;
- (void)saveLocalOftenReadInfoInfoBuffer:(id)arg1 completion:(id /* block */)arg2;
- (void)getRecycleCardListMsgId:(long long)arg1 completion:(id /* block */)arg2;
- (void)notifyRecycleCardResultRetBuffer:(id)arg1 completion:(id /* block */)arg2;
- (id)getContactByUsername:(id)arg1;
- (id)genContactInfoFromContact:(id)arg1;
- (id)__getCurNotifyTipsInfo;
- (void)onNotifyMsgCountChange:(unsigned int)arg1;
- (BOOL)isAffModeOpen;
- (void)onDeleteRecCanvasCard:(id)arg1;
- (void)onNativeBizCreationInfoChanged:(id)arg1;
- (void)onInsertMockCanvasModelToRecAtIndex:(long long)arg1 model:(id)arg2;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (void)onAddBrandTimelineMsg:(id)arg1 isHaveNewMsg:(BOOL)arg2;
- (void)onDelBrandTimelineMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onModBrandTimelineMsgArr:(id)arg1;
- (void)onResortSuccess:(unsigned long long)arg1 pageActiveAfterResort:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onGetBrandSubscribeLiveInfo:(id)arg1;
- (void)onGetCacheBrandSubscribeLiveInfo:(id)arg1;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (void)onBatchBrandLivingStatusChange:(id)arg1;
- (void)onLiveTaskUpdateStatus:(id)arg1;
- (void)followBizContactInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllMsgByContact:(id)arg1;
- (id)isLiveBarItemExposuredUserName:(id)arg1 finderId:(id)arg2 error:(id *)arg3;
- (void)markLiveBarItemExposuredUserName:(id)arg1 finderId:(id)arg2 error:(id *)arg3;
- (void)onClickSearchBarWithError:(id *)arg1;
- (void)requestFinderLiveStatsFinder_export_id:(id)arg1 pullScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)getNetWorkInfoWithCompletion:(id /* block */)arg1;
- (id)getNativeBizCreationInfoWithError:(id *)arg1;
- (void)gotoTingWithUrlsUrls:(id)arg1 sessionId:(long long)arg2 source:(long long)arg3 error:(id *)arg4;
- (void)gotoBizAudioPlayerWithUrlsUrls:(id)arg1 sessionId:(long long)arg2 source:(long long)arg3 completion:(id /* block */)arg4;
- (void)openFlowListParams:(id)arg1 error:(id *)arg2;
- (void)preloadFinderDataItemsFinderExportIdList:(id)arg1 completion:(id /* block */)arg2;
- (void)openPersonalCenterMiniAppPageJumpInfo:(id)arg1 error:(id *)arg2;
- (id)draftExistDraftType:(long long)arg1 error:(id *)arg2;
- (void)requestWCPayIsRegWithError:(id *)arg1;
- (void)openBanWebPageUrl:(id)arg1 error:(id *)arg2;
- (void)openRealNameAuthPageUrl:(id)arg1 error:(id *)arg2;
- (void)openBusinessProfilePageUserName:(id)arg1 error:(id *)arg2;
- (void)openInteractiveUrlUrl:(id)arg1 error:(id *)arg2;
- (void)openMpAppUrlUrl:(id)arg1 scene:(unsigned long long)arg2 error:(id *)arg3;
- (void)openBizFansHalfScreenProfileUserInfo:(id)arg1 error:(id *)arg2;
- (void)getSessionJumpPathsDepth:(long long)arg1 completion:(id /* block */)arg2;
- (void)getBizPOIInfoWithCompletion:(id /* block */)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (id)isOpenK1kLocationWithError:(id *)arg1;
- (id)isOpenSystemLocationWithError:(id *)arg1;
- (id)getCurrentClientVersionWithError:(id *)arg1;
- (id)getPersonalCenterCellListWithError:(id *)arg1;
- (void)didSelectPersonalTabGroupIndex:(long long)arg1 cellIndex:(long long)arg2 error:(id *)arg3;
- (void)reportPersonalCenterAction:(long long)arg1 scene:(long long)arg2 redPointNum:(long long)arg3 biz:(id)arg4 hasSmallPoint:(BOOL)arg5 error:(id *)arg6;
- (void)getPlayStatusReportInfoTid:(id)arg1 streamUrl:(id)arg2 completion:(id /* block */)arg3;
- (void)triggerPreDownloadForPathAppId:(id)arg1 path:(id)arg2 scene:(long long)arg3 error:(id *)arg4;
- (void)preloadEnvForPluginAppWithError:(id *)arg1;
- (void)startPreRenderPluginAppJumpInfo:(id)arg1 error:(id *)arg2;
- (id)getBizFlutterShareHandler;
- (void)tryPreloadFinderVideoExportId:(id)arg1 nonceId:(id)arg2 objectId:(id)arg3 completion:(id /* block */)arg4;
- (void)tryPreloadFinderVideoArrayInfoList:(id)arg1 completion:(id /* block */)arg2;
- (void)tryPreloadFinderVideoInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)openFansMsgWithError:(id *)arg1;
- (void)fetchContactsCreateTimeIfNeedWithCompletion:(id /* block */)arg1;
- (void)onInitPersonalCenterWithError:(id *)arg1;
- (void)onExitPersonalCenterWithError:(id *)arg1;
- (void)requestLocationAuthWithCompletion:(id /* block */)arg1;
- (void)onBrandFlowListCellExposeWithModel:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onPersonalizedOperated:(int)arg1;
- (void)clickViewDetailInController:(id)arg1;
- (void)clickBlockContactInController:(id)arg1;
- (void)clickViewProfileInController:(id)arg1;
- (void)confirmBlockUser:(id)arg1;
- (void)clickUnblockContactInController:(id)arg1;
- (id)getNotificationTabInfoWithError:(id *)arg1;
- (id)getNotifyMsgListScene:(long long)arg1 buffer:(long long)arg2 size:(long long)arg3 error:(id *)arg4;
- (void)setHasReadMsgIdList:(id)arg1 error:(id *)arg2;
- (void)onItemClickMsg:(id)arg1 error:(id *)arg2;
- (id)onItemDeleteMsg:(id)arg1 error:(id *)arg2;
- (void)addContactUsername:(id)arg1 error:(id *)arg2;
- (id)getNotifyUnReadCountWithError:(id *)arg1;
- (id)canUseStyleV2WhenMsgVersionMsgVersion:(long long)arg1 error:(id *)arg2;
- (id)convertMsgWrapToNotifyMsg:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)arg1;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (id)enterInfo;
- (void)setEnterInfo:(id)arg1;
- (BOOL)canShowPersonalCenter;
- (void)setCanShowPersonalCenter:(BOOL)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (id)notifyTipsLogic;
- (void)setNotifyTipsLogic:(id)arg1;
- (id)flutterApiCallback;
- (void)setFlutterApiCallback:(id)arg1;
- (id)bizApiCallback;
- (void)setBizApiCallback:(id)arg1;
- (id)bizPersonalCenterNativeToFlutter;
- (void)setBizPersonalCenterNativeToFlutter:(id)arg1;
- (id)bizInteractiveNativeToFlutter;
- (void)setBizInteractiveNativeToFlutter:(id)arg1;
- (id)notifyMsgCallback;
- (void)setNotifyMsgCallback:(id)arg1;
- (BOOL)isAppearing;
- (void)setIsAppearing:(BOOL)arg1;
- (id)m_oLogic;
- (void)setM_oLogic:(id)arg1;
- (id)flutterBizShareHandler;
- (void)setFlutterBizShareHandler:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id /* block */)locationCompletion;
- (void)setLocationCompletion:(id /* block */)arg1;
- (id)cityCode;
- (void)setCityCode:(id)arg1;
- (void).cxx_destruct;
@end
