@interface BrandFlowListLogic : NSObject
{
    BOOL _isFetching; // +0x8
    unsigned int _sceneToAppendUrl; // +0xc
    unsigned int _subSceneToAppendUrl; // +0x10
    NSData * _lastRequestBuffer; // +0x18
}
+ (void)sendFeedBackReqWithModel:(id)arg1 selectedReasonArr:(id)arg2;
+ (void)reportExposeToSvrWithScene:(unsigned int)arg1 cellModel:(id)arg2 cellPos:(unsigned int)arg3;
- (void)dealloc;
- (void)requestRecommendDataWithScene:(unsigned long long)arg1 enterScene:(unsigned int)arg2 curArrData:(id)arg3 completion:(id /* block */)arg4;
- (void)handleResp:(id)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)finallyHandleWithRecommendCard:(id)arg1 completion:(id /* block */)arg2;
- (id)loadRequestBuffer;
- (id)convertRecommendCardMsg2BrandFlowLisCellModel:(id)arg1;
- (void)refreshSceneToAppendUrlWithCurArrData:(id)arg1;
- (id)lastRequestBuffer;
- (void)setLastRequestBuffer:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (unsigned int)sceneToAppendUrl;
- (void)setSceneToAppendUrl:(unsigned int)arg1;
- (unsigned int)subSceneToAppendUrl;
- (void)setSubSceneToAppendUrl:(unsigned int)arg1;
- (void).cxx_destruct;
@end

