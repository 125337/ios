@interface CaraCppLiveCellProphet : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraCppLiveCellProphetCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraCppLiveCellProphetDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraCppLiveCellProphetDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)reportThatCellExpose:(const void *)arg1 context:(id)arg2;
- (void)predict:(id)arg1 callback:(id)arg2;
- (void)reportThatCellConsume:(const void *)arg1;
- (void)reportThatPreload:(const void *)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

