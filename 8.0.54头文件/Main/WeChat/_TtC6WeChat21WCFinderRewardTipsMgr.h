@interface _TtC6WeChat21WCFinderRewardTipsMgr : MMUserService <MMServiceProtocol>
{
     rewardTipsInfoList; // +0x8
}
- (void)handleRewardTipsListBypMessageWithXml:(id)arg1;
- (void)updateRewardTipsList:(id)arg1;
- (id)rewardTipsInfoWithTriggerType:(unsigned long long)arg1;
- (id)popRewardTipsInfoWithTriggerType:(unsigned long long)arg1;
- (void)prefetchJumpInfoIfNeedWithTriggerType:(unsigned long long)arg1;
- (void)prefetchJumpInfoWithTriggerTypes:(id)arg1;
- (void)showRewardTipsInfoWithTriggerType:(unsigned long long)arg1 params:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end

