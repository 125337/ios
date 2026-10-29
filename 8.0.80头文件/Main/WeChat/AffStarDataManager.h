@interface AffStarDataManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<star::AffStarDataManagerCppCover> cpp_cover; // +0x80
    weak_ptr<star::AffStarDataManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<star::AffStarDataManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)initWithConfigDir:(id)arg1;
- (void)insertByIdAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertByIdAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteByIdAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)deleteByIdAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteByIdAndTypeAsync:(id)arg1 btype:(int)arg2 completion:(id /* block */)arg3;
- (void)deleteByIdAndTypeAsync:(id)arg1 btype:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (id)getByIdAndType:(id)arg1 btype:(int)arg2;
- (void)getAllStarDataAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getAllStarDataAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasData;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
