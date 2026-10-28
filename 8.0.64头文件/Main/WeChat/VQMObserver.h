@interface VQMObserver : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<vqm::VQMObserverCppCover> cpp_cover; // +0x80
    weak_ptr<vqm::VQMObserverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<vqm::VQMObserverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (unsigned long long)identifier;
- (void)didPoll;
- (void)didBegin;
- (void)willEnd;
- (void)didUpdateProfile:(int)arg1 bytesFromProfile:(id)arg2 bytesToProfile:(id)arg3;
- (void)didReport:(id)arg1 profileApp:(id)arg2 profileMatrix:(id)arg3 profileAudio:(id)arg4 profileVisual:(id)arg5 profileNotification:(id)arg6 profileWxconf:(id)arg7 profileSystemauth:(id)arg8;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
