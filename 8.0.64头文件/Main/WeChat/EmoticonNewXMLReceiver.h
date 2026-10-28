@interface EmoticonNewXMLReceiver : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonNewXMLReceiverCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonNewXMLReceiverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonNewXMLReceiverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onGotNewXML:(id)arg1 content:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
