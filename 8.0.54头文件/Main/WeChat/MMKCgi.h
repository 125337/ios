@interface MMKCgi : NSObject
{
    Handle<std::shared_ptr<kinda::KCgi>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
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
- (void).cxx_destruct;
- (id).cxx_construct;
@end

