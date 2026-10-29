@interface SnsAdStorageManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<sns_ad::SnsAdStorageManagerCppCover> cpp_cover; // +0x80
    weak_ptr<sns_ad::SnsAdStorageManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<sns_ad::SnsAdStorageManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)setUp:(id)arg1 nickName:(id)arg2 adMainDir:(id)arg3;
- (void)insertOrUpdateSnsAdInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertOrUpdateSnsAdInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSnsAdInfoAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)deleteSnsAdInfoAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)querySnsAdInfoByTimeAsync:(unsigned long long)arg1 endTime:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)querySnsAdInfoByTimeAsync:(unsigned long long)arg1 endTime:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (id)querySnsAdInfoByTimeSync:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (id)querySnsAdInfoByTimelineList:(id)arg1 isDelContinuousAd:(BOOL)arg2;
- (id)getSnsAdInfoById:(unsigned long long)arg1;
- (BOOL)notifySnsAdInfoUpdated:(unsigned long long)arg1;
- (id)getAdCanvasInfo:(id)arg1;
- (id)getAdCanvasKey:(id)arg1 uxinfo:(id)arg2 capability:(id)arg3 canvasDynamicInfo:(id)arg4 vangoghLibVersion:(id)arg5;
- (void)subscribeSnsAdInfoChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeSnsAdInfoChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeSnsAdInfoChangeEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
