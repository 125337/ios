@interface MMVideoNotCompressTask : VideoEncodeTask
{
    MMAssetExportSession * _mmAssetExportSession; // +0x8
}
+ (void)configureMMAssetExportSession:(id)arg1 forEncodeScene:(unsigned long long)arg2;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)cleanExportSession;
- (void)stopExport;
- (id)mmAssetExportSession;
- (void)setMmAssetExportSession:(id)arg1;
- (void).cxx_destruct;
@end
