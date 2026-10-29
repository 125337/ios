@interface ContactsAuthorityManageContactListViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate>
{
    ContactTagData * _m_tagData; // +0x68
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initData;
- (id)getReloadContactDataList;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(BOOL)arg2;
- (id)m_tagData;
- (void)setM_tagData:(id)arg1;
- (void).cxx_destruct;
@end

