@interface MiniGameVideoService : MMUserService <MMServiceProtocol>
{
    WCTTable * _miniGameVideoTable; // +0x8
    NSMutableDictionary * _publishCallbackMap; // +0x10
    NSMutableDictionary * _shareCacheMap; // +0x18
    MiniGameVideoShareHandler * _shareHandler; // +0x20
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)saveToGameCenterLocal:(id)arg1 maxNum:(int)arg2 callBack:(id /* block */)arg3;
- (id)saveSingleVideoToGameCenterLocal:(id)arg1;
- (void)clearExpiredMiniGameVideos;
- (void)shareToFriend:(id)arg1 withParentVC:(id)arg2 callBack:(id /* block */)arg3;
- (void)shareToFriendTimeline:(id)arg1 withParentVC:(id)arg2 callBack:(id /* block */)arg3;
- (void)handleShareMiniGameVideo:(id)arg1 withParentVC:(id)arg2 shareType:(unsigned long long)arg3 callBack:(id /* block */)arg4;
- (void)shareToGameCenterPublish:(id)arg1 callBack:(id /* block */)arg2;
- (BOOL)handleWebCallUploadVideoByVideoId:(id)arg1 callBack:(id /* block */)arg2;
- (void)jumpMiniGameVideoManagePage;
- (BOOL)deleteMiniGameVideoByVideoId:(id)arg1;
- (id)getMiniGameVideoByVideoId:(id)arg1;
- (id)getCurUserAllLocalMiniGameVideos;
- (void)cacheShareInfoWithVideoFile:(id)arg1 shareUrl:(id)arg2 shareThumbUrl:(id)arg3;
- (id)getShareInfoByVideoPath:(id)arg1;
- (id)getGameCenterVideosPath;
- (void)reportAllLocalVideosToServer;
- (void)reportLocalVideoToServerWithOpt:(int)arg1 andVideoIdList:(id)arg2;
- (void)onPublishMiniGameVideoSuccess:(id)arg1 needDelete:(BOOL)arg2;
- (void)onPublishMiniGameVideoFaild:(id)arg1 errorMsg:(id)arg2;
- (void)onPublishMiniGameVideoCancel:(id)arg1;
- (void)doMiniGameVideoReport:(id)arg1;
- (id)miniGameVideoTable;
- (void)setMiniGameVideoTable:(id)arg1;
- (id)publishCallbackMap;
- (void)setPublishCallbackMap:(id)arg1;
- (id)shareCacheMap;
- (void)setShareCacheMap:(id)arg1;
- (id)shareHandler;
- (void)setShareHandler:(id)arg1;
- (void).cxx_destruct;
@end
