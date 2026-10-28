@interface WCCoinCgiError : WCBaseNetworkingError
{
    InterceptPopUp * _interceptInfo; // +0x8
}
+ (id)errorWith:(id)arg1;
- (id)interceptInfo;
- (void)setInterceptInfo:(id)arg1;
- (void).cxx_destruct;
@end
