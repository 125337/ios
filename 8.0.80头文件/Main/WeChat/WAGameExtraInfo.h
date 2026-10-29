@interface WAGameExtraInfo : MMObject
{
    GetWxaGameConfigResponse_WxagGameOriginalReviewConfig * _gameEvaluateConfig; // +0x8
    GetWxaGameConfigResponse_WxagGameReviewsConfig * _gameReviewConfig; // +0x10
    WxaGameBaseInfo * _gameBaseInfo; // +0x18
}
- (id)gameEvaluateConfig;
- (void)setGameEvaluateConfig:(id)arg1;
- (id)gameReviewConfig;
- (void)setGameReviewConfig:(id)arg1;
- (id)gameBaseInfo;
- (void)setGameBaseInfo:(id)arg1;
- (void).cxx_destruct;
@end
