@interface WCFinderGetTopicSuggestCGI : WCFinderBaseCgi
{
    NSString * _topicQuery; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
}
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)topicQuery;
- (void)setTopicQuery:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
