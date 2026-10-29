@interface CBTHalfScreenSugCGI : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHalfScreenSugCGICppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHalfScreenSugCGIDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHalfScreenSugCGIDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getHalfScreenSugAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getHalfScreenSugAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getCommonSugAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCommonSugAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getCommonSugDirectAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCommonSugDirectAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getCachedCommonSug:(int)arg1;
- (id)getPicShortcutSug:(int)arg1;
- (void)clearCommonSugCache;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
