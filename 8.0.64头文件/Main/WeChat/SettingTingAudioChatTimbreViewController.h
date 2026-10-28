@interface SettingTingAudioChatTimbreViewController : SettingBaseViewController
{
    unsigned long long _currentIndex; // +0x80
    NSArray * _availableRoles; // +0x88
    id /* block */ _onDoneBlock; // +0x90
}
- (id)musicChatService;
- (void)viewDidLoad;
- (void)cancel;
- (void)save;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)availableRoles;
- (void)setAvailableRoles:(id)arg1;
- (id /* block */)onDoneBlock;
- (void)setOnDoneBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
