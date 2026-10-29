@interface CBTStreamMDCppParser : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTStreamMDCppParserCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTStreamMDCppParserDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTStreamMDCppParserDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)appendText:(id)arg1 isEnd:(BOOL)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
