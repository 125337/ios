@interface ContactsSelectorController : MMObject <MultiSelectContactsViewControllerDelegate, SessionSelectControllerDelegate, WCSelectorViewDelegate, WCSelectorViewDataSource, WCContactItemDeleteViewDelegate>
{
    NSMutableArray * _arrFilteredContacts; // +0x8
    NSMutableArray * _arrContacts; // +0x10
    WCSelectorView * _selectorView; // +0x18
    NSMutableDictionary * _dicContactItemDeleteView; // +0x20
    UINavigationController * _navigationController; // +0x28
    id <SelectorControllerDelegate> _delegate; // +0x30
    id <ContactsSelectorControllerDelegate> _selectDelegate; // +0x38
    BOOL _hasSelectCountLimit; // +0x40
    unsigned int _selectCountLimit; // +0x44
    BOOL _togetherEnabled; // +0x48
    NSString * _subtitle; // +0x50
    NSString * _selectContactVCTitleText; // +0x58
    NSString * _headerBarText; // +0x60
    UIView * _customContactListFooterView; // +0x68
    NSString * _noResultTipText; // +0x70
    long long _contactsSelectorType; // +0x78
    WCMomentsPostReportSession * _postReportSession; // +0x80
}
- (void)removeContact:(id)arg1;
- (id)getViewController;
- (id)init;
- (void)addContact;
- (void)showMutiSelectContactViewController;
- (void)commonSetupMutiSelectContactViewController:(id)arg1;
- (void)setupMutiSelectContactViewControllerInSessionSelectController:(id)arg1;
- (void)showSessionSelectController;
- (void)showTogetherGuideViewIfNeededInView:(id)arg1;
- (void)didSelectContacts:(id)arg1;
- (void)didCancelSelectingContacts;
- (unsigned long long)numbersOfViews;
- (id)viewAtIndex:(unsigned long long)arg1;
- (CGSize)sizeForViews;
- (BOOL)shouldShowDeleteView;
- (void)onClickWholeView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)onSessionSelectControllerDidPresent:(id)arg1;
- (void)onSessionSelectController:(id)arg1 prepareMultiSelectContactsViewController:(id)arg2;
- (id)sessionSelectController:(id)arg1 alertMessageForExceedingMaxSelectionCount:(unsigned long long)arg2;
- (void)onClickHeadImage:(id)arg1 withContact:(id)arg2;
- (void)onClickDeleteButton:(id)arg1 withContact:(id)arg2;
- (id)arrFilteredContacts;
- (void)setArrFilteredContacts:(id)arg1;
- (id)arrContacts;
- (void)setArrContacts:(id)arg1;
- (id)selectorView;
- (void)setSelectorView:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectDelegate;
- (void)setSelectDelegate:(id)arg1;
- (BOOL)hasSelectCountLimit;
- (void)setHasSelectCountLimit:(BOOL)arg1;
- (unsigned int)selectCountLimit;
- (void)setSelectCountLimit:(unsigned int)arg1;
- (BOOL)togetherEnabled;
- (void)setTogetherEnabled:(BOOL)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)selectContactVCTitleText;
- (void)setSelectContactVCTitleText:(id)arg1;
- (id)headerBarText;
- (void)setHeaderBarText:(id)arg1;
- (id)customContactListFooterView;
- (void)setCustomContactListFooterView:(id)arg1;
- (id)noResultTipText;
- (void)setNoResultTipText:(id)arg1;
- (long long)contactsSelectorType;
- (void)setContactsSelectorType:(long long)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (void).cxx_destruct;
@end
