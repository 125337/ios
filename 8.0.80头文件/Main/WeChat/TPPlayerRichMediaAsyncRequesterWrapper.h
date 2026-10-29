@interface TPPlayerRichMediaAsyncRequesterWrapper : NSObject <ITPPlayerRichMediaAsyncRequesterWrapper>
{
    shared_ptr<ITPPlayerRichMediaAsyncRequester> _richMediaAsyncRequester; // +0x8
    TPPlayerRichMediaAsyncRequesterCallbackWrapper * _richMediaAsyncRequesterCallbackWrapper; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setRequesterCallback:(id)arg1;
- (int)setRichMediaSource:(id)arg1;
- (int)prepareAsync;
- (void)cancelRequestWithRequestId:(int)arg1;
- (vector<TPPlayerRichMediaFeature, std::allocator<TPPlayerRichMediaFeature>>)features;
- (void)releaseRequester;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMs:(long long)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMsArray:(const void *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRange:(const TPPlayerRichMediaTimeRange *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRangeArray:(const void *)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
