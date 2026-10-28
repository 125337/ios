@interface WCFinderLiveInviteMicWithAudienceCGI : WCFinderLiveBaseCgi
{
    BOOL _withVideo; // +0x8
    unsigned int _seatId; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderContact * _toFinderContact; // +0x18
    NSData * _liveCookies; // +0x20
    id /* block */ _completionBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 withVideo:(BOOL)arg4 seatId:(unsigned int)arg5 liveCookies:(id)arg6 completion:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (BOOL)withVideo;
- (void)setWithVideo:(BOOL)arg1;
- (unsigned int)seatId;
- (void)setSeatId:(unsigned int)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
