@interface WCFinderLiveApplyMicWithAudienceCGI : WCFinderLiveBaseCgi
{
    BOOL _isAnchor; // +0x8
    BOOL _withVideo; // +0x9
    BOOL _isFromAnchorLiveRoomInvite; // +0xa
    BOOL _enableGestures; // +0xb
    unsigned int _seatId; // +0xc
    unsigned int _applyType; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    WCFinderContact * _toFinderContact; // +0x20
    FinderLiveLocation * _finderLiveLocation; // +0x28
    NSData * _inviteMicBuffer; // +0x30
    NSData * _micInviteShareCardBuffer; // +0x38
    NSData * _liveCookies; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failBlock; // +0x50
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 isAnchor:(BOOL)arg4 withVideo:(BOOL)arg5 finderLiveLocation:(id)arg6 seatId:(unsigned int)arg7 isFromAnchorLiveRoomInvite:(BOOL)arg8 inviteMicBuffer:(id)arg9 micInviteShareCardBuffer:(id)arg10 applyType:(unsigned int)arg11 enableGestures:(BOOL)arg12 liveCookies:(id)arg13 successBlock:(id /* block */)arg14 failBlock:(id /* block */)arg15;
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
- (BOOL)isFromAnchorLiveRoomInvite;
- (void)setIsFromAnchorLiveRoomInvite:(BOOL)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (id)micInviteShareCardBuffer;
- (void)setMicInviteShareCardBuffer:(id)arg1;
- (unsigned int)applyType;
- (void)setApplyType:(unsigned int)arg1;
- (BOOL)enableGestures;
- (void)setEnableGestures:(BOOL)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
