@interface WCBaseCgi : MMObject <PBMessageObserverDelegate, PBCoding>
{
    BOOL _isDataReportMonitor; // +0x8
    BOOL _isNeedNotify; // +0x9
    BOOL _isSpeedy; // +0xa
    BOOL _isTreatBaseResponseRetAsNetworkingRet; // +0xb
    BOOL _isAutoLifeCycle; // +0xc
    BOOL _longPolling; // +0xd
    BOOL _bindCellular; // +0xe
    BOOL _logResponseWithJsonFormat; // +0xf
    BOOL _needCGIProfile; // +0x10
    BOOL _canRetry; // +0x11
    unsigned int _cgiNumber; // +0x14
    unsigned int _retryCount; // +0x18
    int _longPollingTimeout; // +0x1c
    unsigned int _channelType; // +0x20
    unsigned int _eventID; // +0x24
    NSString * _debugModuleName; // +0x28
    WXPBGeneratedMessage * _request; // +0x30
    double _serverProcessCost; // +0x38
    double _totalTimeout; // +0x40
    NSData * _respDecryptKey; // +0x48
    unsigned long long _cgiStatus; // +0x50
    id <WCBaseCgiDelegate> _baseDelegate; // +0x58
    unsigned long long _cacheType; // +0x60
    Class _cacheResponseClass; // +0x68
    unsigned long long _cacheDuration; // +0x70
    unsigned long long _cacheExpiredDate; // +0x78
    NSString * _cacheExtraKey; // +0x80
    ProtobufCGIProfile * _cgiProfile; // +0x88
    NSData * _requestData; // +0x90
    NSString * _cgiUrl; // +0x98
    WXPBGeneratedMessage * _cacheResponse; // +0xa0
}
+ (void)PBArrayAdd_debugModuleName;
+ (void)PBArrayAdd_cgiNumber;
+ (void)PBArrayAdd_request;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_isNeedNotify;
+ (void)PBArrayAdd_isAutoLifeCycle;
+ (void)PBArrayAdd_cgiStatus;
+ (void)PBArrayAdd_cacheType;
+ (void)PBArrayAdd_cacheDuration;
+ (void)PBArrayAdd_cacheExpiredDate;
+ (void)PBArrayAdd_eventID;
+ (void)initialize;
+ (id)genBaseRequestWithScene:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)dealloc;
- (id)debugModuleName;
- (void)start;
- (void)removeEvent;
- (void)clearResponseCache;
- (BOOL)prepareStart;
- (void)startWithoutCache;
- (void)failWithNetworking:(int)arg1 response:(id)arg2;
- (void)failWithNetworking:(int)arg1 m_uiMessage:(int)arg2 response:(id)arg3;
- (BOOL)loadCache;
- (void)loadCacheImmediately;
- (id)expiredDateKey;
- (id)cacheResponseKey;
- (void)cacheResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didGetResponseData:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setDebugModuleName:(id)arg1;
- (unsigned int)cgiNumber;
- (void)setCgiNumber:(unsigned int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (BOOL)isDataReportMonitor;
- (void)setIsDataReportMonitor:(BOOL)arg1;
- (BOOL)isNeedNotify;
- (void)setIsNeedNotify:(BOOL)arg1;
- (BOOL)isSpeedy;
- (void)setIsSpeedy:(BOOL)arg1;
- (BOOL)isTreatBaseResponseRetAsNetworkingRet;
- (void)setIsTreatBaseResponseRetAsNetworkingRet:(BOOL)arg1;
- (BOOL)isAutoLifeCycle;
- (void)setIsAutoLifeCycle:(BOOL)arg1;
- (double)serverProcessCost;
- (void)setServerProcessCost:(double)arg1;
- (double)totalTimeout;
- (void)setTotalTimeout:(double)arg1;
- (id)respDecryptKey;
- (void)setRespDecryptKey:(id)arg1;
- (unsigned long long)cgiStatus;
- (void)setCgiStatus:(unsigned long long)arg1;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg1;
- (BOOL)longPolling;
- (void)setLongPolling:(BOOL)arg1;
- (int)longPollingTimeout;
- (void)setLongPollingTimeout:(int)arg1;
- (BOOL)bindCellular;
- (void)setBindCellular:(BOOL)arg1;
- (BOOL)logResponseWithJsonFormat;
- (void)setLogResponseWithJsonFormat:(BOOL)arg1;
- (unsigned long long)cacheType;
- (void)setCacheType:(unsigned long long)arg1;
- (Class)cacheResponseClass;
- (void)setCacheResponseClass:(Class)arg1;
- (unsigned long long)cacheDuration;
- (void)setCacheDuration:(unsigned long long)arg1;
- (unsigned long long)cacheExpiredDate;
- (void)setCacheExpiredDate:(unsigned long long)arg1;
- (id)cacheExtraKey;
- (void)setCacheExtraKey:(id)arg1;
- (BOOL)needCGIProfile;
- (void)setNeedCGIProfile:(BOOL)arg1;
- (id)cgiProfile;
- (void)setCgiProfile:(id)arg1;
- (id)requestData;
- (void)setRequestData:(id)arg1;
- (id)cgiUrl;
- (void)setCgiUrl:(id)arg1;
- (unsigned int)channelType;
- (void)setChannelType:(unsigned int)arg1;
- (BOOL)canRetry;
- (void)setCanRetry:(BOOL)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (id)cacheResponse;
- (void)setCacheResponse:(id)arg1;
- (void).cxx_destruct;
@end
