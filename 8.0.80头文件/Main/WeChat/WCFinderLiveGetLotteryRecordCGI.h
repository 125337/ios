@interface WCFinderLiveGetLotteryRecordCGI : WCFinderLiveBaseCgi
{
    BOOL _isAudience; // +0x8
    long long _opType; // +0x10
    NSString * _lotteryId; // +0x18
    unsigned long long _liveId; // +0x20
    unsigned long long _objectId; // +0x28
    NSString * _nonceId; // +0x30
    NSString * _finderUserName; // +0x38
    NSData * _lastBuffer; // +0x40
    NSData * _liveCookies; // +0x48
    id /* block */ _successBlock; // +0x50
    id /* block */ _failBlock; // +0x58
}
- (id)initWithOpType:(long long)arg1 liveTaskId:(id)arg2 lotteryId:(id)arg3 liveId:(unsigned long long)arg4 objectId:(unsigned long long)arg5 objectNonceId:(id)arg6 finderUserName:(id)arg7 isAudience:(BOOL)arg8 lastBuffer:(id)arg9 liveCookies:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (id)initWithOpType:(long long)arg1 liveTaskId:(id)arg2 lotteryId:(id)arg3 finderDataItem:(id)arg4 finderUserName:(id)arg5 lastBuffer:(id)arg6 liveCookies:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
