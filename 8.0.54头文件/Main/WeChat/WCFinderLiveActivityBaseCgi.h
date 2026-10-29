@interface WCFinderLiveActivityBaseCgi : WCFinderLiveBaseCgi
{
    WXPBGeneratedMessage * _innerRequest; // +0x8
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)setInnerRequest:(id)arg1;
- (id)responseFromBuffer:(id)arg1;
- (id)innerResponseFromResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)callCommonErrorWithInnerResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetFinderLiveActivityCgiResponse:(id)arg1;
- (void)finderLiveActivityCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)innerRequest;
- (void).cxx_destruct;
@end

