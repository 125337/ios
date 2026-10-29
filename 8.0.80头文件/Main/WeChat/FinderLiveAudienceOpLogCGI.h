@interface FinderLiveAudienceOpLogCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene; // +0x8
    NSMutableArray * _cmdItemRequestWrapList; // +0x10
    NSArray * _unmutableCmdItemRequestWrapList; // +0x18
}
- (id)initWithScene:(unsigned int)arg1;
- (void)addCmdItem:(id)arg1 completeCallBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)start;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)cmdItemRequestWrapList;
- (void)setCmdItemRequestWrapList:(id)arg1;
- (id)unmutableCmdItemRequestWrapList;
- (void)setUnmutableCmdItemRequestWrapList:(id)arg1;
- (void).cxx_destruct;
@end
