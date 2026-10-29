@interface BoxIamBizAudioPlayListManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizAudioPlayListManagerCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizAudioPlayListManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizAudioPlayListManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getSpecialPlayListAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getSpecialPlayListAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)subscribeSpecialPlayListChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeSpecialPlayListChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeSpecialPlayListChangedEvent:(id)arg1;
- (void)getPlayingPlayListAsync:(id /* block */)arg1;
- (void)getPlayingPlayListAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)playPlayListAsync:(id)arg1 index:(int)arg2 completion:(id /* block */)arg3;
- (void)playPlayListAsync:(id)arg1 index:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)loadPlayListAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)loadPlayListAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)addToPlayLaterAsync:(id)arg1 scene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)addToPlayLaterAsync:(id)arg1 scene:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)addItemToPlayLaterAsync:(id)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)addItemToPlayLaterAsync:(id)arg1 scene:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)removePlayLaterAsync:(id)arg1 scene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)removePlayLaterAsync:(id)arg1 scene:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)updatePlayerState:(BOOL)arg1;
- (void)markManualChangingIndex;
- (void)getAudioRecommendEnabledAsync:(id /* block */)arg1;
- (void)getAudioRecommendEnabledAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setAudioRecommendEnabledAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setAudioRecommendEnabledAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)playItemWithRecommend:(id)arg1 scene:(int)arg2;
- (void)loadRecommendListWithItem:(id)arg1 scene:(int)arg2 loadInPlayer:(BOOL)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
