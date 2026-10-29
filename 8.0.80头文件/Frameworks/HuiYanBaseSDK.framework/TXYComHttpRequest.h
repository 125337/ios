@interface TXYComHttpRequest : NSObject
{
    BOOL _isGZip; // +0x8
    BOOL _needLocalDns; // +0x9
    NSString * _url; // +0x10
    NSString * _backUrl; // +0x18
    NSDictionary * _header; // +0x20
    NSString * _method; // +0x28
    id _bodyParams; // +0x30
    NSArray * _priority; // +0x38
    NSDictionary * _ipMap; // +0x40
    id /* block */ _success; // +0x48
    id /* block */ _failure; // +0x50
    id /* block */ _downloadSuccess; // +0x58
    double _timeoutInterval; // +0x60
    unsigned long long _currentStage; // +0x68
    NSString * _ipHost; // +0x70
    NSString * _ipUrl; // +0x78
}
- (void)dealloc;
- (id)init;
- (void)nextStage;
- (id)currentRequestUrl;
- (void)setIpMap:(id)arg1;
- (id)createRequest;
- (id)createPostData;
- (void)updateHeader:(id)arg1;
- (id)convertToJsonData:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)backUrl;
- (void)setBackUrl:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)bodyParams;
- (void)setBodyParams:(id)arg1;
- (BOOL)isGZip;
- (void)setIsGZip:(BOOL)arg1;
- (id)priority;
- (void)setPriority:(id)arg1;
- (id)ipMap;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id /* block */)downloadSuccess;
- (void)setDownloadSuccess:(id /* block */)arg1;
- (double)timeoutInterval;
- (void)setTimeoutInterval:(double)arg1;
- (unsigned long long)currentStage;
- (BOOL)needLocalDns;
- (void)setNeedLocalDns:(BOOL)arg1;
- (id)ipHost;
- (void)setIpHost:(id)arg1;
- (id)ipUrl;
- (void)setIpUrl:(id)arg1;
- (void).cxx_destruct;
@end
