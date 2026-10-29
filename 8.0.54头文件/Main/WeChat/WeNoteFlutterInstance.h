@interface WeNoteFlutterInstance : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    WeNoteFlutterInstanceCppCover cpp_cover; // +0x80
    weak_ptr<wenote::WeNoteFlutterInstanceDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WeNoteFlutterInstanceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)reloadAttachmentAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadAttachmentAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEndPlayVoiceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onEndPlayVoiceAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onStartPlayVoiceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onStartPlayVoiceAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onVoicePlayingAsync:(id)arg1 offsetInMs:(float)arg2 completion:(id /* block */)arg3;
- (void)onVoicePlayingAsync:(id)arg1 offsetInMs:(float)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onUpdateRecordDetailAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)onUpdateRecordDetailAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)beginParseHTMLAsync:(id)arg1 htmlDownloadTime:(long long)arg2 completion:(id /* block */)arg3;
- (void)beginParseHTMLAsync:(id)arg1 htmlDownloadTime:(long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)translateFullContentAsync:(id /* block */)arg1;
- (void)translateFullContentAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelTranslateAsync:(id /* block */)arg1;
- (void)cancelTranslateAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onChangeTranslationLanguageFinishedAsync:(id /* block */)arg1;
- (void)onChangeTranslationLanguageFinishedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)showTranslationTitleBtnAsync:(id /* block */)arg1;
- (void)showTranslationTitleBtnAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getAttachmentRectAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getAttachmentRectAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)openContentSearchBarAsync:(id /* block */)arg1;
- (void)openContentSearchBarAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)convertToImageAsync:(id /* block */)arg1;
- (void)convertToImageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setAttachmentVisibleAsync:(id)arg1 visible:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setAttachmentVisibleAsync:(id)arg1 visible:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)insertAttributeInfosAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertAttributeInfosAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)insertTextAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertTextAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getToolViewHeightAsync:(id /* block */)arg1;
- (void)getToolViewHeightAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadNoteAsync:(id /* block */)arg1;
- (void)reloadNoteAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

