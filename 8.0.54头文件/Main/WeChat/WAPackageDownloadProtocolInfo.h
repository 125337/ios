@interface WAPackageDownloadProtocolInfo : NSObject
{
    BOOL _useHttp2; // +0x8
    BOOL _useQuic; // +0x9
    BOOL _socketReused; // +0xa
    BOOL _useDownloadResumption; // +0xb
    int _rtt; // +0xc
    int _statusCode; // +0x10
    int _networkEstimateType; // +0x14
    int _httpRttEstimate; // +0x18
    int _transportRttEstimate; // +0x1c
    int _downstreamThroughputKbpsEstimate; // +0x20
    int _throughputKbps; // +0x24
    int _peerPort; // +0x28
    unsigned int _dnsType; // +0x2c
    unsigned long long _protocol; // +0x30
    unsigned long long _downloadType; // +0x38
    unsigned long long _taskStartTime; // +0x40
    unsigned long long _redirectStartTime; // +0x48
    unsigned long long _redirectEndTime; // +0x50
    unsigned long long _fetchStartTime; // +0x58
    unsigned long long _domainLookUpStartTime; // +0x60
    unsigned long long _domainLookUpEndTime; // +0x68
    unsigned long long _connectStartTime; // +0x70
    unsigned long long _connectEndTime; // +0x78
    unsigned long long _secureConnectionStartTime; // +0x80
    unsigned long long _secureConnectionEndTime; // +0x88
    unsigned long long _requestStartTime; // +0x90
    unsigned long long _requestEndTime; // +0x98
    unsigned long long _responseStartTime; // +0xa0
    unsigned long long _responseEndTime; // +0xa8
    NSString * _protocolStr; // +0xb0
    NSString * _peerIp; // +0xb8
    long long _sentBytesCount; // +0xc0
    long long _receivedBytesCount; // +0xc8
    NSDictionary * _headerDic; // +0xd0
}
- (id)initWithProtocol:(unsigned long long)arg1;
- (unsigned long long)protocol;
- (void)setProtocol:(unsigned long long)arg1;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (BOOL)useHttp2;
- (void)setUseHttp2:(BOOL)arg1;
- (BOOL)useQuic;
- (void)setUseQuic:(BOOL)arg1;
- (unsigned long long)taskStartTime;
- (void)setTaskStartTime:(unsigned long long)arg1;
- (unsigned long long)redirectStartTime;
- (void)setRedirectStartTime:(unsigned long long)arg1;
- (unsigned long long)redirectEndTime;
- (void)setRedirectEndTime:(unsigned long long)arg1;
- (unsigned long long)fetchStartTime;
- (void)setFetchStartTime:(unsigned long long)arg1;
- (unsigned long long)domainLookUpStartTime;
- (void)setDomainLookUpStartTime:(unsigned long long)arg1;
- (unsigned long long)domainLookUpEndTime;
- (void)setDomainLookUpEndTime:(unsigned long long)arg1;
- (unsigned long long)connectStartTime;
- (void)setConnectStartTime:(unsigned long long)arg1;
- (unsigned long long)connectEndTime;
- (void)setConnectEndTime:(unsigned long long)arg1;
- (unsigned long long)secureConnectionStartTime;
- (void)setSecureConnectionStartTime:(unsigned long long)arg1;
- (unsigned long long)secureConnectionEndTime;
- (void)setSecureConnectionEndTime:(unsigned long long)arg1;
- (unsigned long long)requestStartTime;
- (void)setRequestStartTime:(unsigned long long)arg1;
- (unsigned long long)requestEndTime;
- (void)setRequestEndTime:(unsigned long long)arg1;
- (unsigned long long)responseStartTime;
- (void)setResponseStartTime:(unsigned long long)arg1;
- (unsigned long long)responseEndTime;
- (void)setResponseEndTime:(unsigned long long)arg1;
- (id)protocolStr;
- (void)setProtocolStr:(id)arg1;
- (int)rtt;
- (void)setRtt:(int)arg1;
- (int)statusCode;
- (void)setStatusCode:(int)arg1;
- (int)networkEstimateType;
- (void)setNetworkEstimateType:(int)arg1;
- (int)httpRttEstimate;
- (void)setHttpRttEstimate:(int)arg1;
- (int)transportRttEstimate;
- (void)setTransportRttEstimate:(int)arg1;
- (int)downstreamThroughputKbpsEstimate;
- (void)setDownstreamThroughputKbpsEstimate:(int)arg1;
- (int)throughputKbps;
- (void)setThroughputKbps:(int)arg1;
- (id)peerIp;
- (void)setPeerIp:(id)arg1;
- (int)peerPort;
- (void)setPeerPort:(int)arg1;
- (BOOL)socketReused;
- (void)setSocketReused:(BOOL)arg1;
- (long long)sentBytesCount;
- (void)setSentBytesCount:(long long)arg1;
- (long long)receivedBytesCount;
- (void)setReceivedBytesCount:(long long)arg1;
- (unsigned int)dnsType;
- (void)setDnsType:(unsigned int)arg1;
- (id)headerDic;
- (void)setHeaderDic:(id)arg1;
- (BOOL)useDownloadResumption;
- (void)setUseDownloadResumption:(BOOL)arg1;
- (void).cxx_destruct;
@end

