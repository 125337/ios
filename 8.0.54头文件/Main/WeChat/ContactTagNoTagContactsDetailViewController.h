@interface ContactTagNoTagContactsDetailViewController : ContactTagNewDetailViewController <MultiSelectContactsViewControllerDelegate, ContactTagNoTagBatchSetTagViewControllerDelegate>
{
    NSMutableString * m_batchAddLabelFriOpStr; // +0x68
    ContactTagNoTagSelectContactsViewController * m_noTagContactsSelectContactsVC; // +0x70
    ContactTagNoTagBatchSetTagViewController * m_noTagContactsBatchSetTagVC; // +0x78
    id <ContactTagNoTagContactsDetailViewControllerDelegate> _m_contactTagNoTagDelegate; // +0x80
}
- (id)initViewControllerWithContactTagData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)updateNavigationTitleAndBarButton;
- (id)getEmptyViewStr;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initBarButton;
- (void)onClickBackBarButton;
- (void)doBatchSettings;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onNoTagBatchSetTagSuccess;
- (void)reportNoTagContactSetTag;
- (id)m_contactTagNoTagDelegate;
- (void)setM_contactTagNoTagDelegate:(id)arg1;
- (void).cxx_destruct;
@end

