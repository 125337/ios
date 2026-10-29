@interface CBTHalfScreenStatusObserver : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHalfScreenStatusObserverCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHalfScreenStatusObserverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHalfScreenStatusObserverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)onHalfScreenOpen:(id)arg1 reuseKey:(id)arg2 isAnimationBegin:(BOOL)arg3;
- (void)onHalfScreenClose:(id)arg1 reuseKey:(id)arg2 isAnimationBegin:(BOOL)arg3;
- (void)onHeightChanged:(id)arg1 reuseKey:(id)arg2 currentHeight:(double)arg3 screenHeight:(double)arg4;
- (void)onHalfScreenResume:(id)arg1 reuseKey:(id)arg2;
- (void)onHalfScreenPause:(id)arg1 reuseKey:(id)arg2;
- (void)onEnterFullScreen:(id)arg1 reuseKey:(id)arg2;
- (void)onEnterHalfScreen:(id)arg1 reuseKey:(id)arg2;
- (void)onTTSReadEnabledChanged:(id)arg1 reuseKey:(id)arg2 enabled:(BOOL)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
