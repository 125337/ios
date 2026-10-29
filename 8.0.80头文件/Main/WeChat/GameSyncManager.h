@interface GameSyncManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<game::GameSyncManagerCppCover> cpp_cover; // +0x80
    weak_ptr<game::GameSyncManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<game::GameSyncManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)doSync:(int)arg1 reliableNotifyBuff:(id)arg2 syncScene:(int)arg3 clientCustomInfo:(id)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
