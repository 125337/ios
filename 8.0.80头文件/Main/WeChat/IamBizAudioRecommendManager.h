@interface IamBizAudioRecommendManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizAudioRecommendManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizAudioRecommendManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizAudioRecommendManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)setupListener;
- (void)playBizAudioNextAsync:(id /* block */)arg1;
- (void)playBizAudioNextAsync:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)enablePlayBizAudioNext;
- (void)playBizAudioPrevAsync:(id /* block */)arg1;
- (void)playBizAudioPrevAsync:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)enablePlayBizAudioPrev;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
