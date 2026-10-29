@interface WCPayBaseCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned char _routeInfo; // +0x8
    BOOL _isAutoLifeCycle; // +0x9
    BOOL _enableCache; // +0xa
    BOOL _isNeedNotify; // +0xb
    BOOL _loadCacheAndRequestModeOpen; // +0xc
    BOOL _needCacheResponseOnly; // +0xd
    BOOL _responseFromServer; // +0xe
    unsigned int _cgiNumber; // +0x10
    unsigned int _retryCount; // +0x14
    unsigned int _idKeyId; // +0x18
    unsigned int _idKeyKey; // +0x1c
    unsigned int _eventID; // +0x20
    NSString * _debugModuleName; // +0x28
    WXPBGeneratedMessage * _request; // +0x30
    double _firstPackTimeout; // +0x38
    double _expectFinishTimeout; // +0x40
    unsigned long long _cacheDuration; // +0x48
    unsigned long long _cacheExpiredDate; // +0x50
    Class _cacheResponseClass; // +0x58
    id <WCPayBaseCgiDelegate> _delegate; // +0x60
    WCPayIdKeyRegularReporter * _idKeyReporter; // +0x68
    WXPBGeneratedMessage * _cacheResponse; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)start;
- (void)clearResponseCache;
- (id)getCacheResponse;
- (void)startWithoutCache;
- (void)setupIdKeyReporter;
- (void)failWithNetworking:(id)arg1;
- (BOOL)loadCache;
- (void)loadCacheImmediately;
- (id)cachePath;
- (id)expiredDateKey;
- (void)cacheResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)processCacheDataBeforeSetAsResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)debugModuleName;
- (void)setDebugModuleName:(id)arg1;
- (unsigned int)cgiNumber;
- (void)setCgiNumber:(unsigned int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (double)firstPackTimeout;
- (void)setFirstPackTimeout:(double)arg1;
- (double)expectFinishTimeout;
- (void)setExpectFinishTimeout:(double)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned char)routeInfo;
- (void)setRouteInfo:(unsigned char)arg1;
- (BOOL)isAutoLifeCycle;
- (void)setIsAutoLifeCycle:(BOOL)arg1;
- (unsigned int)idKeyId;
- (void)setIdKeyId:(unsigned int)arg1;
- (unsigned int)idKeyKey;
- (void)setIdKeyKey:(unsigned int)arg1;
- (unsigned long long)cacheDuration;
- (void)setCacheDuration:(unsigned long long)arg1;
- (unsigned long long)cacheExpiredDate;
- (void)setCacheExpiredDate:(unsigned long long)arg1;
- (BOOL)enableCache;
- (void)setEnableCache:(BOOL)arg1;
- (BOOL)isNeedNotify;
- (void)setIsNeedNotify:(BOOL)arg1;
- (BOOL)loadCacheAndRequestModeOpen;
- (void)setLoadCacheAndRequestModeOpen:(BOOL)arg1;
- (Class)cacheResponseClass;
- (void)setCacheResponseClass:(Class)arg1;
- (BOOL)needCacheResponseOnly;
- (void)setNeedCacheResponseOnly:(BOOL)arg1;
- (BOOL)responseFromServer;
- (void)setResponseFromServer:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (id)idKeyReporter;
- (void)setIdKeyReporter:(id)arg1;
- (id)cacheResponse;
- (void)setCacheResponse:(id)arg1;
- (void).cxx_destruct;
@end
