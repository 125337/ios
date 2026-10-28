@interface WCFinderStatsReportCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    NSArray * _statsArray; // +0x18
    unsigned long long _reportScene; // +0x20
    FinderClientStatus * _status; // +0x28
    NSArray * _feedIdArray; // +0x30
    NSString * _extraKey; // +0x38
}
- (id)initWithStatsArray:(id)arg1 reportScene:(unsigned long long)arg2 extraKey:(id)arg3 clientStatus:(id)arg4 feedIdArray:(id)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)statsArray;
- (void)setStatsArray:(id)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)feedIdArray;
- (void)setFeedIdArray:(id)arg1;
- (id)extraKey;
- (void)setExtraKey:(id)arg1;
- (void).cxx_destruct;
@end
