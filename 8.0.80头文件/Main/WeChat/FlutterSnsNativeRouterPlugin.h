@interface FlutterSnsNativeRouterPlugin : NSObject <FlutterStreamHandler, WCCommitHookDelegate, WCCommentDetailViewControllerFBDelegate, ServiceAuthExt, WCFacadeExt, PlatformDetailApi, MMFlutterPlugin, PlatformNativeRouterApi, PlatformFeedMenuApi, PlatformReadCountApi>
{
    BOOL _syncV3VisibilityChanges; // +0x8
    unsigned int _lastPublishCreateTime; // +0xc
    id <SNSPluginDelegate> _delegate; // +0x10
    WCTimelinePoster * _poster; // +0x18
    FlutterEventChannel * _snsPublishEventChannel; // +0x20
    id /* block */ _snsPublishEventSink; // +0x28
    NSDictionary * _pendingFinderShareParams; // +0x30
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0x38
    unsigned long long _v3NativeLocalPublishDetailId; // +0x40
    FlutterDetailApi * _detailCaller; // +0x48
    NSMutableDictionary * _pendingStarGuideActionCompletions; // +0x50
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (BOOL)isPrivate:(id)arg1;
- (id)shareScopeMgr;
- (id)dataItemFromSnsIdValue:(id)arg1;
- (id)dataItemFromObjectBuffer:(id)arg1;
- (id)detailStarGuideViewModelWithDataItem:(id)arg1;
- (id)detailFinderShareViewModelWithDataItem:(id)arg1;
- (id)platformStarGuideItemWithViewModel:(id)arg1;
- (id)platformFinderShareGuideItemWithViewModel:(id)arg1;
- (id)dataItemFromNativeLocalPublishIdValue:(id)arg1;
- (id)dataItemFromShareScopeParams:(id)arg1;
- (BOOL)handleOpenShareScopeWithParams:(id)arg1 modify:(BOOL)arg2;
- (void)handleJumpToSingleFeedBrowser:(id)arg1;
- (void)sns_presentFullScreenWithParams:(id)arg1 fromVC:(id)arg2 mediaId:(id)arg3 mediaWraps:(id)arg4 mediaIndex:(long long)arg5 rectList:(id)arg6 isVideo:(BOOL)arg7 oDataItem:(id)arg8 mediaItem:(id)arg9;
- (void)handleJumpToGalleryWithRange:(id)arg1;
- (void)handleJumpToFinderLive:(id)arg1;
- (void)_doJumpToFinderLive:(id)arg1 liveShareItem:(id)arg2;
- (void)handleJumpToCommentImage:(id)arg1;
- (void)triggerFeedMenuActionAction:(unsigned long long)arg1 snsObjectBuffer:(id)arg2 mediaIndex:(long long)arg3 fromPage:(id)arg4 imageRect:(id)arg5 completion:(id /* block */)arg6;
- (void)silencePlayVideoForFeed:(id)arg1 mediaItem:(id)arg2 fromVC:(id)arg3 imageRect:(id)arg4;
- (void)editImageForFeed:(id)arg1 mediaItem:(id)arg2 mediaIndex:(long long)arg3 fromVC:(id)arg4 imageRect:(id)arg5;
- (void)imageWebSearchForFeed:(id)arg1 mediaItem:(id)arg2 fromVC:(id)arg3 fromPage:(id)arg4;
- (void)addFavoriteForFeed:(id)arg1 mediaItem:(id)arg2;
- (void)shareTimeLineToOpenSDKForFeed:(id)arg1 mediaItem:(id)arg2;
- (void)handleJumpToFinderCollection:(id)arg1;
- (void)handleJumpToFinderTopic:(id)arg1;
- (void)handleJumpToWeNote:(id)arg1;
- (void)handleJumpToFinderSharePoi:(id)arg1;
- (void)handleJumpToFinderShare:(id)arg1;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)notifyFinderThumbDidRenderSnsId:(id)arg1 error:(id *)arg2;
- (void)getDetailGuideItemsSnsObjectBuffer:(id)arg1 completion:(id /* block */)arg2;
- (void)reportDetailGuideExposureType:(unsigned long long)arg1 snsObjectBuffer:(id)arg2 completion:(id /* block */)arg3;
- (void)performDetailGuideActionType:(unsigned long long)arg1 snsObjectBuffer:(id)arg2 completion:(id /* block */)arg3;
- (void)performStarGuideActionWithDataItem:(id)arg1 completion:(id /* block */)arg2;
- (void)addPendingStarGuideActionCompletion:(id /* block */)arg1 itemID:(id)arg2;
- (BOOL)removePendingStarGuideActionCompletion:(id /* block */)arg1 itemID:(id)arg2;
- (void)completePendingStarGuideActionForDataItem:(id)arg1 success:(BOOL)arg2;
- (void)onModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)performFinderShareGuideActionWithDataItem:(id)arg1 completion:(id /* block */)arg2;
- (void)handleJumpToTingList:(id)arg1;
- (void)handleJumpToTingAudio:(id)arg1;
- (void)handleJumpToEmotionShare:(id)arg1;
- (void)handleJumpToPOI:(id)arg1;
- (void)handleJumpToFeedSource:(id)arg1;
- (void)handleJumpToEmotionDesinger:(id)arg1;
- (void)handleJumpToEmotionTopic:(id)arg1;
- (void)handleJumpToFinderCoverDetail:(id)arg1;
- (void)jumpToSNSNativePagePage:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)jumpToSNSDetailWithSnsIdSnsId:(long long)arg1 completion:(id /* block */)arg2;
- (void)handleJumpToBizVideo:(id)arg1;
- (void)handleJumpToExtGameShare:(id)arg1;
- (void)handleJumpToWeShop:(id)arg1;
- (void)pushDetailWithWCDataItem:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)sendSnsPublishEvent:(int)arg1 snsdata:(id)arg2;
- (id)jsonWithState:(int)arg1 snsdata:(id)arg2;
- (void)onPostBegin:(id)arg1 dataItem:(id)arg2;
- (void)onPostRequest:(id)arg1 ExtFlag:(unsigned int)arg2;
- (void)onPostFinish:(id)arg1;
- (void)onDataItemVisibilityChanged:(id)arg1 visibilityChangeOp:(id)arg2;
- (void)onVisiblityChanged:(id)arg1 visiblityOp:(id)arg2;
- (void)onPinChanged:(id)arg1 isPined:(BOOL)arg2;
- (BOOL)onDeleteNativeLocalPublishDataItemIfNeeded:(id)arg1;
- (void)onDeleteData;
- (void)endAlbumReadCountSessionWithError:(id *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)poster;
- (void)setPoster:(id)arg1;
- (id)snsPublishEventChannel;
- (void)setSnsPublishEventChannel:(id)arg1;
- (id /* block */)snsPublishEventSink;
- (void)setSnsPublishEventSink:(id /* block */)arg1;
- (unsigned int)lastPublishCreateTime;
- (void)setLastPublishCreateTime:(unsigned int)arg1;
- (id)pendingFinderShareParams;
- (void)setPendingFinderShareParams:(id)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (unsigned long long)v3NativeLocalPublishDetailId;
- (void)setV3NativeLocalPublishDetailId:(unsigned long long)arg1;
- (BOOL)syncV3VisibilityChanges;
- (void)setSyncV3VisibilityChanges:(BOOL)arg1;
- (id)detailCaller;
- (void)setDetailCaller:(id)arg1;
- (id)pendingStarGuideActionCompletions;
- (void)setPendingStarGuideActionCompletions:(id)arg1;
- (void).cxx_destruct;
@end
