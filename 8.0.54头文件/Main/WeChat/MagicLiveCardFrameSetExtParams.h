@interface MagicLiveCardFrameSetExtParams : NSObject
{
    NSString * _uxInfo; // +0x8
    NSString * _commentScene; // +0x10
    NSString * _enterImmerseType; // +0x18
    NSString * _promotionRecommendInfo; // +0x20
    NSString * _query; // +0x28
    NSString * _gameClientParams; // +0x30
}
- (id)toQueryString;
- (id)description;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)enterImmerseType;
- (void)setEnterImmerseType:(id)arg1;
- (id)promotionRecommendInfo;
- (void)setPromotionRecommendInfo:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)gameClientParams;
- (void)setGameClientParams:(id)arg1;
- (void).cxx_destruct;
@end

