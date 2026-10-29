@interface CBTMomentMgr : MMUserService <CBTMomentCPP2NativeCallerBase, MMActionNotifyCommBizExt, MMServiceProtocol>
{
    BOOL _isSupportMoment; // +0x8
    ChatBotMomentDramaInfo * _dramaInfo; // +0x10
    CBTMomentCPP2NativeCaller * _nativeHelper; // +0x18
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x20
}
- (void)refreshBadge:(int)arg1;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (void)onMomentItemUpdate:(id)arg1;
- (void)onRecvNewInteraction;
- (void)onServiceInit;
- (void)preloadMomentVideo;
- (void)preloadMomentItemList:(id)arg1;
- (void)loadMomentData:(int)arg1 withCursorid:(id)arg2 completion:(id /* block */)arg3;
- (void)batchGetMoments:(id)arg1 type:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)postChatBotMoment:(id)arg1 withType:(int)arg2 completion:(id /* block */)arg3;
- (void)onServiceClearData;
- (void)onRecvNotify:(id)arg1;
- (void)checkAndUpdateMainFrameLeftTopBtn;
- (long long)switchMode;
- (void)setSwitchMode:(long long)arg1;
- (void)likePost:(BOOL)arg1 objectId:(id)arg2 interactionScene:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)uninterestedPost:(BOOL)arg1 objectId:(id)arg2 interactionScene:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)commentPost:(id)arg1 commentQuery:(id)arg2 replyComment:(id)arg3 userInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)reportReadMoment;
- (id)generateDramaInfoString;
- (void)setTimelineType:(unsigned int)arg1;
- (unsigned int)getTimelineType;
- (BOOL)enableTimelineEntry;
- (void)setTimelineEntry:(BOOL)arg1;
- (void)SetNeedTimeLineTabRedDot:(BOOL)arg1;
- (BOOL)GetNeedTimeLineTabRedDot;
- (BOOL)needMainFrameRedDot;
- (void)setMainFrameRedDot:(BOOL)arg1;
- (id)loadMoreInteractionInfo:(id)arg1 sinceTime:(unsigned long long)arg2 isHistoryList:(BOOL)arg3 limite:(unsigned int)arg4;
- (id)getLastestInteractionInfo:(id)arg1;
- (unsigned int)getRedDotCountForType:(id)arg1;
- (void)clearRedDot:(id)arg1 sinceSeqId:(unsigned long long)arg2;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (BOOL)isSupportMoment;
- (void)setIsSupportMoment:(BOOL)arg1;
- (id)dramaInfo;
- (void)setDramaInfo:(id)arg1;
- (id)nativeHelper;
- (void)setNativeHelper:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (void).cxx_destruct;
@end
