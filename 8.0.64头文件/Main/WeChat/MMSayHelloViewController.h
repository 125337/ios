@interface MMSayHelloViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, PBMessageObserverDelegate>
{
    UITextField * m_sayHelloTextView; // +0x70
    NSString * m_helloContent; // +0x78
    CContact * m_helloReceiver; // +0x80
    unsigned int m_eventID; // +0x88
    id <MMSayHelloViewControllerDelegate> m_delegate; // +0x90
}
- (id)init;
- (void)dealloc;
- (BOOL)doSayHello:(id)arg1;
- (void)onSendSayHello:(id)arg1;
- (void)onCancelSendSayHello;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)onBeginEdit:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)quitSayHello;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)sayHelloTextView;
- (void)setSayHelloTextView:(id)arg1;
- (id)helloContent;
- (void)setHelloContent:(id)arg1;
- (id)helloReceiver;
- (void)setHelloReceiver:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
