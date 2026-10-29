@interface WCFinderStreamRerankCGI : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    NSArray * _feedArray; // +0x10
    WCFinderLocationInfo * _locationInfo; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFeedInfoArray:(id)arg1 commentScene:(int)arg2 lastBuffer:(id)arg3 location:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

