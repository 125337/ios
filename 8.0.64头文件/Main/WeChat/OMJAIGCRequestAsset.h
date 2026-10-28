@interface OMJAIGCRequestAsset : NSObject
{
    OMJAIGCMediaFile * _mediaFile; // +0x8
    OMJAIGCAssetAnalysisResult * _analysisResult; // +0x10
}
- (id)initWithMediaFile:(id)arg1 analysisResult:(id)arg2;
- (id)mediaFile;
- (void)setMediaFile:(id)arg1;
- (id)analysisResult;
- (void)setAnalysisResult:(id)arg1;
- (void).cxx_destruct;
@end
