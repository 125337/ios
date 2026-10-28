@interface WAOverallAuthListCellDataModel : NSObject
{
    WAAuthorizationItemData * _authItem; // +0x8
    WAContact * _contact; // +0x10
}
+ (id)createByAuthItem:(id)arg1 contact:(id)arg2;
- (id)authItem;
- (void)setAuthItem:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
