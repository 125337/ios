@interface WCStoryActionToolBar : MMUIView
{
    UIView * _toolBar; // +0x8
    NSMutableArray * _toolbarItemList; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)toolBar;
- (void)reloadButtons;
- (void)addTapRecognizer;
- (unsigned long long)numberOfButtons;
- (void)show;
- (void)addButtonWithTitle:(id)arg1 iconName:(id)arg2 isDestructive:(BOOL)arg3 handler:(id /* block */)arg4;
- (void)hideSelf;
- (void)clickButton:(id)arg1;
- (void)setToolBar:(id)arg1;
- (id)toolbarItemList;
- (void)setToolbarItemList:(id)arg1;
- (void).cxx_destruct;
@end
