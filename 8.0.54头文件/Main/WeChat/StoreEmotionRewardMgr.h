@interface StoreEmotionRewardMgr : MMUserService <StoreEmotionRewardGetRewardCgiDelegate, MMServiceProtocol>
{
    StoreEmotionRewardTipsStatisticsLogicObject * m_rewardTipsStatisticsLogic; // +0x8
    NSMutableDictionary * _getAllRewardInfoCgiDic; // +0x10
    NSMutableDictionary * _getPriceOnlyRewardInfoCgiDic; // +0x18
    NSMutableDictionary * _rewardInfoCacheDic; // +0x20
}
+ (BOOL)isCloseReward;
+ (BOOL)isHideStopShowRewardTipsButton;
- (BOOL)isCloseRewardTips;
- (void)onServiceInit;
- (id)getAllRewardInfoCgiDic;
- (id)getPriceOnlyRewardInfoCgiDic;
- (id)rewardInfoCacheDic;
- (id)rewardInfoCacheForPid:(id)arg1;
- (id)prepareForRewardWithPid:(id)arg1 needAllInfo:(BOOL)arg2;
- (void)saveRewardInfo:(id)arg1 toFileWithPid:(id)arg2;
- (void)removeRewardInfoCacheForPid:(id)arg1;
- (void)checkIsNeedShowRewardTipsWithWrap:(id)arg1;
- (void)setCanShowRewardTips:(BOOL)arg1;
- (void)onGetRewardCgiOkWithPid:(id)arg1 Prices:(id)arg2 DonorNum:(unsigned int)arg3 Donors:(id)arg4 EmotionReward:(id)arg5;
- (void)onGetRewardCgiOkWithPid:(id)arg1 Prices:(id)arg2 EmotionReward:(id)arg3;
- (void)onGetRewardCgiFailedWithPid:(id)arg1;
- (void)onGetRewardCgiFailedForUnrewardableWithPid:(id)arg1;
- (void)setGetAllRewardInfoCgiDic:(id)arg1;
- (void)setGetPriceOnlyRewardInfoCgiDic:(id)arg1;
- (void)setRewardInfoCacheDic:(id)arg1;
- (void).cxx_destruct;
@end

