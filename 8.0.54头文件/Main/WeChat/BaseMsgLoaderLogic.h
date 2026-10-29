@interface BaseMsgLoaderLogic : NSObject <BaseMsgViewControllerExt, IMsgExt>
{
    int m_queryCount; // +0x8
    int m_hitPreloadCount; // +0xc
    int m_hitDownPreloadCount; // +0x10
    _opaque_pthread_mutex_t m_dataLock; // +0x18
    id <MsgLoaderLogicDelegate> _delegate; // +0x58
    NSObject<OS_dispatch_queue> * _preloadQueue; // +0x60
    OrderedDictionary * _preloadMsgInfos; // +0x68
    PreloadMsgInfoGenerator * _preloadGenerator; // +0x70
    NSObject<OS_dispatch_queue> * _downPreloadQueue; // +0x78
    OrderedDictionary * _downPreloadMsgInfos; // +0x80
    PreloadMsgInfoGenerator * _downPreloadGenerator; // +0x88
}
- (id)init;
- (void)dealloc;
- (id)getViewModelWithMsgWrap:(id)arg1;
- (void)preload;
- (void)downPreload;
- (void)clearCache;
- (id)getNextPreloadInfoWithLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)preloadWithMessageArray:(id)arg1;
- (id)generateNewPreloadMsgInfosFromMessageArray:(id)arg1;
- (void)generateNewPreloadMsgInfosInMainThreadFromMessageArray:(id)arg1;
- (void)insertPreloadMsgInfo:(id)arg1 viewModel:(id)arg2;
- (void)removePreloadMsgInfosAfterLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (id)getNextDownPreloadInfoWithLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)downPreloadWithMessageArray:(id)arg1;
- (id)generateNewDownPreloadMsgInfosFromMessageArray:(id)arg1;
- (void)generateNewDownPreloadMsgInfosInMainThreadFromMessageArray:(id)arg1;
- (void)insertDownPreloadMsgInfo:(id)arg1 viewModel:(id)arg2;
- (void)removeDownPreloadMsgInfosBeforeLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)preloadQueue;
- (void)setPreloadQueue:(id)arg1;
- (id)preloadMsgInfos;
- (void)setPreloadMsgInfos:(id)arg1;
- (id)preloadGenerator;
- (void)setPreloadGenerator:(id)arg1;
- (id)downPreloadQueue;
- (void)setDownPreloadQueue:(id)arg1;
- (id)downPreloadMsgInfos;
- (void)setDownPreloadMsgInfos:(id)arg1;
- (id)downPreloadGenerator;
- (void)setDownPreloadGenerator:(id)arg1;
- (void).cxx_destruct;
@end

