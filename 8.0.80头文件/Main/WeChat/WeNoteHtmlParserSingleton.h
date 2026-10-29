@interface WeNoteHtmlParserSingleton : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wenote::WeNoteHtmlParserSingletonCppCover> cpp_cover; // +0x80
    weak_ptr<wenote::WeNoteHtmlParserSingletonDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WeNoteHtmlParserSingletonDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)parseHtmlToContentSectionList:(id)arg1 dataFmt:(id)arg2;
- (void)insertTextToDocumentAsync:(id)arg1 textToInsert:(id)arg2 insertLocation:(int)arg3 replaceLength:(int)arg4 dataFmt:(id)arg5 completion:(id /* block */)arg6;
- (void)insertTextToDocumentAsync:(id)arg1 textToInsert:(id)arg2 insertLocation:(int)arg3 replaceLength:(int)arg4 dataFmt:(id)arg5 on:(id)arg6 completion:(id /* block */)arg7;
- (void)convertNoteToHtmlAsync:(id)arg1 dataFmt:(id)arg2 completion:(id /* block */)arg3;
- (void)convertNoteToHtmlAsync:(id)arg1 dataFmt:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
