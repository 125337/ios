@interface WAPackageDownloadPreConnectLogic : NSObject
{
    NSString * _cdnPreConnectUrl; // +0x8
    unsigned long long _lastPreConnectTimeStampInSeconds; // +0x10
    shared_ptr<CronetCallback> _cb_; // +0x18
}
- (id)init;
- (void)tryDoCdnPreConnect;
- (BOOL)isReachPreConnectGap;
- (id)cdnPreConnectUrl;
- (void)setCdnPreConnectUrl:(id)arg1;
- (unsigned long long)lastPreConnectTimeStampInSeconds;
- (void)setLastPreConnectTimeStampInSeconds:(unsigned long long)arg1;
- (shared_ptr<CronetCallback>)cb_;
- (void)setCb_:(shared_ptr<CronetCallback>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

