@interface NewLifeSelectChatRoomHandler : NewLifeActionHandler <SessionSelectControllerDelegate>
{
    BOOL _confirmed; // +0x8
    NSMutableArray * _selectChatRoomList; // +0x10
    SessionSelectController * _viewController; // +0x18
    NSMutableArray * _recentChatRoomList; // +0x20
    NSMutableSet * _recentChatRoomSet; // +0x28
}
- (void)handleRequest:(id)arg1;
- (BOOL)sessionSelectControllerHideSelectFromContactList:(id)arg1;
- (id)sessionSelectController:(id)arg1 alertMessageForExceedingMaxSelectionCount:(unsigned long long)arg2;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)onSessionSelectControllerPageSheetWillClose:(id)arg1;
- (id)sectionTitleForBizChatSession;
- (long long)numberOfRowInBizChatSession;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (BOOL)onShouldFilterContact:(id)arg1;
- (id)selectChatRoomList;
- (void)setSelectChatRoomList:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)confirmed;
- (void)setConfirmed:(BOOL)arg1;
- (id)recentChatRoomList;
- (void)setRecentChatRoomList:(id)arg1;
- (id)recentChatRoomSet;
- (void)setRecentChatRoomSet:(id)arg1;
- (void).cxx_destruct;
@end

