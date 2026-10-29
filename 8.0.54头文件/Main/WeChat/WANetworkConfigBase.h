@interface WANetworkConfigBase : NSObject <WANetworkConfigBaseDataSource>
{
    NSString * _appID; // +0x8
    unsigned long long _appVersion; // +0x10
    BOOL _skipPortCheck; // +0x18
    unsigned int _timeoutMS; // +0x1c
    NSString * _httpHeaderReferer; // +0x20
    NSString * _mmUserAgent; // +0x28
    NSArray * _arrCertData; // +0x30
    NSArray * _arrDomainList; // +0x38
    NSString * _httpHeaderMode; // +0x40
    NSArray * _arrHttpHeaderBlackList; // +0x48
    NSArray * _arrHttpHeaderWhiteList; // +0x50
}
+ (BOOL)validateChallenge:(id)arg1 withCertificateDataArray:(id)arg2;
+ (id)certificateDataTrustChainForServerTrust:(__SecTrust *)arg1;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (int)checkIp:(id)arg1;
- (BOOL)checkDomain:(id)arg1;
- (BOOL)checkDomainList:(id)arg1;
- (id)filterHttpHeader:(id)arg1;
- (BOOL)validateChallenge:(id)arg1;
- (void)loadConfig:(id)arg1;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)timeoutMS;
- (void)setTimeoutMS:(unsigned int)arg1;
- (id)httpHeaderReferer;
- (void)setHttpHeaderReferer:(id)arg1;
- (id)mmUserAgent;
- (void)setMmUserAgent:(id)arg1;
- (id)arrCertData;
- (void)setArrCertData:(id)arg1;
- (BOOL)skipPortCheck;
- (void)setSkipPortCheck:(BOOL)arg1;
- (id)arrDomainList;
- (void)setArrDomainList:(id)arg1;
- (id)httpHeaderMode;
- (void)setHttpHeaderMode:(id)arg1;
- (id)arrHttpHeaderBlackList;
- (void)setArrHttpHeaderBlackList:(id)arg1;
- (id)arrHttpHeaderWhiteList;
- (void)setArrHttpHeaderWhiteList:(id)arg1;
- (void).cxx_destruct;
@end

