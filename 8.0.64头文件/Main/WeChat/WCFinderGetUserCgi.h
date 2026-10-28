@interface WCFinderGetUserCgi : WCFinderBaseCgi
{
    id <WCFinderGetUserCgiDelegate> _delegate; // +0x8
    NSString * _username; // +0x10
}
- (id)init;
- (void)cgiStart;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
