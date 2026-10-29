@interface CBTAsstRecordTranscriptCGI : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTAsstRecordTranscriptCGICppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTAsstRecordTranscriptCGIDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTAsstRecordTranscriptCGIDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getAssistantMeetingMinutesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getAssistantMeetingMinutesAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)renameMeetingSpeakerAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)renameMeetingSpeakerAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
