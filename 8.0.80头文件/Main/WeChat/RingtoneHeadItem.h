@interface RingtoneHeadItem : NSObject
{
    NSString * _finderObjectId; // +0x8
    NSString * _finderNonceId; // +0x10
    NSString * _thumbUrl; // +0x18
    NSString * _nickname; // +0x20
    NSString * _recommendOverride; // +0x28
}
+ (id)makeWithFinderObjectId:(id)arg1 finderNonceId:(id)arg2 thumbUrl:(id)arg3 description:(id)arg4 nickname:(id)arg5 recommendOverride:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderObjectId;
- (void)setFinderObjectId:(id)arg1;
- (id)finderNonceId;
- (void)setFinderNonceId:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)recommendOverride;
- (void)setRecommendOverride:(id)arg1;
- (void).cxx_destruct;
@end
