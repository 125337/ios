@interface QBDNSQueryItem : NSObject
{
    NSURLRequest * _dnsRequest; // +0x8
    NSURL * _originURL; // +0x10
    long long _status; // +0x18
    long long _errCode; // +0x20
}
- (void).cxx_destruct;
- (id)dnsRequest;
- (void)setDnsRequest:(id)arg1;
- (id)originURL;
- (void)setOriginURL:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (long long)errCode;
- (void)setErrCode:(long long)arg1;
@end
