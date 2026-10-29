@interface RTEAttachmentNativeItem : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wcrte::RTEAttachmentNativeItemCppCover> cpp_cover; // +0x80
    weak_ptr<wcrte::RTEAttachmentNativeItemDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wcrte::RTEAttachmentNativeItemDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)getTitle;
- (id)getDesc;
- (id)getWebPageInfo;
- (int)getAttachmentType;
- (id)getAttachmentId;
- (id)getDisplayThumbPath:(BOOL)arg1;
- (float)getVoiceDuration;
- (BOOL)hasAnyDataInTemppath;
- (int)getDataType;
- (BOOL)isRecording;
- (id)getVoiceRecordingName;
- (id)getVoiceFileSize;
- (id)getDataMd5;
- (id)getCdnDataUrl;
- (id)getCdnDataKey;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
