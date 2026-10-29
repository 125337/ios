@interface WCFinderTabSwitchCustomViewInfo : NSObject
{
    Class _viewClass; // +0x8
    id /* block */ _layout; // +0x10
    id /* block */ _configer; // +0x18
    id /* block */ _updater; // +0x20
    UIEdgeInsets _customBarInsets; // +0x28
}
- (Class)viewClass;
- (void)setViewClass:(Class)arg1;
- (id /* block */)layout;
- (void)setLayout:(id /* block */)arg1;
- (id /* block */)configer;
- (void)setConfiger:(id /* block */)arg1;
- (id /* block */)updater;
- (void)setUpdater:(id /* block */)arg1;
- (UIEdgeInsets)customBarInsets;
- (void)setCustomBarInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end

