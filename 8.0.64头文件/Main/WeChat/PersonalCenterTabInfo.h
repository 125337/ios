@interface PersonalCenterTabInfo : NSObject
{
    NSArray * _groupList; // +0x8
    NSNumber * _interactiveIdentityEnable; // +0x10
}
+ (id)makeWithGroupList:(id)arg1 interactiveIdentityEnable:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)groupList;
- (void)setGroupList:(id)arg1;
- (id)interactiveIdentityEnable;
- (void)setInteractiveIdentityEnable:(id)arg1;
- (void).cxx_destruct;
@end
