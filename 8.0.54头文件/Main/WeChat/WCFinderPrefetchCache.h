@interface WCFinderPrefetchCache : NSObject <PBCoding>
{
    WXPBGeneratedMessage * _request; // +0x8
    WXPBGeneratedMessage * _response; // +0x10
    unsigned long long _requestTime; // +0x18
    unsigned long long _responseTime; // +0x20
    unsigned long long _expiredTime; // +0x28
    NSData * _extraData; // +0x30
    id /* block */ _responseBlock; // +0x38
    NSString * _requestCls; // +0x40
    NSData * _innerRequestData; // +0x48
    NSString * _responseCls; // +0x50
    NSData * _innerResponseData; // +0x58
}
+ (void)PBArrayAdd_requestCls;
+ (void)PBArrayAdd_innerRequestData;
+ (void)PBArrayAdd_requestTime;
+ (void)PBArrayAdd_responseCls;
+ (void)PBArrayAdd_innerResponseData;
+ (void)PBArrayAdd_responseTime;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_extraData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)setRequest:(id)arg1;
- (id)request;
- (void)setResponse:(id)arg1;
- (id)response;
- (unsigned long long)requestId;
- (unsigned long long)requestTime;
- (void)setRequestTime:(unsigned long long)arg1;
- (unsigned long long)responseTime;
- (void)setResponseTime:(unsigned long long)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id /* block */)responseBlock;
- (void)setResponseBlock:(id /* block */)arg1;
- (id)requestCls;
- (void)setRequestCls:(id)arg1;
- (id)innerRequestData;
- (void)setInnerRequestData:(id)arg1;
- (id)responseCls;
- (void)setResponseCls:(id)arg1;
- (id)innerResponseData;
- (void)setInnerResponseData:(id)arg1;
- (void).cxx_destruct;
@end

