@interface CBTAsstMoreViewController : MMUIViewController <CBTAsstMoreTabViewDelegate, CBTAsstMemoryHomeViewControllerDelegate>
{
    id <CBTAsstMoreViewControllerDelegate> _delegate; // +0x70
    MMUIButton * _closeButton; // +0x78
    CBTAsstMoreTabView * _tabView; // +0x80
    UIView * _contentContainerView; // +0x88
    CBTAsstMemoryHomeViewController * _memoryViewController; // +0x90
    CBTAsstSettingViewController * _settingViewController; // +0x98
    NSArray * _childControllerList; // +0xa0
    unsigned long long _selectedIndex; // +0xa8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)buildSubviews;
- (void)buildChildControllers;
- (void)viewDidLayoutSubviews;
- (void)onClose;
- (void)updateSelectedIndex:(unsigned long long)arg1;
- (void)moreTabViewDidSelectIndex:(unsigned long long)arg1;
- (void)memoryHomeViewController:(id)arg1 didRequestAdjustWithMemoryId:(id)arg2 memoryContent:(id)arg3 userPostfix:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)memoryViewController;
- (void)setMemoryViewController:(id)arg1;
- (id)settingViewController;
- (void)setSettingViewController:(id)arg1;
- (id)childControllerList;
- (void)setChildControllerList:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
