@interface WeNoteCPPInstance : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wenote::WeNoteCPPInstanceCppCover> cpp_cover; // +0x80
    weak_ptr<wenote::WeNoteCPPInstanceDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WeNoteCPPInstanceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (BOOL)isSmallImageMode;
- (int)getTranslateState;
- (id)getAllContentSectionList;
- (int)getResidualAvailableAttachmentCount;
- (void)saveNoteAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)saveNoteAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasEdited;
- (BOOL)isEmpty;
- (void)beginEditAttachment:(id)arg1;
- (void)endEditAttachment:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
