@interface WCFinderAdReportService : MMUserService <MMServiceProtocol>
{
    MMLRUCache * _adReportMetaCache; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateAdReportMetaWithTid:(id)arg1 scene:(int)arg2 metaBlock:(id /* block */)arg3;
- (void)updateAdReportExitActionType:(unsigned long long)arg1 tid:(id)arg2 scene:(int)arg3;
- (void)reportADWithTid:(id)arg1 scene:(int)arg2 endExpose:(BOOL)arg3 reportDict:(id)arg4 adInfo:(id)arg5;
- (void)reportAdCommentWithTid:(id)arg1 scene:(int)arg2 endExpose:(BOOL)arg3 reportDict:(id)arg4 reportBypData:(id)arg5;
- (void)reportPremovieAdWithTid:(id)arg1 scene:(int)arg2 actionType:(unsigned long long)arg3 reportDict:(id)arg4 reportBypData:(id)arg5;
- (void)feedbackCommentAdWithType:(int)arg1 reasonArray:(id)arg2 params:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)_metaKeyWithTid:(id)arg1 scene:(int)arg2;
- (id)_getAndCacheMetaWithTid:(id)arg1 scene:(int)arg2;
- (id)adReportMetaCache;
- (void)setAdReportMetaCache:(id)arg1;
- (void).cxx_destruct;
@end
