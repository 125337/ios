@interface WXPLiteAppBaseCgi : MMKCgi
{
    BOOL _needNotify; // +0x8
    int _cgiId; // +0xc
    int _channelType; // +0x10
    int _timeout; // +0x14
    int _retryCount; // +0x18
    id /* block */ _callback; // +0x20
    NSString * _cgiUrl; // +0x28
    NSData * _requestData; // +0x30
    NSString * _routeInfo; // +0x38
}
- (id)initWithConfig:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (int)getCgiId;
- (id)getCgiUrl;
- (int)getChannelType;
- (int)getTimeout;
- (int)getRetryCount;
- (id)getRequestData;
- (BOOL)getNeedNotify;
- (id)getRouteInfo;
- (long long)getNewDNSBusinessType;
- (void)onResp:(int)arg1 responseData:(id)arg2 extraInfo:(id)arg3;
- (BOOL)needMarkPayNewDnsTag;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (int)cgiId;
- (void)setCgiId:(int)arg1;
- (id)cgiUrl;
- (void)setCgiUrl:(id)arg1;
- (int)channelType;
- (void)setChannelType:(int)arg1;
- (int)timeout;
- (void)setTimeout:(int)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (id)requestData;
- (void)setRequestData:(id)arg1;
- (BOOL)needNotify;
- (void)setNeedNotify:(BOOL)arg1;
- (id)routeInfo;
- (void)setRouteInfo:(id)arg1;
- (void).cxx_destruct;
@end
