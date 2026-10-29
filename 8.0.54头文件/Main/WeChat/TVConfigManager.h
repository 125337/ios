@interface TVConfigManager : NSObject <NSURLConnectionDataDelegate>
{
    NSString * bakPrefix; // +0x8
    NSString * otype; // +0x10
    NSString * platform; // +0x18
    NSString * host; // +0x20
    NSString * port; // +0x28
    NSString * cgi; // +0x30
    NSString * player_channel_id; // +0x38
    NSString * version; // +0x40
    NSString * versionCode; // +0x48
    NSString * ipflag; // +0x50
    NSString * guid; // +0x58
    int MAXRetryTimes; // +0x60
    double timeout; // +0x68
    NSURLConnection * configConnection; // +0x70
    NSString * receiveData; // +0x78
    BOOL useHTTPS; // +0x80
    int retryTime; // +0x84
    BOOL isRequested; // +0x88
}
- (id)init;
- (void)SynRequestForConfig;
- (BOOL)SendHTTPSRequestToHost:(id)arg1 withTimeOut:(double)arg2;
- (void)SendSynRequestToHost:(id)arg1 withTimeOut:(double)arg2;
- (id)MakeGetServerConfigUrl;
- (id)MakeBKGetServerConfigUrl;
- (id)GetTVProxyConfig;
- (id)GetTVProxyVersion;
- (id)GetTVProxyVersionCode;
- (id)GetTVProxyConfigVersion;
- (void)SaveConfig:(id)arg1;
- (void)cancelAttainConfig;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
@end

