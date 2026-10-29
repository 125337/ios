@interface EmoticonRecoverService : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonRecoverServiceCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonRecoverServiceDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonRecoverServiceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)startRecover;
- (void)debugCleanAll;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
