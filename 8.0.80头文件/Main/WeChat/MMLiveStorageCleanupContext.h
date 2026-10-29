@interface MMLiveStorageCleanupContext : NSObject
{
    unsigned long long _contributionStage; // +0x8
    NSMutableArray * _deviationDirectives; // +0x10
    NSObject<OS_dispatch_group> * _externalCleanupTasksGroup; // +0x18
    unsigned long long _externalCleanupContribution; // +0x20
}
- (void)addPathToBePreserved:(id)arg1;
- (void)addPathToBeCleanedUp:(id)arg1;
- (void)addCleanupContributingTask:(id /* block */)arg1;
- (void)addDeviationDirectiveWithType:(unsigned long long)arg1 forPath:(id)arg2;
- (unsigned long long)contributionStage;
- (void)setContributionStage:(unsigned long long)arg1;
- (id)deviationDirectives;
- (void)setDeviationDirectives:(id)arg1;
- (id)externalCleanupTasksGroup;
- (void)setExternalCleanupTasksGroup:(id)arg1;
- (unsigned long long)externalCleanupContribution;
- (void)setExternalCleanupContribution:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
