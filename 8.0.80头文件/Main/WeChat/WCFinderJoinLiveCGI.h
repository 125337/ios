@interface WCFinderJoinLiveCGI : WCFinderLiveBaseCgi
{
    int _commentScene; // +0x8
    int _mixedFlowType; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _entranceQRCodeURL; // +0x20
    NSData * _liveCookies; // +0x28
    NSString * _livePkId; // +0x30
    NSString * _sessionBuffer; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failBlock; // +0x48
    unsigned long long _fromSrc; // +0x50
    unsigned long long _fetchType; // +0x58
    unsigned long long _requestTime; // +0x60
    NSData * _openLiveH5Buffer; // +0x68
}
+ (id)prefetchCacheHashKey:(int)arg1 taskKey:(id)arg2 scene:(unsigned long long)arg3 liveId:(unsigned long long)arg4;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 scene:(unsigned long long)arg3 entranceQRCodeURL:(id)arg4 liveCookies:(id)arg5 livePkId:(id)arg6 sessionBuffer:(id)arg7 commentScene:(int)arg8 fromSrc:(unsigned long long)arg9 fetchType:(unsigned long long)arg10 mixedFlowType:(int)arg11 openLiveH5Buffer:(id)arg12 successBlock:(id /* block */)arg13 failBlock:(id /* block */)arg14;
- (void)start;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (void)addRefSessionBuffer:(id)arg1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)entranceQRCodeURL;
- (void)setEntranceQRCodeURL:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)livePkId;
- (void)setLivePkId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)fromSrc;
- (void)setFromSrc:(unsigned long long)arg1;
- (unsigned long long)fetchType;
- (void)setFetchType:(unsigned long long)arg1;
- (unsigned long long)requestTime;
- (void)setRequestTime:(unsigned long long)arg1;
- (int)mixedFlowType;
- (void)setMixedFlowType:(int)arg1;
- (id)openLiveH5Buffer;
- (void)setOpenLiveH5Buffer:(id)arg1;
- (void).cxx_destruct;
@end
