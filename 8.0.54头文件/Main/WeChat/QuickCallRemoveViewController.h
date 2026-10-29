@interface QuickCallRemoveViewController : SelectSubContactViewController
{
    NSArray * _contacts; // +0x68
    id <QuickCallRemoveViewControllerDelegate> _removeDelegate; // +0x70
}
- (id)initWithContacts:(id)arg1 delegate:(id)arg2;
- (void)viewDidLoad;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (id)viewControllerTitle;
- (long long)numberOfSessions;
- (id)contactAtIndex:(long long)arg1;
- (void)onSelectedContactsChange;
- (void)onDone:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)removeDelegate;
- (void)setRemoveDelegate:(id)arg1;
- (void).cxx_destruct;
@end

