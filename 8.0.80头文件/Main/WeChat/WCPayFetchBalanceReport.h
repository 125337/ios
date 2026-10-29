@interface WCPayFetchBalanceReport : NSObject
{
    NSString * _reportSessionId; // +0x8
    WCPayBindCardInfo * _defaultCardBinInfo; // +0x10
}
- (id)init;
- (void)setDefaultCardBinInfo:(id)arg1;
- (void)reportActionId:(unsigned int)arg1 cardBinInfo:(id)arg2;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)defaultCardBinInfo;
- (void).cxx_destruct;
@end
