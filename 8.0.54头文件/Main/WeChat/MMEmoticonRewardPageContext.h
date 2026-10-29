@interface MMEmoticonRewardPageContext : MMEmoticonLiteAppPageContextBase
{
    unsigned long long _rewardScene; // +0x8
    NSString * _productId; // +0x10
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (unsigned long long)rewardScene;
- (void)setRewardScene:(unsigned long long)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (void).cxx_destruct;
@end

