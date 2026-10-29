@interface AffStarManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<star::AffStarManagerCppCover> cpp_cover; // +0x80
    weak_ptr<star::AffStarManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<star::AffStarManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)isOpenStarSwitch;
- (void)setOpenStarSwitch:(BOOL)arg1;
- (BOOL)shouldHideStarEntry;
- (void)setHideStarEntry:(BOOL)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
