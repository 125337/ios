@interface FinderBulletSettingViewController : MMUIViewController
{
     contentVM; // +0x8
     reportContext; // +0x10
     changeOpenState; // +0x28
     pushViewController; // +0x38
     committedOpenState; // +0x48
     pendingOpenState; // +0x49
     requestInFlight; // +0x4a
     confirmationVisible; // +0x4b
     displaySwitchControl; // +0x50
     $__lazy_storage_$_tableViewInfo; // +0x58
}
- (id)initWithContentVM:(id)arg1 commentScene:(int)arg2 changeOpenState:(id /* block */)arg3 pushViewController:(id /* block */)arg4;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onDisplaySwitchTapped;
- (void)openBlackWordSettings;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
