@interface WXPNetworkServiceImpl : NSObject <PBMessageObserverDelegate, MMKNetworkService>
- (void)dealloc;
- (id)getBaseRequest:(int)arg1;
- (void)invoke:(id)arg1 mockManager:(id)arg2;
- (unsigned long long)getCgiNewDNSBusinessType:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
