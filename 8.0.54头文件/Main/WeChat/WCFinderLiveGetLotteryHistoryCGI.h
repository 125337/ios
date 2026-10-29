@interface WCFinderLiveGetLotteryHistoryCGI : WCFinderLiveBaseCgi
{
    int _supportMultiType; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    unsigned long long _liveId; // +0x20
    unsigned long long _objectId; // +0x28
    NSString * _nonceId; // +0x30
    NSString * _anchorFinderUserName; // +0x38
    NSData * _lastBuffer; // +0x40
    long long _finderLiveScene; // +0x48
    unsigned long long _getType; // +0x50
}
- (id)initWithLiveIdForAudience:(unsigned long long)arg1 liveTaskId:(id)arg2 objectId:(unsigned long long)arg3 nonceId:(id)arg4 lastBuffer:(id)arg5 getType:(unsigned long long)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (id)initWithLiveIdForAnchor:(unsigned long long)arg1 liveTaskId:(id)arg2 objectId:(unsigned long long)arg3 nonceId:(id)arg4 finderUserName:(id)arg5 lastBuffer:(id)arg6 getType:(unsigned long long)arg7 isAssistant:(BOOL)arg8 successBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (id)getLotteryRecordListFrom:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)anchorFinderUserName;
- (void)setAnchorFinderUserName:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (long long)finderLiveScene;
- (void)setFinderLiveScene:(long long)arg1;
- (unsigned long long)getType;
- (void)setGetType:(unsigned long long)arg1;
- (int)supportMultiType;
- (void)setSupportMultiType:(int)arg1;
- (void).cxx_destruct;
@end

