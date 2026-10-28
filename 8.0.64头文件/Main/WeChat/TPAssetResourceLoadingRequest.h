@interface TPAssetResourceLoadingRequest : NSObject <TPAssetResourceLoadingContentInformationRequestDelegate>
{
    BOOL _finished; // +0x8
    BOOL _cancelled; // +0x9
    int _requestNum; // +0xc
    TPAssetResourceLoadingDataRequest * _dataRequest; // +0x10
    TPAssetResourceLoadingContentInformationRequest * _contentInformationRequest; // +0x18
    id <TPAssetResourceLoadingRequestDelegate> _delegate; // +0x20
    NSMutableSet * _mergeRequestNumSet; // +0x28
}
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 num:(int)arg3 endOfResource:(BOOL)arg4;
- (void)setDelegate:(id)arg1;
- (void)setContentInformationRequest:(id)arg1;
- (void)addRequestNum:(unsigned int)arg1;
- (BOOL)isRequestMerged:(unsigned int)arg1;
- (void)removeRequestWithNum:(unsigned int)arg1;
- (BOOL)isEmptyLoadingRequest;
- (id)description;
- (void)finishLoading;
- (void)onFillContentInformation:(id)arg1;
- (id)fileName;
- (int)requestNum;
- (void)setRequestNum:(int)arg1;
- (id)dataRequest;
- (void)setDataRequest:(id)arg1;
- (id)contentInformationRequest;
- (void)setContentInformationRequest:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mergeRequestNumSet;
- (void)setMergeRequestNumSet:(id)arg1;
- (void).cxx_destruct;
@end
