@interface CRChannelReport : NSObject
{
    CRReportAPIClient * _reportClient; // +0x8
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
+ (void)jumpToAppStore:(id)arg1 report:(id)arg2 completion:(id /* block */)arg3;
+ (void)jumpToAppStore:(id)arg1 completionWithBlock:(id /* block */)arg2;
+ (void)presentStoreProductViewController:(id)arg1 root:(id)arg2 report:(id)arg3 completion:(id /* block */)arg4;
+ (void)presentStoreProductViewController:(id)arg1 root:(id)arg2 completionWithBlock:(id /* block */)arg3;
+ (void)setLogging:(BOOL)arg1;
+ (void)setLogLevel:(long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initSingleton;
- (id)reportClient;
- (void)setReportClient:(id)arg1;
- (void).cxx_destruct;
@end

