@interface WCFinderLiveGetShopShelfCGI : WCFinderLiveBaseCgi
{
    BOOL _hasReportedMonitorResult; // +0x8
    unsigned int _pullScene; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
    NSData * _ecExtraInfoBuffer; // +0x28
    NSString * _stockId; // +0x30
    unsigned long long _version; // +0x38
    double _monitorStartTime; // +0x40
}
+ (void)onGetResponse:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderTaskId:(id)arg1 stockId:(id)arg2 pullScene:(unsigned int)arg3 liveCookies:(id)arg4 ecExtraInfoBuffer:(id)arg5 version:(unsigned long long)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)start;
- (void)cancel;
- (void)reportMonitorResult:(int)arg1 extraInfo:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)pullScene;
- (void)setPullScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)ecExtraInfoBuffer;
- (void)setEcExtraInfoBuffer:(id)arg1;
- (id)stockId;
- (void)setStockId:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (double)monitorStartTime;
- (void)setMonitorStartTime:(double)arg1;
- (BOOL)hasReportedMonitorResult;
- (void)setHasReportedMonitorResult:(BOOL)arg1;
- (void).cxx_destruct;
@end
