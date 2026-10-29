@interface IamBizAudioTimelineFeedsManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizAudioTimelineFeedsManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizAudioTimelineFeedsManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizAudioTimelineFeedsManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)preloadRecommendListAsync:(int)arg1 exposedPeriodSec:(int)arg2 completion:(id /* block */)arg3;
- (void)preloadRecommendListAsync:(int)arg1 exposedPeriodSec:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)playTimelineFeedsAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)playTimelineFeedsAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onAudioIconRedDotClickedAsync:(id /* block */)arg1;
- (void)onAudioIconRedDotClickedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onTipShownAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onTipShownAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getHasCacheAsync:(id /* block */)arg1;
- (void)getHasCacheAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getAudioRedDotRecordAsync:(id /* block */)arg1;
- (void)getAudioRedDotRecordAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isPlayTimelineFeedsAsync:(id /* block */)arg1;
- (void)isPlayTimelineFeedsAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeHasCacheChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeHasCacheChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeHasCacheChangedEvent:(id)arg1;
- (void)subscribeAudioRedDotRecordChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeAudioRedDotRecordChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeAudioRedDotRecordChangedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
