@interface CBTPicCommandMenuItem : NSObject
{
    BOOL _jumpToXiaoWei; // +0x8
    NSString * _identifier; // +0x10
    NSString * _title; // +0x18
    NSArray * _subItems; // +0x20
    id /* block */ _onSelect; // +0x28
    NSString * _sugId; // +0x30
}
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 onSelect:(id /* block */)arg3;
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 sugId:(id)arg3 jumpToXiaoWei:(BOOL)arg4 onSelect:(id /* block */)arg5;
+ (id)categoryItemWithIdentifier:(id)arg1 title:(id)arg2 subItems:(id)arg3;
- (id)initPrivate;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subItems;
- (void)setSubItems:(id)arg1;
- (id /* block */)onSelect;
- (void)setOnSelect:(id /* block */)arg1;
- (id)sugId;
- (void)setSugId:(id)arg1;
- (BOOL)jumpToXiaoWei;
- (void)setJumpToXiaoWei:(BOOL)arg1;
- (void).cxx_destruct;
@end
