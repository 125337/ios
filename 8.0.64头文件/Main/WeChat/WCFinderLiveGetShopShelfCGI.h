@interface WCFinderLiveGetShopShelfCGI : WCFinderLiveBaseCgi
{
    unsigned int _pullScene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
    NSString * _stockId; // +0x28
    unsigned long long _version; // +0x30
}
+ (void)onGetResponse:(id)arg1 forTaskId:(id)arg2;
- (id)initWithFinderTaskId:(id)arg1 stockId:(id)arg2 pullScene:(unsigned int)arg3 liveCookies:(id)arg4 version:(unsigned long long)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
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
- (id)stockId;
- (void)setStockId:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
