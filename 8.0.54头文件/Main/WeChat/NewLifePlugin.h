@interface NewLifePlugin : NSObject <MMImagePickerManagerDelegate, FlutterStreamHandler, FLTFlowListDataAction, MMFlutterPlugin>
{
    UIViewController * _associateViewController; // +0x8
    FlutterEventChannel * _editPhotosEventChannel; // +0x10
    id /* block */ _editPhotosEventSink; // +0x18
    FLTPreviewPictureCallbackApi * _previewPictureCallbackApi; // +0x20
    FLTNewLifeCommonApi * _commonApi; // +0x28
    NSMutableSet * _handlerSet; // +0x30
    NSObject<FlutterTextureRegistry> * _flutterTextureRegistery; // +0x38
    WCFinderDataItem * _detailLiveDataItem; // +0x40
    BrandDirectlyOperateContactLogic * _brandOperateContactLogic; // +0x48
}
+ (void)handleNewLifeFinderLikeFeed:(id)arg1 completion:(id /* block */)arg2;
+ (id)requestFromData:(id)arg1 pbClass:(Class)arg2;
+ (id)plugin;
- (void)handleGetLocalConfigRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRequestContactRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDeleteFeedRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCodeStartRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFinishCodeStartRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleClearReddotInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRegisterCallbackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUnregisterCallbackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleWxamToPicRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRepostRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleKeyboardScrollState:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNativeCropImageRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleListScrollEvent:(id)arg1;
- (void)handleHomeChannelTabAreaNotify:(id)arg1;
- (void)handleOpenFinderProfilePage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetDetailEmbeddedInfo:(id)arg1 completion:(id /* block */)arg2;
- (long long)getFirstDetailIndex;
- (void)handleCloseAllDetailPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetSelfFinderContact:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetSelfWxContact:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUpdateSearchIconVisibility:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNotifyHomePageSearchResultChanged:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetSelfFinderContactStatus:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNewLifeLikeFeed:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNewLifeFinderLikeFeed:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNewLifeFavoriteFeed:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenFinderTopicPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenFinderEventPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenFinderFollowPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetFeedObjFromNativeCache:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUpdateFeedObjToNativeCache:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBatchGetRedDotTipsShowInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBatchDisposeRedDotTips:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetBizFollowStatus:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFollowUser:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetFavList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetLikeList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetHeartLikeList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetUnReportFeed:(id)arg1 completion:(id /* block */)arg2;
- (void)handleHasFailedPosts:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMergeOrUpdateFeedRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetFeedRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpToProfileWithNickname:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetLatestPostingFeed:(id)arg1 completion:(id /* block */)arg2;
- (void)handleComplaintComment:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBlockOrUnblockCommentUser:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetFunctionSpam:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUpdateMentionUserList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetImageTagList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGeneralJump:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetLocalJumpInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFetchExtraInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFetchAutoPlayMusic:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOpenLikeList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetDynamicConfig:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetNativePath:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpToVideoPlayPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpToBizPicturePage:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePreloadBizPicturePage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetReportSDKInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBatchGetChatRoomInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBatchGetFinderContactCache:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCheckUseWxam:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetCurTabIndex:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRequestPermission:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetAuthorLiveState:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpBindPhone:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePrefetch:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAddReportAction:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePagePerformanceAddStep:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePagePerformanceStart:(id)arg1 completion:(id /* block */)arg2;
- (void)handleStartEnvelopeActivityPage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetCreatorCenterInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetNativeInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)handleStartCdnUpload:(id)arg1 completion:(id /* block */)arg2;
- (void)handleStartCdnUploadSync:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCompressImgRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleActionWithCommand:(id)arg1 requestData:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)dealloc;
- (id)availableNavigationController;
- (void)previewPicturesPictures:(id)arg1 index:(id)arg2 isNeedNotifyPictureSelectChanged:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)fltNewLifeActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)brandOperateContactLogic;
- (void)sendCallback:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)associateViewController;
- (void)setAssociateViewController:(id)arg1;
- (id)editPhotosEventChannel;
- (void)setEditPhotosEventChannel:(id)arg1;
- (id /* block */)editPhotosEventSink;
- (void)setEditPhotosEventSink:(id /* block */)arg1;
- (id)previewPictureCallbackApi;
- (void)setPreviewPictureCallbackApi:(id)arg1;
- (id)commonApi;
- (void)setCommonApi:(id)arg1;
- (id)handlerSet;
- (void)setHandlerSet:(id)arg1;
- (id)flutterTextureRegistery;
- (void)setFlutterTextureRegistery:(id)arg1;
- (id)detailLiveDataItem;
- (void)setDetailLiveDataItem:(id)arg1;
- (void)setBrandOperateContactLogic:(id)arg1;
- (void).cxx_destruct;
@end

