@interface MJShootSelectionSheetItem : NSObject
{
    BOOL _selected; // +0x8
    NSString * _title; // +0x10
    NSString * _identifier; // +0x18
}
+ (id)itemWithTitle:(id)arg1 identifier:(id)arg2;
+ (id)itemWithTitle:(id)arg1 identifier:(id)arg2 selected:(BOOL)arg3;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
