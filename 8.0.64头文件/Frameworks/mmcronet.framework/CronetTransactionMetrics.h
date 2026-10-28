@interface CronetTransactionMetrics : NSURLSessionTaskTransactionMetrics
{
    BOOL _proxyConnection; // +0x8
    BOOL _reusedConnection; // +0x9
    NSURLRequest * _request; // +0x10
    NSURLResponse * _response; // +0x18
    NSDate * _fetchStartDate; // +0x20
    NSDate * _domainLookupStartDate; // +0x28
    NSDate * _domainLookupEndDate; // +0x30
    NSDate * _connectStartDate; // +0x38
    NSDate * _secureConnectionStartDate; // +0x40
    NSDate * _secureConnectionEndDate; // +0x48
    NSDate * _connectEndDate; // +0x50
    NSDate * _requestStartDate; // +0x58
    NSDate * _requestEndDate; // +0x60
    NSDate * _responseStartDate; // +0x68
    NSDate * _responseEndDate; // +0x70
    NSString * _networkProtocolName; // +0x78
    long long _resourceFetchType; // +0x80
}
- (id)init;
- (id)description;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)fetchStartDate;
- (void)setFetchStartDate:(id)arg1;
- (id)domainLookupStartDate;
- (void)setDomainLookupStartDate:(id)arg1;
- (id)domainLookupEndDate;
- (void)setDomainLookupEndDate:(id)arg1;
- (id)connectStartDate;
- (void)setConnectStartDate:(id)arg1;
- (id)secureConnectionStartDate;
- (void)setSecureConnectionStartDate:(id)arg1;
- (id)secureConnectionEndDate;
- (void)setSecureConnectionEndDate:(id)arg1;
- (id)connectEndDate;
- (void)setConnectEndDate:(id)arg1;
- (id)requestStartDate;
- (void)setRequestStartDate:(id)arg1;
- (id)requestEndDate;
- (void)setRequestEndDate:(id)arg1;
- (id)responseStartDate;
- (void)setResponseStartDate:(id)arg1;
- (id)responseEndDate;
- (void)setResponseEndDate:(id)arg1;
- (id)networkProtocolName;
- (void)setNetworkProtocolName:(id)arg1;
- (BOOL)isProxyConnection;
- (void)setProxyConnection:(BOOL)arg1;
- (BOOL)isReusedConnection;
- (void)setReusedConnection:(BOOL)arg1;
- (long long)resourceFetchType;
- (void)setResourceFetchType:(long long)arg1;
- (void).cxx_destruct;
@end
