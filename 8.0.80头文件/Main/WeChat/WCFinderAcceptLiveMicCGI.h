@interface WCFinderAcceptLiveMicCGI : WCFinderLiveBaseCgi
{
    unsigned int _sdkRoomId; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderContact * _toFinderContact; // +0x18
    NSString * _sdkUserId; // +0x20
    NSString * _sessionId; // +0x28
    NSData * _liveCookies; // +0x30
    NSString * _coverImageUrlString; // +0x38
    NSData * _randomMicBuffer; // +0x40
    LiveRoomImg * _applyLiveRoomImages; // +0x48
    id /* block */ _successBlock; // +0x50
    id /* block */ _failBlock; // +0x58
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 sdkUserId:(id)arg4 sdkRoomId:(unsigned int)arg5 sessionId:(id)arg6 coverImageUrlString:(id)arg7 liveRoomImages:(id)arg8 liveCookies:(id)arg9 randomMicBuffer:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (unsigned int)sdkRoomId;
- (void)setSdkRoomId:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)coverImageUrlString;
- (void)setCoverImageUrlString:(id)arg1;
- (id)randomMicBuffer;
- (void)setRandomMicBuffer:(id)arg1;
- (id)applyLiveRoomImages;
- (void)setApplyLiveRoomImages:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
