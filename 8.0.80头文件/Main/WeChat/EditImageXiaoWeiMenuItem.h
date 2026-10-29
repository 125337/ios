@interface EditImageXiaoWeiMenuItem : NSObject
{
    NSString * _title; // +0x8
    id /* block */ _action; // +0x10
    EditImageXiaoWeiMenu * _submenu; // +0x18
}
+ (id)itemWithTitle:(id)arg1 action:(id /* block */)arg2;
+ (id)itemWithTitle:(id)arg1 submenu:(id)arg2;
- (BOOL)isCategory;
- (id)title;
- (void)setTitle:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (id)submenu;
- (void)setSubmenu:(id)arg1;
- (void).cxx_destruct;
@end
