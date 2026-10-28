@interface MMAssetExportSession : NSObject
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    id /* block */ _completionHandler; // +0x10
    NSURL * _assetUrl; // +0x18
    NSURL * _outputUrl; // +0x20
    VideoEncodeParams * _encodeParams; // +0x28
    long long _metadataType; // +0x30
    NSError * _error; // +0x38
}
- (id)initWithAssetURL:(id)arg1;
- (void)dealloc;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)didFinishExportingWithError:(id)arg1;
- (void)_exportWithCompletionHandler:(id /* block */)arg1;
- (void)__AVAssetExportSession_exportWithCompletionHandler:(id /* block */)arg1;
- (void)__wxTransMovToMp4_exportWithCompletionHandler:(id /* block */)arg1;
- (void)_addWXMetadataIfNeededWithExportSession:(id)arg1;
- (void)_adjustMetadataTypeWhileExportSessionFallback;
- (void)_writeMetadataIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)cancelExport;
- (id)assetUrl;
- (id)outputUrl;
- (void)setOutputUrl:(id)arg1;
- (id)encodeParams;
- (void)setEncodeParams:(id)arg1;
- (long long)metadataType;
- (void)setMetadataType:(long long)arg1;
- (id)error;
- (void).cxx_destruct;
@end
