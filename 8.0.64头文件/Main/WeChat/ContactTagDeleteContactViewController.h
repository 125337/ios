@interface ContactTagDeleteContactViewController : MultiSelectContactsViewController
{
    ContactTagData * _m_contactTagData; // +0xe8
    NSArray * _arrContactNameList; // +0xf0
}
- (void)viewDidLoad;
- (void)updatePanelBtn;
- (void)onCancel:(id)arg1;
- (BOOL)onShouldSelectContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)m_contactTagData;
- (void)setM_contactTagData:(id)arg1;
- (id)arrContactNameList;
- (void)setArrContactNameList:(id)arg1;
- (void).cxx_destruct;
@end
