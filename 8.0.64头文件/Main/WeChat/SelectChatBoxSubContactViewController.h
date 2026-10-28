@interface SelectChatBoxSubContactViewController : SelectSubContactViewController
{
    NSMutableArray * _contacts; // +0x70
}
- (void)viewDidLoad;
- (id)viewControllerTitle;
- (long long)numberOfSessions;
- (id)contactAtIndex:(long long)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (void).cxx_destruct;
@end
