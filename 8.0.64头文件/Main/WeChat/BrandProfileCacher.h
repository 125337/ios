@interface BrandProfileCacher : MMUserService <MMServiceProtocol>
{
    BOOL _needShowRecommendFollowView; // +0x8
    MemoryMappedKV * _bizProfileSlotKV; // +0x10
    NSMutableSet * _needShowRecommendFollowSet; // +0x18
}
- (void)onServiceInit;
- (void)markBrandUsername:(id)arg1 needToShowRecommendFollowView:(BOOL)arg2;
- (BOOL)shouldShowRecommendFollowViewForUsername:(id)arg1;
- (id)readProfileCacheItemForBrand:(id)arg1;
- (BOOL)writeProfileCacheItem:(id)arg1 forBrand:(id)arg2;
- (void)checkOverwriteRespOnFeatureMsg:(id)arg1 withCacheItem:(id)arg2;
- (void)markNeedToShowRecommendFollowView:(BOOL)arg1;
- (BOOL)checkNeedToShowRecommendFollowView;
- (void)updateClickCommendCookie:(id)arg1 forUsername:(id)arg2;
- (id)getClickCommendCookie:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)bizProfileSlotKV;
- (void)setBizProfileSlotKV:(id)arg1;
- (BOOL)needShowRecommendFollowView;
- (void)setNeedShowRecommendFollowView:(BOOL)arg1;
- (id)needShowRecommendFollowSet;
- (void)setNeedShowRecommendFollowSet:(id)arg1;
- (void).cxx_destruct;
@end
