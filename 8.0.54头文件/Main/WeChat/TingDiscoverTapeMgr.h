@interface TingDiscoverTapeMgr : NSObject <TingDiscoverTapesListener>
{
    unsigned int _taskId; // +0x8
    id <TingDiscoverTapesService> _discoverService; // +0x10
    NSMutableDictionary * _dictTaskContainer; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)discoverMusicTapesWithCompletion:(id /* block */)arg1;
- (void)getCommentInfoForListenIds:(id)arg1 completion:(id /* block */)arg2;
- (void)likeOpWithListenId:(id)arg1 isCancel:(BOOL)arg2 scene:(int)arg3 completion:(id /* block */)arg4;
- (void)likeCurOpLikeStatus:(BOOL)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)onMusicTapesUpdate:(id)arg1 errMsg:(id)arg2 taskId:(unsigned int)arg3;
- (void)onListenItemCommentInfoUpdate:(id)arg1 commentInfo:(id)arg2 errMsg:(id)arg3 taskId:(unsigned int)arg4;
- (id)listenLaterTapeItem;
- (id)audioRecommendTapeItem;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)discoverService;
- (void)setDiscoverService:(id)arg1;
- (id)dictTaskContainer;
- (void)setDictTaskContainer:(id)arg1;
- (void).cxx_destruct;
@end

