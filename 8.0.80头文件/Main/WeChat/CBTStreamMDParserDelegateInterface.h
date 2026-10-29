@interface CBTStreamMDParserDelegateInterface : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTStreamMDParserDelegateInterfaceCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTStreamMDParserDelegateInterfaceDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTStreamMDParserDelegateInterfaceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)onGeneratedContentAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onGeneratedContentAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onGeneratedFootnoteDefAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onGeneratedFootnoteDefAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onParseCompletedAsync:(id /* block */)arg1;
- (void)onParseCompletedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
