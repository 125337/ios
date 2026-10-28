@interface TBPromoteIconBehaviourStat : NSObject
{
    NSMutableDictionary * _userBehaviourMap; // +0x8
}
- (id)init;
- (id)description;
- (id)descriptionArray;
- (id)getOrCreatePromoteIconBehaviourWithPromoteID:(id)arg1;
- (void)increasePromoteIconShowCount:(id)arg1;
- (id)userBehaviourMap;
- (void)setUserBehaviourMap:(id)arg1;
- (void).cxx_destruct;
@end
