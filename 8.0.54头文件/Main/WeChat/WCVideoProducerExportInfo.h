@interface WCVideoProducerExportInfo : NSObject
{
    OMJTemplateInfo * _templateInfo; // +0x8
    OMJMusicInfo * _musicInfo; // +0x10
    SightDraft * _exportSightDraft; // +0x18
    MJTemplateCompositeTask * _templateCompositeTask; // +0x20
}
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)exportSightDraft;
- (void)setExportSightDraft:(id)arg1;
- (id)templateCompositeTask;
- (void)setTemplateCompositeTask:(id)arg1;
- (void).cxx_destruct;
@end

