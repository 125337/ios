@interface WCFinderThemeLiveStreamCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    unsigned long long _pullType; // +0x18
    unsigned long long _prefetchCacheSecond; // +0x20
}
+ (id)prefetchCacheHashKey:(int)arg1 containerId:(unsigned long long)arg2 themeId:(id)arg3 themeTag:(id)arg4 cardType:(unsigned long long)arg5;
- (id)initWithLastBuffer:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 clientStatus:(id)arg4 liveClientStatus:(id)arg5 pullType:(unsigned long long)arg6 readStats:(id)arg7 markUnreadList:(id)arg8 fromScene:(int)arg9 commentScene:(int)arg10 tabTipsInfo:(id)arg11 byPass:(id)arg12 beforeJoinLiveStatus:(id)arg13 containerId:(unsigned long long)arg14 relatedObjectId:(unsigned long long)arg15 containerContext:(id)arg16 themeId:(id)arg17 themeTag:(id)arg18 entryBuffer:(id)arg19 aggregationCardType:(unsigned long long)arg20 prefetchCacheSecond:(unsigned long long)arg21 successBlock:(id /* block */)arg22 failedBlock:(id /* block */)arg23;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (unsigned long long)prefetchCacheSecond;
- (void)setPrefetchCacheSecond:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
