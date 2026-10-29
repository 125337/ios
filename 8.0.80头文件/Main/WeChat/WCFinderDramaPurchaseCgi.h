@interface WCFinderDramaPurchaseCgi : WCFinderBaseCgi
{
    int _reportScene; // +0x8
    NSString * _finderUsername; // +0x10
    unsigned long long _dramaTopicID; // +0x18
    NSString * _feedID; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithFinderUsername:(id)arg1 dramaTopicID:(unsigned long long)arg2 feedID:(id)arg3 reportScene:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)dramaTopicID;
- (void)setDramaTopicID:(unsigned long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
