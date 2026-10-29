@interface CBTMomentCPP2NativeCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTMomentCPP2NativeCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTMomentCPP2NativeCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTMomentCPP2NativeCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)refreshBadge:(int)arg1;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (void)onMomentItemUpdate:(id)arg1;
- (void)onRecvNewInteraction;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
