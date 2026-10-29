@interface TPRichMediaAsyncRequester : NSObject <ITPPlayerRichMediaAsyncRequesterWrapperCallback, ITPRichMediaAsyncRequester>
{
    id <ITPRichMediaAsyncRequesterDelegate> delegate; // +0x8
    id <ITPPlayerRichMediaAsyncRequesterWrapper> _requester; // +0x10
    TPPlayerLogContext * _log; // +0x18
}
- (id)init;
- (long long)setRichMediaSource:(id)arg1;
- (long long)prepareAsync;
- (id)features;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMs:(long long)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMsArray:(id)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRange:(id)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRangeArray:(id)arg2;
- (void)cancelRequestWithRequestId:(int)arg1;
- (void)releaseRequester;
- (void)onRequesterPrepared:(id)arg1;
- (void)onRequester:(id)arg1 errorCode:(int)arg2;
- (void)onFeatureDataRequestFailure:(id)arg1 requestId:(int)arg2 featureIndex:(int)arg3 errorCode:(int)arg4;
- (void)onFeatureDataRequestSuccess:(id)arg1 requestId:(int)arg2 featureIndex:(int)arg3 featureData:(const void *)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)requester;
- (void)setRequester:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (void).cxx_destruct;
@end
