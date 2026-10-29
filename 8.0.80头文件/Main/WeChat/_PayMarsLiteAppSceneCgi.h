@interface _PayMarsLiteAppSceneCgi : MMKCgi
{
    int _cgiId; // +0x8
    int _channelType; // +0xc
    int _timeoutMs; // +0x10
    int _retryCount; // +0x14
    long long _nativeCallbackPtr; // +0x18
    NSString * _cgiUrl; // +0x20
    NSData * _requestData; // +0x28
}
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
- (long long)nativeCallbackPtr;
- (void)setNativeCallbackPtr:(long long)arg1;
- (int)cgiId;
- (void)setCgiId:(int)arg1;
- (id)cgiUrl;
- (void)setCgiUrl:(id)arg1;
- (int)channelType;
- (void)setChannelType:(int)arg1;
- (int)timeoutMs;
- (void)setTimeoutMs:(int)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (id)requestData;
- (void)setRequestData:(id)arg1;
- (void).cxx_destruct;
@end
