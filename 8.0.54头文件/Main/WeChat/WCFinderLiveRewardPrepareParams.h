@interface WCFinderLiveRewardPrepareParams : NSObject
{
    unsigned int _rewardProductCount; // +0x8
    unsigned int _rewardAmountInWecoin; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _prepareRewardProductCount; // +0x14
    NSString * _rewardFinderUsername; // +0x18
    NSString * _incomeFinderUsername; // +0x20
    NSData * _liveCookies; // +0x28
    unsigned long long _objectId; // +0x30
    unsigned long long _liveId; // +0x38
    NSString * _rewardProductId; // +0x40
    unsigned long long _sceneFlag; // +0x48
    NSArray * _attackFinderUsernameList; // +0x50
}
- (id)rewardFinderUsername;
- (void)setRewardFinderUsername:(id)arg1;
- (id)incomeFinderUsername;
- (void)setIncomeFinderUsername:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (unsigned int)rewardProductCount;
- (void)setRewardProductCount:(unsigned int)arg1;
- (unsigned int)rewardAmountInWecoin;
- (void)setRewardAmountInWecoin:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)prepareRewardProductCount;
- (void)setPrepareRewardProductCount:(unsigned int)arg1;
- (unsigned long long)sceneFlag;
- (void)setSceneFlag:(unsigned long long)arg1;
- (id)attackFinderUsernameList;
- (void)setAttackFinderUsernameList:(id)arg1;
- (void).cxx_destruct;
@end

