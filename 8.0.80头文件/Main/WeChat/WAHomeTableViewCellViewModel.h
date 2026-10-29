@interface WAHomeTableViewCellViewModel : NSObject
{
    WAAppItemData * _appItem; // +0x8
    NSMutableArray * _menuItemsArray; // +0x10
    WAContact * _oContact; // +0x18
}
+ (id)createByAppItem:(id)arg1 menuItemArray:(id)arg2 contact:(id)arg3;
- (id)appItem;
- (void)setAppItem:(id)arg1;
- (id)menuItemsArray;
- (void)setMenuItemsArray:(id)arg1;
- (id)oContact;
- (void)setOContact:(id)arg1;
- (void).cxx_destruct;
@end
