@interface WeNoteNativeToCppSingleton : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wenote::WeNoteNativeToCppSingletonCppCover> cpp_cover; // +0x80
    weak_ptr<wenote::WeNoteNativeToCppSingletonDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WeNoteNativeToCppSingletonDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)createFavNewEditNoteXml:(id)arg1;
- (id)createNoteXmlByConvertFavItem:(id)arg1;
- (id)getAffFavDataPath:(BOOL)arg1 md5:(id)arg2 dataFmt:(id)arg3 isTemp:(BOOL)arg4;
- (void)onBatchGetUpdate:(unsigned long long)arg1 updateNoteXml:(id)arg2;
- (BOOL)getMarkdownNoteSwitch:(id)arg1;
- (BOOL)getMarkdownNotePublishSwitch:(id)arg1;
- (int)getNoteOpenFormat:(unsigned long long)arg1;
- (BOOL)isMarkdownContent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
