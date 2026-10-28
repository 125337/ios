@interface MagicAdCGIMgr : NSObject
+ (void)getAdsCGIWithPosIds:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
+ (void)adsReportCGIWithRequest:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
+ (void)adsReportForPayCGIWithRequest:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
@end
