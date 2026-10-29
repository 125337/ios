@interface SettingIndexNode : NSObject
{
    NSString * _title; // +0x8
    NSString * _identifier; // +0x10
    UIViewController * _viewController; // +0x18
    Class _viewControllerClass; // +0x20
    SEL _selector; // +0x28
    NSMutableArray * _children; // +0x30
    SettingIndexNode * _parent; // +0x38
    WCTableViewCellManager * _cellInfoManager; // +0x40
}
- (id)initWithTitle:(id)arg1;
- (void)refreshIdentifier;
- (void)refreshAllIdentifiers;
- (void)addChild:(id)arg1;
- (id)pathComponents;
- (id)fullPath;
- (BOOL)shouldShowPath;
- (id)displayPath;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (Class)viewControllerClass;
- (void)setViewControllerClass:(Class)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id)children;
- (void)setChildren:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)cellInfoManager;
- (void)setCellInfoManager:(id)arg1;
- (void).cxx_destruct;
@end
