@interface FTSExternalRouter : NSObject <ContactPickerViewDelegate, MultiDeleteContactsViewControllerDelegate, MultiQuitChatRoomViewControllerDelegate, CreateChatLogicDelegate>
{
    CreateChatLogic * m_createChatLogic; // +0x8
    id <contactInfoDelegate> _contactInfoDelegate; // +0x10
    id <FTSExternalRouterEntry> _entry; // +0x18
}
+ (void)openBrandProfile:(id)arg1 contact:(id)arg2 params:(id)arg3 leftAction:(SEL)arg4;
- (id)initWithEntry:(id)arg1;
- (void)openContactPickerViewWith:(id)arg1;
- (void)openWeAppWithContact:(id)arg1;
- (void)openFinderWithContact:(id)arg1;
- (void)openKFContact:(id)arg1;
- (void)openWeShopItem:(id)arg1;
- (void)openAiHistoryMsg:(id)arg1 index:(long long)arg2;
- (void)onCreateChatRoom:(id)arg1;
- (void)openMessageContentView:(id)arg1;
- (void)openMultiDeleteContactsPage;
- (void)openMultiQuitChatRoomsPage;
- (void)selectMsgItem:(id)arg1 searchTaskKey:(id)arg2;
- (void)selectMsgItems:(id)arg1 withSessionUsername:(id)arg2 searchTaskKey:(id)arg3;
- (void)openBrandContact:(id)arg1;
- (void)openEnterpriseConvergeSessionListController:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (BOOL)isOpenPluginContactInfoView:(id)arg1;
- (void)onCreateChatContactReturn:(id)arg1;
- (id)viewController;
- (void)onDidFinishedMultiDeleteContacts;
- (void)onDidFinishedMultiQuitChatRooms;
- (void)refreshContactSearchResultsAfterManagement;
- (id)contactInfoDelegate;
- (void)setContactInfoDelegate:(id)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void).cxx_destruct;
@end
