@interface VcardViewController : MMUIViewController <CNContactViewControllerDelegate, CNContactPickerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ILinkEventExt>
{
    MMVcardItem * _vcardItem; // +0x70
    MMTableView * _tableView; // +0x78
    NSString * _copyedText; // +0x80
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapSectionToSectionType; // +0x88
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapPersonCellToCellType; // +0xa0
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapUrlCellToCellType; // +0xb8
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapBirthdayCellToCellType; // +0xd0
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapNoteCellToCellType; // +0xe8
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapLogoCellToCellType; // +0x100
    map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapSoundCellToCellType; // +0x118
}
- (BOOL)containDigit:(id)arg1;
- (void)initPersonSectionCellType;
- (void)initUrlSectionCellType;
- (void)initBirthdaySectionCellType;
- (void)initNoteSectionCellType;
- (void)initLogoSectionCellType;
- (void)initSoundSectionCellType;
- (void)initCellType;
- (void)initSectionType;
- (void)initData;
- (id)getShowName:(id)arg1;
- (void)initHeaderView;
- (void)onAddContact:(id)arg1;
- (void)initFooterView;
- (void)initView;
- (void)onReturn;
- (void)viewDidLoad;
- (id)convertVcardAddressToCNAddress:(id)arg1;
- (void)addToExistContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)copyVcardPropertyToContact:(id)arg1;
- (void)createNewContact;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callPhoneNumber:(id)arg1;
- (void)selectPersonSectionRow:(unsigned long long)arg1;
- (id)ensureHttpScheme:(id)arg1;
- (void)selectUrlSectionRow:(unsigned long long)arg1;
- (void)selectSoundSectionRow:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)getLinesForLabelValueText:(id)arg1;
- (void)makeCell:(id)arg1 col:(id)arg2 value:(id)arg3;
- (id)validAddressFields:(id)arg1;
- (void)makeAddressCell:(id)arg1 addressType:(id)arg2 addressItem:(id)arg3;
- (void)makePersonSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeUrlSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeBirthdaySectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeNoteSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeLogoSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeSoundCell:(id)arg1;
- (void)makeSoundSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (double)heightForCellText:(id)arg1;
- (double)heightForCellAddress:(id)arg1;
- (double)heightForPersonSectionRow:(unsigned long long)arg1;
- (double)heightForUrlSectionRow:(unsigned long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCopy:(id)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)vcardItem;
- (void)setVcardItem:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)copyedText;
- (void)setCopyedText:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
