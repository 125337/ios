@interface TPPlayerRichMediaProcessorWrapper : NSObject <ITPPlayerRichMediaProcessorWrapper>
{
    shared_ptr<ITPPlayerRichMediaProcessor> _richMediaProcess; // +0x8
    TPPlayerRichMediaProcessorCallbackWrapper * _richMediaProcessCallbackWrapper; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setProcessorCallback:(id)arg1;
- (int)setRichMediaSource:(id)arg1;
- (int)prepareAsync;
- (vector<TPPlayerRichMediaFeature, std::allocator<TPPlayerRichMediaFeature>>)features;
- (int)selectFeatureAsync:(int)arg1 extraRequestInfo:(const TPPlayerRichMediaExtraRequestInfo *)arg2;
- (int)deselectFeatureAsync:(int)arg1;
- (int)getcurrentPositionMs:(long long)arg1 richMediaTypes:(const void *)arg2 featureData:(void *)arg3;
- (void)releaseRichMedia;
- (int)reset;
- (int)seek:(long long)arg1;
- (void)setInnerProcessCallback:(id)arg1;
- (int)setPlaybackRate:(float)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
