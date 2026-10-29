@interface WCFinderStreamCGI : WCFinderBaseCgi
{
    BOOL _isCancel; // +0x8
    int _tabType; // +0xc
    int _commentscene; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
    NSData * _buffer; // +0x28
    unsigned long long _pullType; // +0x30
    NSMutableArray * _unreadItems; // +0x38
    id /* block */ _cancelBlock; // +0x40
    WCFinderStreamRequestParams * _params; // +0x48
}
+ (id)prefetchCacheHashKey:(int)arg1;
+ (id)getStreamRequestTopObjectsWithTabType:(int)arg1 tabTipsObjectId:(unsigned long long)arg2 containerId:(id)arg3 guideBarObjectId:(unsigned long long)arg4 h5ByPass:(id)arg5 topObjects:(id)arg6 bubbleInfo:(id)arg7 relateTid:(unsigned long long)arg8;
+ (BOOL)hasReddotFinderObjectWithTab:(int)arg1 bubbleInfo:(id)arg2;
+ (BOOL)isStreamCacheRequestTopObjects:(id)arg1 equalWithTopObjects:(id)arg2;
+ (id)getUnreadItemsWithParams:(id)arg1 tabType:(int)arg2 commentScene:(int)arg3;
+ (id)convertFinderObjectListToUnreadItems:(id)arg1 tabType:(int)arg2;
- (id)initWithPullType:(unsigned long long)arg1 buffer:(id)arg2 tabType:(int)arg3 commentscene:(int)arg4 params:(id)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (void)createRequest;
- (id)createBackupInfoRequest;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)cancelCGI;
- (void)cancelCGIWithBlock:(id /* block */)arg1;
- (BOOL)needADDeviceInfo;
- (void)reportCGIStart;
- (void)reportCGIFinishWithDebugMessage:(id)arg1;
- (void)reportCGIFail;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id)getStreamRequestTopObjects:(id)arg1 bubbleInfo:(id)arg2;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)unreadItems;
- (void)setUnreadItems:(id)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (int)commentscene;
- (void)setCommentscene:(int)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
