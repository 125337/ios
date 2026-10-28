@interface MMFinderLiveECHotSaleLikeAnimationCenter : NSObject <MMFinderLiveNumberAnimationLogicObserver>
{
    MMFinderLiveNotifyStyleHotSaleCommentPubbleCell * _notifyCell; // +0x8
    NSMutableDictionary * _localData; // +0x10
    NSMutableDictionary * _numberLogics; // +0x18
}
- (id)init;
- (void)updateLocalForProductID:(unsigned long long)arg1 type:(unsigned long long)arg2 value:(unsigned long long)arg3;
- (BOOL)receiveRuleInfo:(id)arg1 withProductID:(unsigned long long)arg2 fromDataSource:(unsigned long long)arg3;
- (id)localForProductID:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)changeNumberWithLogic:(id)arg1;
- (void)receiveHintAnimationInfo:(id)arg1 withProductID:(unsigned long long)arg2 fromDataSource:(unsigned long long)arg3;
- (void)onWillDisplayGoodsCell:(id)arg1;
- (id)provideNumberAnimationLogicWithRuleInfo:(id)arg1 ForProductID:(unsigned long long)arg2;
- (void)finishWithLogic:(id)arg1;
- (id)notifyCell;
- (void)setNotifyCell:(id)arg1;
- (id)localData;
- (void)setLocalData:(id)arg1;
- (id)numberLogics;
- (void)setNumberLogics:(id)arg1;
- (void).cxx_destruct;
@end
