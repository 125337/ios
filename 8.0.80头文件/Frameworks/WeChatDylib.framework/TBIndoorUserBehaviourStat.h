@interface TBIndoorUserBehaviourStat : NSObject
{
    NSMutableDictionary * _userBehaviourMap; // +0x8
}
- (id)init;
- (id)description;
- (id)descriptionArray;
- (id)getOrCreateUserBehaviourWithbuildingID:(id)arg1;
- (void)increaseShowCount:(id)arg1;
- (void)increaseCallActiveLevelAPICount:(id)arg1;
- (void)increasePickerShowCount:(id)arg1;
- (id)userBehaviourMap;
- (void)setUserBehaviourMap:(id)arg1;
- (void).cxx_destruct;
@end
