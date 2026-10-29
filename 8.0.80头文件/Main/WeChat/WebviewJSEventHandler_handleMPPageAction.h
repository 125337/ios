@interface WebviewJSEventHandler_handleMPPageAction : WebviewJSEventHandlerBase <MsgImgFullScreenViewControllerDelegate, MMImgFullScreenViewControllerDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate, WCCommitViewResultDelegate, PBMessageObserverDelegate, MMScrollActionSheetDelegate, MMImageLoaderObserver, BrandFansContactProfileControllerDelegate, RecentForwardScrollViewDelegate, LocationRetrieveDelegate>
{
    ForwardMessageLogicController * m_forwardLogicController; // +0x8
    JSAPIHandleMPPageActionShareFriendContext * m_shareFriendContext; // +0x10
    JSAPIHandleMPPageActionShareTimelineContext * m_shareTimelineContext; // +0x18
    JSAPIHandleMPPageActionShowActionSheetContext * m_actionsheetContext; // +0x20
    JSAPIHandleMPPageActionFavContext * m_favContext; // +0x28
    NSMutableDictionary * m_brandMpVideoReporterDict; // +0x30
    NSMutableDictionary * m_brandLandingPageReportLogicDict; // +0x38
    NSString * m_shareAction; // +0x40
    UIImage * m_shareEmbedExcerptImage; // +0x48
    NSString * m_shareEmbedExcerptImageSourceUrl; // +0x50
    WCMomentsScrollActionSheet * m_scrollActionSheet; // +0x58
    RecentForwardScrollView * m_recentForwardScrollView; // +0x60
    MMShareExcerptPreviewView * m_excerptPreviewView; // +0x68
    LocationRetriever * m_locationRetriever; // +0x70
    JSEvent * m_currentLocationEvent; // +0x78
}
- (void)dealloc;
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)asyncHandle_callbackFailEvent:(id)arg1 andDescription:(id)arg2;
- (void)syncHandle_callbackEvent:(id)arg1 WithResult:(id)arg2;
- (void)syncHandle_callbackFailEvent:(id)arg1 withDescription:(id)arg2;
- (BOOL)isCommonAction:(id)arg1;
- (void)commonMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (id)openSystemNotification:(id)arg1;
- (void)handleLikeStatChanged:(id)arg1;
- (BOOL)isChildModeSupportAction:(id)arg1;
- (BOOL)isNonChildModeSupportAction:(id)arg1;
- (void)childMode_doAction:(id)arg1 paramters:(id)arg2 event:(id)arg3;
- (void)nonchildMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (void)onClickNegativeFeedback:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)wxConfig:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)opInputAccessoryView:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)reportByLeaveForMPGateway:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)getEnterTime:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showMenu:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)pullActionSheet:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showNavShadowView:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)hideNavShadowView;
- (void)doFavoritePage:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)setClipboardData:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShowToast:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onFirstScreenRender:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)syncReadState:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)setVoteStatus:(id)arg1 errMsg:(id *)arg2;
- (void)disableContextMenu:(id)arg1 errMsg:(id *)arg2;
- (void)disableExposeAlert:(id)arg1 errMsg:(id *)arg2;
- (void)setScreenCaptureProtection:(id)arg1 errMsg:(id *)arg2;
- (void)doFavoriteExcerpt:(id)arg1 errMsg:(id *)arg2;
- (id)doGetLiveStatus;
- (void)doShowTingEntry:(id)arg1 errMsg:(id *)arg2;
- (void)switchPublishImageEntry:(id)arg1;
- (void)delFavItem:(id)arg1 errMsg:(id *)arg2;
- (void)delFavItemBySourceId:(id)arg1 MPActionEvent:(id)arg2;
- (void)delFavoriteExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)translateExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)onUnderlineMenuExpose:(id)arg1 errMsg:(id *)arg2;
- (void)doOpenFinderLive:(id)arg1 errMsg:(id *)arg2;
- (void)openImmerseList:(id)arg1 errMsg:(id *)arg2;
- (void)onWriteComment:(id)arg1 MPActionEvent:(id)arg2 isSubReply:(BOOL)arg3 errMsg:(id *)arg4;
- (void)onPaySuccess:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onGetIAPProductInfo:(id)arg1 MPActionEvent:(id)arg2;
- (void)setLocalData:(id)arg1 MPActionEvent:(id)arg2;
- (void)getLocalData:(id)arg1 MPActionEvent:(id)arg2;
- (void)setVerticalScrollIndicatorVisable:(id)arg1;
- (id)capabilityOriginImage;
- (void)optionOriginImage:(id)arg1 MPActionEvent:(id)arg2;
- (void)deleteBrandOutboxByMsgId:(id)arg1;
- (void)showChatBotPrivacyPageSheet:(id)arg1 MPActionEvent:(id)arg2;
- (void)preloadImage:(id)arg1;
- (void)startCircleToSearch:(id)arg1 errMsg:(id *)arg2;
- (id)getIsEnabledForCircleToSearch:(id)arg1 errMsg:(id *)arg2;
- (id)getTeenModeTemporaryVisitInfo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)requestTeenModeTemporaryVisit:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)reportRecommend:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)setSnapshotOnWebview:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)takeSnapshotOnWindow:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)getSingleSendButtonSwitch:(id)arg1;
- (void)deleteBizArticle:(id)arg1 event:(id)arg2;
- (void)deleteBizArticleActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finishDeleteBizArticleMsgId:(unsigned long long)arg1 idx:(unsigned long long)arg2 success:(BOOL)arg3 showSuccessToast:(BOOL)arg4 event:(id)arg5;
- (void)openMpApp:(id)arg1 event:(id)arg2;
- (void)onShare:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)onGetFuncFlag:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)shareEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)directlyShareFriend:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)longPressEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showShareActionSheet:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3 scene:(unsigned int)arg4;
- (void)openEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (BOOL)doFavorite;
- (BOOL)doShareFriend;
- (BOOL)doShareTimeline;
- (void)onShareEmbedMpVideoEventStr:(id)arg1 videoVid:(id)arg2;
- (void)onShareEmbedExcerptEventStr:(id)arg1 sendChatType:(unsigned int)arg2;
- (void)onShareEmbedExcerptEventStr:(id)arg1;
- (id)getBrandMpVideoReporterByVid:(id)arg1;
- (id)getMpLandingPageReportLogicByMsg:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onMMImgFullScreenWillHide:(id)arg1 extraInfo:(id)arg2;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)getCurrentViewController;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleActionSheetLongPressScene:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getBizForPublish:(id)arg1 MPActionEvent:(id)arg2;
- (void)getAllBizForPublish:(id)arg1 MPActionEvent:(id)arg2;
- (void)getWxInfoForMpPage:(id)arg1 MPActionEvent:(id)arg2;
- (void)refreshTimelineFeed:(id)arg1 MPActionEvent:(id)arg2;
- (void)clearTimelineOriginalSelectionUnread:(id)arg1 MPActionEvent:(id)arg2;
- (void)insertSearchRecCard:(id)arg1 MPActionEvent:(id)arg2;
- (void)getImageSugWord:(id)arg1 MPActionEvent:(id)arg2;
- (id)buildSugWordItemsForH5:(id)arg1;
- (void)commonTriggerAction:(id)arg1 MPActionEvent:(id)arg2;
- (void)handleTriggerActionForSearch:(id)arg1 scene:(int)arg2 MPActionEvent:(id)arg3;
- (id)parseExtraWebInfo:(id)arg1 error:(id *)arg2;
- (id)stringifyExtraTriggerInfo:(id)arg1;
- (id)getClientLanguage:(id)arg1;
- (id)getClientTranslateLanguage:(id)arg1;
- (id)showInteractiveHalfScreenProfile:(id)arg1;
- (void)syncPhotoSwitch:(id)arg1 MPActionEvent:(id)arg2;
- (void)checkCanCreatePhotoAccount:(id)arg1 MPActionEvent:(id)arg2;
- (void)getDraftData:(id)arg1 MPActionEvent:(id)arg2;
- (void)cleanPageData:(id)arg1;
- (void)shareEmbedExcerpt:(id)arg1 errMsg:(id *)arg2;
- (void)sendImageMessage:(id)arg1 errMsg:(id *)arg2;
- (void)downloadShareImageDataWithUrl:(id)arg1 completion:(id /* block */)arg2;
- (void)doSendImageMessageWithImage:(id)arg1 imageData:(id)arg2 shareImgUrl:(id)arg3 shareUrl:(id)arg4 banShareUrl:(BOOL)arg5 selectedContact:(id)arg6;
- (void)doSendGifImageMessageWithImageData:(id)arg1 shareUrl:(id)arg2 banShareUrl:(BOOL)arg3 selectedContact:(id)arg4;
- (BOOL)showShareEmbedExcerptOption;
- (BOOL)showShareEmbedExcerptActionSheet;
- (BOOL)shouldShowForwardMP;
- (void)updatePersonalCenterInfo;
- (void)forwardShareEmbedExcerptToTimeline;
- (void)forwardShareEmbedExcerptToFriend:(id)arg1;
- (void)clearShareEmbedExcerptData;
- (id)getWebTransStatus;
- (void)doShareExcerptReportWithContacts:(id)arg1 shareExcerpt:(id)arg2;
- (id)currentPageKey;
- (void)startWXKB;
- (void)stopWXKB;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetInShowAnimation:(id)arg1;
- (void)scrollActionSheetInDismissAnimation:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickViewDetailInController:(id)arg1;
- (void)clickBlockContactInController:(id)arg1;
- (void)confirmBlockUser:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)clickUnblockContactInController:(id)arg1;
- (void)clickSendMessageInController:(id)arg1;
- (void)clickViewProfileInController:(id)arg1;
- (void)goToWXProfileInController:(id)arg1;
- (void)joinChatbotRoom:(id)arg1 errMsg:(id *)arg2;
- (id)getChatbotPermission;
- (void)navigateToChatbotHalfScreen:(id)arg1 errMsg:(id *)arg2;
- (id)getAIArticleSummaryPermission;
- (void)navigateToAIArticleSummary:(id)arg1 errMsg:(id *)arg2;
- (void)navigateToXiaoweiSearch:(id)arg1 errMsg:(id *)arg2;
- (void)reportXiaoweiCustomEvent:(id)arg1 errMsg:(id *)arg2;
- (id)imagePathFromBase64ImageData:(id)arg1 imageMd5:(id *)arg2 errMsg:(id *)arg3;
- (void)navigateToXiaoweiHalfScreen:(id)arg1 errMsg:(id *)arg2;
- (void)showAIProcessMenu:(id)arg1 errMsg:(id *)arg2;
- (void)getCurrentLocation:(id)arg1 event:(id)arg2;
- (void)finishLocationRequestWithSuccess:(id)arg1;
- (void)finishLocationRequestWithError:(id)arg1;
- (void)cleanupLocationRetrieverAndEvent;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)postDataToMiniApp:(id)arg1 MPActionEvent:(id)arg2;
- (void).cxx_destruct;
@end
