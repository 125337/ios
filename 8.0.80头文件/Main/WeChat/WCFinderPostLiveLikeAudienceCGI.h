@interface WCFinderPostLiveLikeAudienceCGI : WCFinderLiveBaseCgi
{
    unsigned int _likeCount; // +0x8
    NSString * _micId; // +0x10
    id /* block */ _completionBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSData * _liveCookies; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 micId:(id)arg2 likeCount:(unsigned int)arg3 liveCookies:(id)arg4 completion:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)micId;
- (void)setMicId:(id)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end
