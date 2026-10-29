@interface MMVideoSWEncodeTask : VideoEncodeTask
{
    SWTranscoding * _softExportSession; // +0x8
}
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)cleanExportSession;
- (void)stopExport;
- (id)softExportSession;
- (void)setSoftExportSession:(id)arg1;
- (void).cxx_destruct;
@end
