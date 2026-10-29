@interface EditImageXiaoWeiMenu : NSObject
{
    NSString * _title; // +0x8
    NSArray * _items; // +0x10
}
+ (id)menuWithTitle:(id)arg1 items:(id)arg2;
+ (id)standardAIMenuWithCommandHandler:(id /* block */)arg1 moreHandler:(id /* block */)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
