@interface MMMusicLiveCGIMgr : NSObject <PBMessageObserverDelegate>
{
    NSData * _heartBeatCookie; // +0x8
    NSData * _getMVRecommentListLastBuffer; // +0x10
    id <MMMusicLiveCGIMgrDelegate> _delegate; // +0x18
}
+ (unsigned int)sendGetBeatTracks:(unsigned int)arg1 songId:(id)arg2 mvModel:(id)arg3 completion:(id /* block */)arg4;
+ (void)handleGetBeatTracksCGIWrap:(id)arg1 eventId:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (id)arrTrackItemWithBreakPointMs:(id)arg1 musicDurationMs:(unsigned long long)arg2;
+ (unsigned int)sendGetSongStatusCgiReqWithSongId:(id)arg1 musicInfo:(id)arg2 mvModel:(id)arg3 completion:(id /* block */)arg4;
+ (BOOL)checkCGIBaseRespSuccess:(id)arg1;
+ (unsigned int)sendCheckPermissionReqWith:(id)arg1 completion:(id /* block */)arg2;
- (void)sendLiveJoinReqWithMVModel:(id)arg1;
- (void)sendLiveJoinReqWithSongid:(id)arg1 songinfo:(id)arg2;
- (void)handleLiveJoinCGIWrap:(id)arg1;
- (void)sendLiveHeartBeatReqWithSongId:(id)arg1;
- (void)sendOfflineHeartBeatReqWithSongId:(id)arg1;
- (void)handleLiveCGIWrap:(id)arg1;
- (void)sendPostLiveMsgReq:(id)arg1 songId:(id)arg2 mvModel:(id)arg3;
- (void)sendPostLiveMsgReqWithLocation:(id)arg1 songId:(id)arg2 mvModel:(id)arg3;
- (void)handlePostLiveMsgCGIWrap:(id)arg1;
- (unsigned int)sendGetMVRecommentListReqWithMVModel:(id)arg1 scene:(int)arg2 type:(int)arg3 completion:(id /* block */)arg4;
- (void)handleGetMVRecommentListCGIWrap:(id)arg1 eventId:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)sendMVLikeReqWithMVModel:(id)arg1 isLike:(BOOL)arg2;
- (void)handleMVLikeWithMVModel:(id)arg1 isSuccess:(BOOL)arg2;
- (void)sendFlexibleClipMvDefaultDotCgiWithMvModel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFlexibleClipMvDefaultDotRspWithCipWrap:(id)arg1 oldArrTrack:(id)arg2 completion:(id /* block */)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 bLongPolling:(BOOL)arg3 userData:(id)arg4;
- (id)convertPbMsgListToModelList:(id)arg1;
- (id)convertPbMsgToModel:(id)arg1;
- (id)genClientMsgId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
