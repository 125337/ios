@interface WeNoteAffDelegate : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wenote::WeNoteAffDelegateCppCover> cpp_cover; // +0x80
    weak_ptr<wenote::WeNoteAffDelegateDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WeNoteAffDelegateDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)getRTEAttachmentNativeItem:(id)arg1;
- (void)onClickMedia:(id)arg1 index:(int)arg2 needEdit:(BOOL)arg3 originRect:(id)arg4;
- (void)onClickLocation:(id)arg1;
- (void)onClickWebPage:(id)arg1;
- (void)onClickFile:(id)arg1;
- (void)onPlayVoice:(id)arg1 progress:(float)arg2;
- (void)onPauseVoice:(id)arg1;
- (void)onClickExpose;
- (void)onClickLink:(id)arg1;
- (void)onCopyContent:(id)arg1 sectionWrap:(id)arg2;
- (id)onCopyAttachment:(id)arg1;
- (id)onPasteAttachment:(id)arg1 hitLastCopyContent:(BOOL)arg2;
- (void)onClickMoreBtn;
- (void)onChangeTranslateLanguage;
- (void)onGeneratedContentFinished:(id)arg1;
- (void)reportILogs:(int)arg1 reportContent:(id)arg2;
- (void)setCPPInstance:(id)arg1;
- (void)onCloseMediaDetailsAnimationComplete:(id)arg1;
- (void)onSelectPhoto;
- (void)onOpenCamera;
- (void)onSelectLocation;
- (void)onVoiceInput;
- (void)closeVoiceInput;
- (BOOL)isUsingVoiceInput;
- (void)onSelectFav;
- (void)onSelectFile;
- (BOOL)onRecordClick:(BOOL)arg1;
- (BOOL)isOnRecording:(id)arg1;
- (void)onFlutterNotePageStateChange:(int)arg1;
- (BOOL)checkInterceptNotePageExit;
- (void)onChangeEnablePageEdgeDragGesture:(BOOL)arg1;
- (void)checkEnablePasteAsync:(id /* block */)arg1;
- (void)checkEnablePasteAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getAttributeInfoListFromClipBoardAsync:(id /* block */)arg1;
- (void)getAttributeInfoListFromClipBoardAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onDistinguishDictationSpeakerAction:(BOOL)arg1;
- (BOOL)onDictationAction:(BOOL)arg1 allowCommand:(BOOL)arg2 blueMicContinuousEntry:(BOOL)arg3;
- (void)onReportDictationInputRangeAsync:(int)arg1 rangeLength:(int)arg2 completion:(id /* block */)arg3;
- (void)onReportDictationInputRangeAsync:(int)arg1 rangeLength:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onVoiceToText:(id)arg1;
- (void)onOpenVoicePlayer:(id)arg1;
- (void)handleShareToImg:(int)arg1 endIndex:(int)arg2;
- (BOOL)onAITextCommand:(unsigned long long)arg1 selectedRangeLength:(unsigned long long)arg2 selectedText:(id)arg3 command:(id)arg4;
- (void)onAITextCancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
