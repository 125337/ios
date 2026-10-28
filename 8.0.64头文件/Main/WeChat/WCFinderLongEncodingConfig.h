@interface WCFinderLongEncodingConfig : NSObject
{
    BOOL _hadError; // +0x8
    NSURL * _assetUrl; // +0x10
    AVAsset * _asset; // +0x18
    AVMutableVideoComposition * _composition; // +0x20
    id /* block */ _completion; // +0x28
    id /* block */ _progress; // +0x30
    id /* block */ _beforePostCompletion; // +0x38
    NSString * _longVidoePath; // +0x40
    VideoEncodeTask * _longEncodeTask; // +0x48
    AVAssetExportSession * _longEncodeExportSession; // +0x50
}
- (id)initWithUrl:(id)arg1;
- (void)setLongVidoePath:(id)arg1;
- (BOOL)done;
- (void)checkCompletion;
- (id)composition:(id)arg1;
- (id)onComplete:(id /* block */)arg1;
- (id)onProgress:(id /* block */)arg1;
- (id)assetForEncoding;
- (BOOL)isEncodingTask;
- (id)assetUrl;
- (void)setAssetUrl:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)composition;
- (void)setComposition:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)progress;
- (void)setProgress:(id /* block */)arg1;
- (id /* block */)beforePostCompletion;
- (void)setBeforePostCompletion:(id /* block */)arg1;
- (id)longVidoePath;
- (id)longEncodeTask;
- (void)setLongEncodeTask:(id)arg1;
- (id)longEncodeExportSession;
- (void)setLongEncodeExportSession:(id)arg1;
- (BOOL)hadError;
- (void)setHadError:(BOOL)arg1;
- (void).cxx_destruct;
@end
