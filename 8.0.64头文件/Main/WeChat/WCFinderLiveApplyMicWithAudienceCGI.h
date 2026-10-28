@interface WCFinderLiveApplyMicWithAudienceCGI : WCFinderLiveBaseCgi
{
    BOOL _isAnchor; // +0x8
    BOOL _withVideo; // +0x9
    BOOL _isInvitedByAnchor; // +0xa
    unsigned int _seatId; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderContact * _toFinderContact; // +0x18
    FinderLiveLocation * _finderLiveLocation; // +0x20
    NSData * _inviteMicBuffer; // +0x28
    NSData * _liveCookies; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 isAnchor:(BOOL)arg4 withVideo:(BOOL)arg5 finderLiveLocation:(id)arg6 seatId:(unsigned int)arg7 isInvitedByAnchor:(BOOL)arg8 inviteMicBuffer:(id)arg9 liveCookies:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (BOOL)withVideo;
- (void)setWithVideo:(BOOL)arg1;
- (id)finderLiveLocation;
- (void)setFinderLiveLocation:(id)arg1;
- (unsigned int)seatId;
- (void)setSeatId:(unsigned int)arg1;
- (BOOL)isInvitedByAnchor;
- (void)setIsInvitedByAnchor:(BOOL)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
