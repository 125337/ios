@interface SelectionMenuItemInfo : NSObject
{
    NSString * _menuType; // +0x8
    NSString * _text; // +0x10
}
+ (id)makeWithMenuType:(id)arg1 text:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)menuType;
- (void)setMenuType:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
