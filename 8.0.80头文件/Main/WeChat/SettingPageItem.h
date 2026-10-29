@interface SettingPageItem : NSObject
{
    id /* block */ _addChild; // +0x8
    id /* block */ _define; // +0x10
    NSString * _title; // +0x18
    Class _cls; // +0x20
    NSMutableArray * _childs; // +0x28
}
+ (id)item;
- (id)initWithTitle:(id)arg1 cls:(Class)arg2;
- (id /* block */)addChild;
- (id /* block */)define;
- (id)childs;
- (id)findViewController:(id)arg1;
- (id)createViewController;
- (void)setAddChild:(id /* block */)arg1;
- (void)setDefine:(id /* block */)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (Class)cls;
- (void)setCls:(Class)arg1;
- (void)setChilds:(id)arg1;
- (void).cxx_destruct;
@end
