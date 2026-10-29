@interface WCPayGetProfessionViewController : WCPayBaseViewController
{
    WCPayProfession * _selectedProfession; // +0x90
    NSArray * _professions; // +0x98
    id <WCPayGetProfessionViewControllerDelegate> _delegate; // +0xa0
}
- (id)initWithProfessions:(id)arg1;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)clickInfoCell:(id)arg1;
- (id)selectedProfession;
- (void)setSelectedProfession:(id)arg1;
- (id)professions;
- (void)setProfessions:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

