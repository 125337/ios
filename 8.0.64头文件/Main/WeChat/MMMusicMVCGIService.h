@interface MMMusicMVCGIService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _postingMVModeldDic; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)sendGetMVInfoReqWithObjectId:(unsigned long long)arg1 nonceId:(id)arg2;
- (void)postMVWithMVModel:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)reportFinderPostSuccess:(id)arg1;
- (void)reportFinderPostFailure:(id)arg1;
- (id)postingMVModeldDic;
- (void)setPostingMVModeldDic:(id)arg1;
- (void).cxx_destruct;
@end
